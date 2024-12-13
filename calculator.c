#include <stdio.h>
#define TRUE 1
#define FALSE 0

// + Addition
// - Subtraction
// * Multiplication
// / Division
// ^ Exponents (2^5 is 2 raised to the power of 5)
// r Roots (2r3 is the 3rd root of 2)

int addition(int a, int b){
    return a+b;
};

int subtraction(int a, int b){
    return a-b;
};

int multiplication(int a, int b){
    return a*b;
};

float division(int a, int b){
    
    if(b == 0){
        printf("You can not divide by zero\n");
        return -1.0; // Return a special value to indicate an error
    } else{

        return (float)a/(float)b;
    }
    
};

int main(void){
    
    int inputValueA;
    int inputValueB;
    int result;
    float divisionResult;

    //printf("%.2f", divisionResult);
    int userInput;
    printf("This is a calculator app\n");
    while(TRUE){
        
        printf("1) + Addition\n2) - Subtraction\n3) * Multiplication\n4) / Division\n0) To exit\nPlease enter the number corresponding to your choice (0-4): ");
        
        if(scanf("%d", &userInput) != 1){
            while (getchar() != '\n');
            printf("Your input must be an integer.\n");
            continue;

        } else if(userInput == 0){
            break;

        }else{

            switch (userInput){

            case 1:
                printf("Input the values you want to add together _ + _: ");
                if(scanf("%d + %d", &inputValueA, &inputValueB) != 2){
                    while (getchar() != '\n');
                    printf("Invalid syntax.\n");
                    continue;
                }else{
                    result = addition(inputValueA, inputValueB);
                    printf("%d + %d = %d\n", inputValueA, inputValueB, result);
                    continue;
                }

            case 2:
                printf("Input the values you want to subtract _ - _: ");
                if(scanf("%d - %d", &inputValueA, &inputValueB) != 2){
                    while (getchar() != '\n');
                    printf("Invalid syntax.\n");
                    continue;
                }else{
                    result = subtraction(inputValueA, inputValueB);
                    printf("%d - %d = %d\n", inputValueA, inputValueB, result);
                    continue;            
                }

            case 3:
                printf("Input the values you want to multiply _ * _: ");
                if(scanf("%d * %d", &inputValueA, &inputValueB) != 2){
                    while (getchar() != '\n');
                    printf("Invalid syntax.\n");
                    continue;
                }else{
                    result = multiplication(inputValueA, inputValueB);
                    printf("%d * %d = %d\n", inputValueA, inputValueB, result);
                    continue;
                }

            case 4:
                printf("Input the values you want to divide _ / _: ");
                if(scanf("%d / %d", &inputValueA, &inputValueB) != 2){
                    while (getchar() != '\n');
                    printf("Invalid syntax.\n");
                    continue;
                }else{
                    divisionResult = division(inputValueA, inputValueB);
                    printf("%d / %d = %2.f\n", inputValueA, inputValueB, divisionResult);
                    continue;
                }
            
            default:
                printf("Unknown input.\n");
                continue;
            }
        }
    }
        
    return(0);

}

