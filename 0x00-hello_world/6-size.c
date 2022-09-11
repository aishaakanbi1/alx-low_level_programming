#include <stdio.h>

/**
* main - program execution starts here
* Description: this is the main function
* Return: an integer to signify success or fail
*/
int main(void)
{
    int int_type;
    float float_type;
    char char_type;
    long int long_int_type;
    long long int long_long_int_type;

    printf("Size of a char: %zu byte(s)\n", sizeof(char_type));
    printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long_int_type));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_int_type));
    printf("Size of a flloat: %zu byte(s)\n", size of(float_type));
    return (0);
}
