// #include <iostream>

// int main(int argc , char *argv[]){

//     std::cout<< "Number of Arcgc: " << argc << std::endl;
//     for(int i = 0; i < argc;i++){
//          std::cout << "Argument: " << i << "=>"<< argv[i] << std::endl;
//     }

//     if(argc == 3){
//         std::cout << "Successfully Entered"<< std::endl;
//     }
//     else{std::cout << "Must be Need 3 arguments" << " <name> <lang> <age> "<<std::endl;}
   
   

//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s [-h] [-n <number>]\n", argv[0]);
        return 1;
    }

    int number = 0;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            printf("Help: Use -n <number> to set a number.\n");
            return 0;
        } else if (strcmp(argv[i], "-n") == 0) {
            if (i + 1 < argc) {
                number = atoi(argv[++i]);  // Get next argument as number
            } else {
                printf("Error: -n requires a number.\n");
                return 1;
            }
        }
    }

    printf("Number set to: %d\n", number);
    return 0;
}
