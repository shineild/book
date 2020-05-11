#include <stdio.h>

void banner(){

    puts("------- 안녕하세요 자료구조 STACK 정리 프로그램 입니다. ---------");
    puts("1. 스택이란 ? ");
    puts("2. 스택의 원리 ");
    puts("4. exit");

}

int main(){

    int choice = 0;
    do{
        banner();
        scanf("%d",&choice);

        if(choice == 4){
            break;
        }


    }while(1);

    return 0;
}