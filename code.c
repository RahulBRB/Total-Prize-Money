#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    int x,y,top10,rest;
    
    while(t--){
        scanf("%d%d", &x,&y);
        top10 = x*10;
        rest = y*90;
        printf("%d \n", top10 + rest);
    }
    
    return 0;
}

