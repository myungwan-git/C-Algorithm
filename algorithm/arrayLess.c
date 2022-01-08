#include <stdio.h>
int main() {
    short count = 0;
    short lessthan = 0;
    scanf("%hd %hd", &count, &lessthan);
    short arr[count];

    for(short i=0; i<count; i++) {
        scanf("%hd",arr[i]);
    }
    for(int i=0; i<count; i++) {
        printf("%hd \n", arr[i]);
    }

    return 0;
}