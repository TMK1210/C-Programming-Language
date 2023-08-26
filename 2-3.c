#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char hexString[100];
    long int Int;
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexString);
    Int = strtol(hexString, NULL, 16);
    //strtol:hàm dùng để chuyển đổi từ hệ 16 về hệ 10
    printf("Integer number: %ld\n", Int);
    
    return 0;
}
