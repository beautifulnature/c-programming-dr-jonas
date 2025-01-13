/* books1.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct s_book{
    char title[64];
    int pages;
    struct s_book *next;
};

typedef struct s_book Book;

Book *first;

void addBook(char *title, int pages){

    Book *p, *new;

    if(!first){
        p = malloc(sizeof(Book));
        memset(p, 0, sizeof(Book));
        strncpy(p->title, title, 63);
        p->pages = pages;
        p->next = 0;
        first = p;
        return;
    }

    for(p = first; p->next; p=p->next);

    new = malloc(sizeof(Book));
    memset(new, 0, sizeof(Book));
    strncpy(new->title, title, 63);
    new->pages = pages;
    new->next = 0;

    p->next = new;

    return;

}

void listbooks(char *searchstr){
    
    Book *p;
    
    for(p = first; p; p=p->next){
        if(!searchstr || !strcmp(searchstr, p->title)){
            printf("Pages: %d\tTitle: %s\n", p->pages, p->title);
        }
    }    

    return;
}

int rmbooks(char *searchstr){
    
    Book *p, *ph;
    
    for(p = first; p; ph=p, p=p->next){
        if(!strcmp(searchstr, p->title)){
            if(first == p){
                first = p->next;
            }
            ph->next = (p->next) ? p->next : 0;
            free(p);

            return 1;
        }
    }    

    return 0;
}

int main(){
    
    int ret;
    first = 0;

    addBook("The Gita", 700);
//    printf("%s\n", first->title);

    addBook("The Mahabharatam", 100);
//    printf("%s\n", first->next->title);
    addBook("The little krishna", 100);
    addBook("The arjuna", 100);

    listbooks(0);
    
    ret = rmbooks("The arjuna");
    printf("%d\n", ret);

    return 0;
}
