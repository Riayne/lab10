#include <stdio.h>

void outnum (int n[],int size){

if (size == 0){
return;
}
else{
printf("%d",n[0]);
}

return outnum(n+1,size-1);
}

int main(){
int num[5]={1,2,3,4,5};
outnum(num,5);
}
