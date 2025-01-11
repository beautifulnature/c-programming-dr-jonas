/* for.c */
#include <stdio.h>
#include <assert.h>

#define F fflush(stdout)

void multiplication(int t, int v){
    printf("%d x %d = %d\n", t, v, t * v);
    return;
}

int main(){
    
    int x, table;
    printf("select multiplication table: "); F;
    scanf("%d", &table);
    assert((table < 13) && (table > 0));
    for(int x = 1; x < 13; x++){
        multiplication(table, x);
    }
    return 0;
}
