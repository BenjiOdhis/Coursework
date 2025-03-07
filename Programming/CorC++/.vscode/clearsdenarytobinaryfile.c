#include<stdio.h>
int main(){
    FILE*file=fopen("denary_to_binary.txt","w");
    if(file==NULL){
        printf("error opening file!");
        return 1;
    }
    fclose(file);
    printf("\nfile has been cleared");
    return 0;
}