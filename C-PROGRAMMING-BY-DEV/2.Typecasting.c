#include<stdio.h>
#include <stdlib.h>

int main(){
    printf("---------Int to Float--------\n");
    int_to_float();
    printf("---------Float to Int--------\n");
    float_to_int();
    printf("---------Str to Int--------\n");
    str_to_int();
    return 0;
}

void int_to_float(){
    
    int a = 10;
    float b = (float)a;
    printf("The integer value is: %d\n", a);
    printf("The float value is: %f\n", b);
    

}

void float_to_int(){
    
    float a = 10.90;
    int b = (int)a;
    printf("The float value is: %f\n", a);
    printf("The int value is: %d\n", b);


}

void str_to_int(){
    char a="10";
    int b=atoi(a);
    printf("The char value is: %c\n", a);
    printf("The int value is: %d\n", b);

}