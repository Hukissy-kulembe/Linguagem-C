#include <stdio.h>

int main()
{
    unsigned short int integer_;
    integer_ = 0;

    printf("Inteiro\t\t=\t\tCharacterer\n");
    while (integer_ <= 255)
    {
        printf("%hu\t\t=\t\t%c\n", integer_, (char) integer_);
        integer_++;
    }
}