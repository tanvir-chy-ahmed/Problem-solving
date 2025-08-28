#include <iostream> 
void DectoBin(int n){
    int bin[32]; 
    int i = 0; 
    int j = i;
    while (n>0){ 
        bin[i] = n % 2; // Computes the remainder when 'n' is divided by 2 (i.e., the least significant bit in binary) and stores it in bin[i].
        n = n / 2; // Divides 'n' by 2, effectively shifting the number to the right in binary terms.
        i++; // Increments 'i' to move to the next position in the 'bin' array for storing the next binary digit.
    }

    for (j = i-1;j >=0;j--){ 
        std::cout<<bin[j];
        
        }
}

int main(){ // Defines the main function where program execution starts.
    DectoBin(20); // Calls the DectoBin function with the argument 20, converting the decimal number 20 to binary and printing it.
    return 0; // Returns 0 to the operating system, indicating that the program terminated successfully.
}
