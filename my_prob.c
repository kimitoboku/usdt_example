#include<stdio.h>
#include "provider.h"


int main() {
    int val;
    scanf("%d", &val);
    DTRACE_PROBE1(my_prob, start__process__val, val);
    val *= 2;
    val += 1;
    DTRACE_PROBE1(my_prob, end__process__val, val);
    printf("%d\n", val);
    return 0;
}
