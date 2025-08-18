#include <stdio.h>
#include <string.h>

void editline(char* buffer,int current_line);


int main(int argc,char** argv){
   FILE* f = fopen(argv[1],"r");
   char buffer[1024] = {0};
   fread(buffer,1024,1,f);
   fclose(f);



   printf("Contents: \n%s\n ",buffer);
   int current_line = 0;
   scanf("%d",&current_line);
   editline(buffer,current_line);
   f = fopen(argv[1],"w");
   fwrite(buffer,strlen(buffer),1,f);
   fclose(f);


   return 0;
}


void editline(char* buffer,int current_line){
    for(int i = 0;i<current_line;i++)
    {
        buffer = strchr(buffer,'\n') + 1;  // find \n from the buffer content
    }

    char* line_end = strchr(buffer,'\n');
    char saved[1024] = {0};
    strcpy(saved,line_end);
    scanf("%s",buffer); //mistake &
    strcpy(buffer + strlen(buffer),saved);



}
