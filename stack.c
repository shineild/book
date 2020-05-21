#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#define ANSI_COLOR_BLUE "\x1b[34m"

void banner(){

    puts("------- 안녕하세요 자료구조 STACK 정리 프로그램 입니다. ---------");
    puts("1. 스택이란 ? ");
    puts("2. 스택의 원리 ");
    puts("3. exit");

}

void pop_information(){

    puts("pop 는 stack의 맨 위에 있는 데이터를 뽑아네는 기능입니다.");

 
    puts(" --------------");
    puts(" |      8     |  <- top");
    puts(" --------------            --------------");
    puts(" |      5     |            |      5     |  <- top");
    puts(" --------------            --------------            --------------");
    puts(" |      3     |            |      3     |            |      3     |  <- top");
    puts(" --------------            --------------            --------------");
    puts("                                 pop!                     pop!\n\n");

    puts("pop 은 다음과 같이 stack에서 맨 위의 데이터를 삭제하는 기능임을 알 수 있습니다");
    puts("stack에서 데이터가 삭제되는 과정을 보면 맨 마지막에 넣은 데이터가 맨 처음으로 삭제되는 LIFO(Last In First Out) 임을 알 수 있습니다.");

}

void push_information(){

    puts("push 는 stack의 맨 위에다가 새롭게 데이터를 삽입하는 명령 입니다.\n\n");

    puts("                                                    --------------");
    puts("                                                    |      8     |  <- top");
    puts("                          --------------            --------------");
    puts("                          |      5     |  <- top    |      5     |");
    puts("--------------            --------------            --------------");
    puts("|      3     |  <- top    |      3     |            |      3     |");
    puts("--------------            --------------            --------------");
    puts("  기본 stack                   push 5!                   push 8!\n\n");

    puts("push 는 다음과 같이 stack의 맨 위에 데이터를 삽입하는 기능 입니다.");
    puts("위에 그림을 보면 5가 삽입이 되면 3위에 쌓이는 것을 확인 할 수 있고, 8을 삽입하면 이전에 삽입한 5위에 쌓이는 것을 확인 할 수 있습니다.\n\n");

}

bool check(){

    int data = 0;
    printf("계속 읽으실려면 1, 종료 하실려면 0 : ");
    scanf("%d",&data);

    if(data == 1){
        return false;
    }
    return true;
}

void stack_information(){

    puts("------- stack 이란? ------\n");
    puts("한 쪽 끝에서만 데이터를 넣고 뺄 수 있는 후입선출 LIFO(Last In First Out) 형식의 자료 구조로");
    puts("가장 최근에 삽입한 데이터가 가장 먼저 제거되는 자료구조 입니다.");

    puts("\n\n");

    puts("                               push 9!");
    puts("                           --------------");
    puts("                           |      9     |  <- top         pop!");
    puts(" --------------            --------------            --------------");
    puts(" |      5     |  <- top    |      5     |            |      5     |  <- top         pop!");
    puts(" --------------            --------------            --------------            --------------");
    puts(" |      1     |            |      1     |            |      1     |            |      1     |  <- top");
    puts(" --------------            --------------            --------------            --------------");
    puts(" |      6     |            |      6     |            |      6     |            |      6     |");
    puts(" --------------            --------------            --------------            --------------");
    puts("\n\n");   

    puts("다음과 같이 top 이 맨 위를 가리키는 것을 확인 할 수 있고, pop을 하게 되면 가장 맨 위에 있는 자료가 빠져 나가는 것을 확인 할 수 있습니다.\n\n");

    if(check()){
        return ;
    }

    system("clear");

    puts("stack 에는 주로 다음과 같이 5개의 기능을 제공합니다.\n\n");
    puts("----- push, pop, top(peak), size, empty -----\n\n");
    puts("먼저 push 입니다.\n");
    push_information();

    if(check()){
        return ;
    }

    system("clear");

    puts("다음은 push에 이어서 pop에 대해서 알어보도록 하겠습니다.\n");
    pop_information();

}

int main(){

    int choice = 0;
    do{
        banner();
        printf("input : ");
        scanf("%d",&choice);

        if(choice == 1){
            stack_information();
        }
        else if(choice == 3){
            puts("---- 종료 합니다. ----");
            break;
        }

    }while(1);

    return 0;
}