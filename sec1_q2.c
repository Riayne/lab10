#include <stdio.h>
#include<string.h>

void reverse_string(char str[], int i) {
   
    int len = strlen(str);
    if (i >= len / 2) {
        return;
}
int temp;
temp = str[i];
str[i]= str[len-i-1];
str[len-i-1]=temp;

reverse_string(str, i + 1);
   
}
int main() {
    char str[100];

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

   
    reverse_string(str, 0);

   
    printf("Reversed string: %s\n", str);

    return 0;
}
