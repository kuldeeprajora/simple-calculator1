// simple calculator
#include <stdio.h>
void main()
{
    float value1, value2, result;
    char opr;
label:
    printf("Enter the operation you want to perform +, - ,*,/ or x to exit  \n ");
    scanf("%s", &opr);
    switch (opr)
    {
    case '+':
        printf("entre first value = ");
        scanf("%f", &value1);
        printf("entre second value = ");
        scanf("%f", &value2);
<<<<<<< HEAD
        result = (double)value1 + value2;
        printf("%f %c %f = %lf", value1, opr, value2, (double)result);
        == == == =
                     result = value1 + value2;
        printf("%f %c %f = %f", value1, opr, value2, result);
>>>>>>> a573305b7c4bbe0438a930a8c36b53fd2fe4a2d6
        break;
    case '-':
        printf("enter first value = ");
        scanf("%f", &value1);
        printf("enter second value = ");
        scanf("%f", &value2);
<<<<<<< HEAD
        result = (double)value1 - value2;
        printf("%f %c %f = %lf", value1, opr, value2, (double)result);
        == == == =
                     result = value1 - value2;
        printf("%f %c %f = %f", value1, opr, value2, result);
>>>>>>> a573305b7c4bbe0438a930a8c36b53fd2fe4a2d6
        break;
    case '*':
        printf("enter first value = ");
        scanf("%f", &value1);
        printf("enter second value = ");
        scanf("%f", &value2);
<<<<<<< HEAD
        result = (double)value1 * value2;
        printf("%f %c %f = %lf", value1, opr, value2, (double)result);
        == == == =
                     result = value1 * value2;
        printf("%f %c %f = %f", value1, opr, value2, result);
>>>>>>> a573305b7c4bbe0438a930a8c36b53fd2fe4a2d6
        break;
    case '/':
        printf("enter first value = ");
        scanf("%f", &value2);
        printf("enter second value = ");
        scanf("%f", &value2);
<<<<<<< HEAD
        result = (double)value1 / value2;
        printf("%f %c %f = %lf", value1, opr, value2, (double)result);
        break;
    case 'x':
        goto end;
        == == == =
                     result = value1 / value2;
        printf("%f %c %f = %f", value1, opr, value2, result);
>>>>>>> a573305b7c4bbe0438a930a8c36b53fd2fe4a2d6
        break;
    default:
        printf("enter valid operation name");
        break;
    }
<<<<<<< HEAD
    printf("\n");
    goto label;
end:
    printf("Bye\n");
}
== == == =
}
>>>>>>> a573305b7c4bbe0438a930a8c36b53fd2fe4a2d6