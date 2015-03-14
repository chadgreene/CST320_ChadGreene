#include <stdio.h>
#define MEM_SIZE 100000
#define INT_VAL(offset) (*(int*)(&Memory[offset]))
#define FLOAT_VAL(offset) (*(float*)(&Memory[offset]))
char Memory[MEM_SIZE];
int Frame_Pointer;
int Stack_Pointer;
int Temp;
double Temp_F;
int main() { 
Frame_Pointer=0;
Stack_Pointer=0;
Stack_Pointer += 4;
Stack_Pointer += 4;
Stack_Pointer += 4;
INT_VAL(Frame_Pointer + 0) = 3;
INT_VAL(Frame_Pointer + 4) = 4;
INT_VAL(Stack_Pointer) = Frame_Pointer;
Stack_Pointer += 4;
INT_VAL(Stack_Pointer) = INT_VAL(Frame_Pointer+0);
Stack_Pointer += 4;
Frame_Pointer = Stack_Pointer -4;
factorial();
Stack_Pointer -= 4;
Frame_Pointer = INT_VAL(Stack_Pointer);
INT_VAL(Frame_Pointer + 8) = Temp;
printf("%d\n",INT_VAL(Frame_Pointer+8));
INT_VAL(Stack_Pointer) = Frame_Pointer;
Stack_Pointer += 4;
INT_VAL(Stack_Pointer) = INT_VAL(Frame_Pointer+4);
Stack_Pointer += 4;
Frame_Pointer = Stack_Pointer -4;
factorial();
Stack_Pointer -= 4;
Frame_Pointer = INT_VAL(Stack_Pointer);
INT_VAL(Frame_Pointer + 8) = Temp;
printf("%d\n",INT_VAL(Frame_Pointer+8));
printf("%d\n",INT_VAL(Frame_Pointer+0));
printf("%d\n",INT_VAL(Frame_Pointer+4));
Stack_Pointer -= 12;
  return 0;
}
int factorial()
{
Stack_Pointer += 4;
INT_VAL(Frame_Pointer + 4) = 1;
if(!INT_VAL(Frame_Pointer+0)) goto LABEL_2;
Stack_Pointer += 4;
INT_VAL(Stack_Pointer) = Frame_Pointer;
Stack_Pointer += 4;
INT_VAL(Stack_Pointer) = (INT_VAL(Frame_Pointer+0)-1) ;
Stack_Pointer += 4;
Frame_Pointer = Stack_Pointer -4;
factorial();
Stack_Pointer -= 4;
Frame_Pointer = INT_VAL(Stack_Pointer);
INT_VAL(Frame_Pointer + 8) = Temp;
INT_VAL(Frame_Pointer + 4) = (INT_VAL(Frame_Pointer+0)*INT_VAL(Frame_Pointer+8)) ;
Stack_Pointer -= 4;
goto LABEL_3;
LABEL_2:
LABEL_3:
Temp = INT_VAL(Frame_Pointer+4);
Stack_Pointer -= 8;
}
