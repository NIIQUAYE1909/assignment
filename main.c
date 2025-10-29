#include <stdio.h>
#include <stdlib.h>

int main(){
     
     FILE *pFile = fopen("C:\\Users\\HP\\Desktop\\abc.txt", "w");
     char str[40] = "Jenny Khatri";

     if(pFile == NULL){
          printf("NO FILE DETECTED!");
          exit(1);
     }

     fprintf(pFile, "%s", str);

     fclose(pFile);
     
/*
     if(remove("abc.txt") == 0){
          printf("That file was deleted successfully.");
     }
     else{
          printf("That file was not deleted.");
     }*/
          
     return 0;
}