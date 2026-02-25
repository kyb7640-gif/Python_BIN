#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200

typedef struct {
   char data[MAX];
   int top;
   int size;
}Stack;

int init(Stack* s) {
   s->top = -1;
   return 0;
}

int full(Stack* s) {
   if (s->top == MAX - 1) {
      return 1;
   }
   return 0;
}

int empty(Stack* s) {
   if (s->top == -1) {
      return 1;
   }
   return 0;
}

char push(Stack* s, char value) {
   if (full(s) == 1) return -1;
   s->size++;
   return s->data[++(s->top)] = value;
   
}

char pop(Stack* s) {
   if (empty(s) == 1) return -1;
   s->size--;
   return s->data[(s->top)--];
}

char peek(Stack* s) {
   if (empty(s) == 1) return -1;
   return s->data[s->top];
}


int main() {
   Stack s;
   init(&s);
   char str[102];
   int i = 0, swi = 0;

   while (1) {
      fgets(str, 102, stdin);
      str[strcspn(str, "\n")] = '\0';
      if (strcmp(str, ".") == 0) break;
      i = 0;
      init(&s);
      swi = 0;
   
      while (str[i] != '\0') {
         if (str[i] == '(') {
            push(&s, str[i]);
         }
         if (str[i] == '[') {
            push(&s, str[i]);
         }
         if (str[i] == ')') {
            if (empty(&s) == 1 || peek(&s) != '(') {
               swi = 1;
               break;
            }
            pop(&s);
            
            
         }
         if (str[i] == ']') {
            if (empty(&s) == 1 || peek(&s) != '[') {
               swi = 1;
               break;
            }

            
            pop(&s);
            
         }

         i++;
      }
      //if (str[0] == '.') return 0;
      if (empty(&s) == 1 && swi == 0) printf("yes\n");
      else printf("no\n");
     
   }
   return 0;
}