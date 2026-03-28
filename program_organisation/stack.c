// this program implementents some operations on the stack

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int top = 0;
int contents[STACK_SIZE];

//operations
void front_end();
int make_empty();
bool is_empty();
bool is_full();
void stack_status();
void print_stack();
void add_element();
int push(int value);
int pop();

int main() {

    return 0;
}
void front_end() {
    int response;

    printf("\t\tWelcome\n\n");

    while (1) {
        printf("============================");
        printf("Select an option:\n");
        printf("1. Empty stack\n");
        printf("2. Check stack status\n");
        printf("3. See stack elements\n");
        printf("4. Push\n");
        printf("5. Pop\n");
        printf("6. Exit");
        printf("=============================");
        scanf(" %d", &response);

        switch (response) {
            case 1: make_empty(); break;
            case 2: stack_status(); break;
            case 3: print_stack(); break;
            case 4: add_element(); break;
            case 5: pop(); break;
            case 6: return; break;
            default: printf("invalid operation!!!"); break;
        }
    }

}

//function groups
void print_stack() {
    putchar('[');
    for (int i = 0; i <= top; i++) {
        printf("%d", contents[i]);
    }
    putchar(']');
}
void stack_status() {
    if (is_empty()) {
        printf("no element in stack!!!\n");
    } else if (is_full()) {
        printf("stack completely full!!!\n");
    } else {
        printf("There are elements in the stack but stack not full.\n");
    }
}
void add_element() {
    for
}


//stack operations
int make_empty() {
    top = 0; 
}
bool is_empty() {
  return top == STACK_SIZE;
}
bool is_full() {
    return top == STACK_SIZE;
}
int push(int value) {
    if (is_full()) {
        return -1;
    }
    contents[top++] = value;
}
int pop() {
    if (is_empty()) {
        return -1;
    }
    return contents[--top];

}
