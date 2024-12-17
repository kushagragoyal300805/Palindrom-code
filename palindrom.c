//palindrom code

#include<stdio.h>
#include<string.h>
int main() {
    char text[30];
    int end, mid, begin, len = 0;
    printf("enter any text\n");
    gets(text);    
while(text[len]!='\0')
len++;
end= len-1;
mid= len/2;
for(begin=0; begin<mid; begin++)
{
    if(text[begin]!=text[end])
    {
        printf("it is not a palindrom\n");
        break;
    }
    end--;
}
    if(begin==end)
    printf("it is a palindrom\n");
return 0;
}

 


