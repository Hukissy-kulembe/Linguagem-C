#include <stdio.h>
#include <string.h>

int main()
{
    char dst[10] = "Hello";
    char src[] = "H!";

    printf("%d\n",strlcpy(dst, src, 1));
    printf("Destination: %s\n", dst);
    return 0;
}