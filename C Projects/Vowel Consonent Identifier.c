#include<stdio.h>
int main(){
    char input;
    printf("Type a latter : ");
    scanf("%c",&input);
        if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u'){
            printf("%c is a Vowel letter..",input);
        }
        else{
            printf("%c is a Consonant latter..",input);
        }
return 0;
}
