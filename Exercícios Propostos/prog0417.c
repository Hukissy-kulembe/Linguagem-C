#include <stdio.h>

int main()
{
    unsigned short int quantity;
    unsigned short int const_;
    char hast;

    printf("Introd. um N°: ");
    scanf("%hd", &quantity);
    getchar();
    printf("Introd. um char: ");
    hast = getchar();

    const_ = quantity;

    while (quantity > 0)
    {
        for (int i = 0; i < const_; i++)
            printf("%c", hast);
        quantity--;
        printf("\n");
    }
}