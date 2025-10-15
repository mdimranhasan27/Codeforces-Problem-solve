#include <stdio.h>
 #include <string.h>
 
 int main()
 {
    char input[105];
    scanf("%[^\n]",input);
    int i, j, count=0;
    int n = strlen(input);
     for(i=0; i<n; i++){
        int flag=0;
        for(j=0; j<i; j++){
            if(input[1]==input[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        } 
    }
    if(count%2==0)
    printf("CHAT WITH HER!");
    else
    printf("IGNORE HIM!");
 
 
    return 0;
 }