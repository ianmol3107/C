#include<stdio.h>
int main(){
    char arr[5][20]={"Clang","Java","Javascript","python","React"};
    printf("%c\n", arr[0][0]); // print first character ==> C

    printf("%c\n", arr); // print ==> only (\)

    printf("%s\n", arr[0]); // print ==> Clang

    printf("%s\n", arr); // print ==> Clang

    printf("%c\n", arr[1][4]); // print ==> (\0) or SPACE

    printf("%c\n", arr[1][20]);
    printf("%c\n", arr[1][21]);
    printf("%c", *(*(arr+1)+21));

    return 0;
}