#include <stdio.h>
#define ANSI_COLOR_BLUE "\x1b[34m"

void banner(){

    puts("------- 안녕하세요 자료구조 STACK 정리 프로그램 입니다. ---------");
    puts("1. 스택이란 ? ");
    puts("2. 스택의 원리 ");
    puts("3. exit");

}

void stack_information(){

    puts("------- stack 이란? ------\n");
    puts("한 쪽 끝에서만 데이터를 넣고 뺄 수 있는 LIFO(Last In First Out) 형식의 자료 구조로");
    puts("가장 최근에 삽입한 데이터가 가장 먼저 제거되는 자료구조이다.");

    puts("\n\n");

    puts("                           push 9!");
    puts("                      --------------");
    puts("                      |      9     |            pop!");
    puts(" --------------       --------------       --------------       ");
    puts(" |      5     |       |      5     |       |      5     |            pop!");
    puts(" --------------       --------------       --------------       --------------");
    puts(" |      1     |       |      1     |       |      1     |       |      1     |");
    puts(" --------------       --------------       --------------       --------------");
    puts(" |      6     |       |      6     |       |      6     |       |      6     |");
    puts(" --------------       --------------       --------------       --------------");
    puts("\n\n");

}

int main(){

    int choice = 0;
    do{
        banner();
        scanf("%d",&choice);

        if(choice == 1){
            stack_information();
        }
        else if(choice == 3){
            break;
        }

    }while(1);

    return 0;
}