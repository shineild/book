#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void banner(){

    system("clear");
    puts("------- 안녕하세요 자료구조 STACK 정리 프로그램 입니다. ---------\n");
    puts("1. 스택이란 ? ");
    puts("2. 스택의 기능");
    puts("3. 스택 실습 ");
    puts("4. exit");
}

void state(int * arr ,int size){

    puts("---- 현재 stack 상황 ----\n");

    puts(" --------------");

    for(int i=size-1;i>=0;i--){
        printf(" |      %d     | \n",arr[i]);
        puts(" -------------- ");
    }


    puts("");
}

void option(){

    puts("");
    puts("1. push ");
    puts("2. pop ");
    puts("3. top(peek)");
    puts("4. size");
    puts("5. empty");
    puts("6. exit");

}

int stack_empty(int size){
    if(size == 0){
        return 1;
    }
    return 0;
}

int stack_top(int * stack, int size){
    if(stack_empty(size)){
        printf("top를 할 수 없습니다. 현재 stack에 들어가 있는 데이터가 없습니다.");
        return -1 ;
    }
    return stack[size-1];
}

void stack_pop(int * size){
    if(stack_empty(*size)){
        puts("pop을 할 수 없습니다. 현재 stack에 들어가 있는 데이터가 없습니다.");
        puts("이어서 할려면 enter를 입력하세요.");
        system("read");
        return ;
    }
    *size -= 1;
}

void stack_push(int * stack, int *size){
    int input_data = 0;
    printf("push data 입력 : ");
    scanf("%d",&input_data);
    if(*size == 10){
        puts("!! stack이 가득찼습니다 !!");
        puts("이어서 할려면 enter를 입력하세요.");
        system("read");
        return ;
    }
    stack[*size] = input_data;

    *size += 1;
}

void training(){

    system("clear");
    int stack[10] = {0,};
    int size = 0, choice = 0;


    if(size == 0){
        puts("");
    }

    while(1){
        system("clear");
        puts("stack에 직접 데이터를 넣고 뽑아 봅시다.\n");
        state(stack, size);
        option();
        printf("input : ");
        scanf("%d",&choice);

        if(choice == 1){
            stack_push(stack,&size);
        }
        else if(choice == 2){
            stack_pop(&size);
        }
        else if(choice == 3){
            printf("top : %d\n",stack_top(stack, size));
            puts("이어서 할려면 enter를 입력하세요.");
            system("read");
        }
        else if(choice == 4){
            printf("size : %d\n",size);
            puts("이어서 할려면 enter를 입력하세요.");
            system("read");
        }
        else if(choice == 5){
            printf("empty : %d\n",stack_empty(size));
            puts("이어서 할려면 enter를 입력하세요.");
            system("read");
        }
        else{
            break;
        }
    }

}

void empty_information(){

    puts("empty는 단순하게 stack이 비어 있는지 아닌지 판단하여 스택이 비어 있으면 1, 아니면 0 을 보여주는 기능 입니다.\n");

    puts(" -------------- ");
    puts(" |      8     |  <- top");
    puts(" -------------- ");
    puts(" |      1     | ");
    puts(" -------------- ");
    puts(" |      6     | ");
    puts(" --------------            --------------\n");

    puts("   return 0                return 1 ( 비어있는 stack )\n\n");

    puts("다음과 같이 스택이 비어 있을 경우 1을 보여주고, 아닌 경우는 0을 보여줍니다.");
}

void size_information(){

    puts("size 는 말 그대로 stack 의 데이터의 갯수를 보여주는 기능입니다.\n");

    puts("                           --------------");
    puts("                           |      9     |  <- top");
    puts(" --------------            --------------");
    puts(" |      8     |  <- top    |      4     |");
    puts(" --------------            --------------            --------------");
    puts(" |      1     |            |      8     |            |      4     |  <- top");
    puts(" --------------            --------------            --------------");
    puts(" |      6     |            |      6     |            |      1     |");
    puts(" --------------            --------------            --------------");
    puts("     size : 3                  size : 4                  size : 2\n");

    puts("다음과 같이 각 stack의 데이터의 갯수를 보여주는 간단한 기능 입니다.");

}

void top_information(){

    puts("top(peek)은 stack의 맨 위에 있는 데이터를 보여주는 기능입니다.\n");

    puts(" --------------");
    puts(" |      8     |  <- top");
    puts(" --------------            --------------");
    puts(" |      5     |            |      5     |  <- top");
    puts(" --------------            --------------            --------------");
    puts(" |      3     |            |      3     |            |      3     |  <- top");
    puts(" --------------            --------------            --------------");
    puts("   output : 8 !               output : 5 !               output : 3 !\n\n");
    
    puts("top(peek)은 pop 과 달리 데이터를 삭제하는 것이 아닌 데이터를 출력해주는 기능입니다.");
    puts("다음과 같이 각각 stack에 있는 맨 위의 데이터들을 출력하는 것을 확인 할 수 있습니다.");

}

void pop_information(){

    puts("pop 는 stack의 맨 위에 있는 데이터를 뽑아네는 기능입니다.\n");

 
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

    puts("push 는 stack의 맨 위에다가 새롭게 데이터를 삽입하는 명령 입니다.\n");

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

void stack_function(){

    int choice = 0;

    system("clear");

    puts("stack 에는 주로 다음과 같이 5개의 기능을 제공합니다.\n\n");
    puts("----- push, pop, top(peek), size, empty -----\n\n");
    puts("먼저 push 입니다.\n");
    push_information();

    if(check()){
        return ;
    }

    system("clear");

    puts("다음은 push에 이어서 pop에 대해서 알어보도록 하겠습니다.\n");
    pop_information();

    if(check()){
        return ;
    }

    system("clear");

    puts("이제 top(peek)에 대해서 알어 봅시다.");
    top_information();

    if(check()){
        return ;
    }

    system("clear");

    puts("다음은 size에 대해서 알어 봅시다.");
    size_information();

    if(check()){
        return ;
    }

    system("clear");

    puts("마지막으로 empty에 대해서 알어 봅시다.");
    empty_information();

    puts("이어서 할려면 enter를 입력하세요.");
    system("read");
    system("clear");

    puts("지금까지 stack의 기능들에 대해 알어 보았습니다. 다시 보실려면 해당 옵션을 선택해 주세요.");

    while(1){

        option();

        printf("input : ");
        scanf("%d",&choice);

        system("clear");
        if(choice == 1){
            push_information();
        }
        else if(choice == 2){
            pop_information();
        }
        else if(choice == 3){
            top_information();
        }
        else if(choice == 4){
            size_information();
        }
        else if(choice == 5){
            empty_information();
        }
        else{
            break;
        }

        puts("이어서 할려면 enter를 입력하세요.");
        system("read");
        system("clear");

    }

}

void stack_information(){

    system("clear");
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

    puts("이어서 할려면 enter를 입력하세요.");
    system("read");
    system("clear");
    
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
        else if(choice == 2){
            stack_function();
        }
        else if(choice == 3){
            training();
        }
        else{
            puts("---- 종료 합니다. ----");
            break;
        }

    }while(1);

    return 0;
}