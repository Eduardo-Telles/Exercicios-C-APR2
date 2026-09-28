#include <stdio.h>
int main(){
    int i=1;
    for(i;i<=100;i++){
        if(i%7==0 && i%3==0){
            printf("%i\n",i);
        }
    }
    return 0;
}