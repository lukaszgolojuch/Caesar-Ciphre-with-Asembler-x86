#include <stdio.h>

typedef enum { F, T } boolean; //we create enumeration type acting like bool in C++
                            //F - false, T - True

void coding(); //declaration of encrypting function 
void decoding(); //declaration of decrypting function 


int main(int argc, const char * argv[]) {
    int input;
    boolean exit = F; //F - exit program 
                      //T - do not exit program
    
    while (exit == F)
    {
        //beginning of menu
        printf("Hello in Cezar Cipher app! \n");
        printf("1. Coding \n");
        printf("2. Decoding \n");

        printf("9. Exit program \n");
        printf("------------------------------- \n");
        //end of menu
        printf("Your choice: "); 
        scanf_s("%d", &input); //get option from user

        switch (input) {
            case 1:
                //Encrypt
                coding();
                break;
            case 2:
                //Decrypt
                decoding();
                break;
            case 9:
                //exit program case
                exit = T;
                printf("------------------------------- \n");
                printf("Thank you for using app \n");
                printf("See u again \n");
                printf("------------------------------- \n");
                break;
                
            default:
                //default - wrong output (we do not have this option)
                printf("Wrong input \n");
                exit = T;
                break;
        }
        printf("------------------------------- \n");
    }
    return 0;
}
