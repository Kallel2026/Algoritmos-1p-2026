#include <stdio.h>
int main (){
    int t1, t2;
    scanf("%d %d", &t1, &t2);
    if (t1 > t2){
        printf("t1 ganhador com %d gols\n", t1);
    }else if (t2 > t1){
        printf("t2 ganhador com %d gols\n", t2);
    }else {
        printf("empate\n");
    }
    return 0;
}