#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s", s);           // To print char array use %s
    
    return 0;    
}

// Question Link - 
//https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true
