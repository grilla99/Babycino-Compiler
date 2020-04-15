#include <stdio.h>
#include <stdlib.h>

union ilword {
    int n;
    union ilword* ptr;
    void(*f)();
};
typedef union ilword word;

word param[1];
int next_param = 0;

word r0 = {0};

word vg0 = {0};
word vg1 = {0};
word vg2 = {0};
void INIT();
void MAIN();
void TaskOne_TestOne();
int main() {
    INIT();
    MAIN();
    return 0;
}

void INIT() {
    word vl[0];
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= -1 && p < 1; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
INIT:
    r2.n = 0;
    vg0.ptr = calloc(r2.n, sizeof(word));
    r2.n = 0;
    vg1.ptr = calloc(r2.n, sizeof(word));
    r2.n = 1;
    vg2.ptr = calloc(r2.n, sizeof(word));
    r3 = vg2;
    r4.f = &TaskOne_TestOne;
    *(r3.ptr) = r4;
    return;
}

void MAIN() {
    word vl[0];
    word r7;
    word r6;
    word r5;
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= -1 && p < 1; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
MAIN:
    r1.n = 1;
    r2.ptr = calloc(r1.n, sizeof(word));
    *(r2.ptr) = vg2;
    r3 = *(r2.ptr);
    r4.n = 0;
    r5.ptr = r3.ptr + r4.n;
    r6 = *(r5.ptr);
    param[next_param++] = r2;
    (*(r6.f))();
    r7 = r0;
    printf("%d\n", r7);
    return;
}

void TaskOne_TestOne() {
    word vl[2];
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= 1 && p < 1; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
TaskOne_TestOne:
    
    r3.n = 1;
    if (r3.n == 0) goto TaskOne_TestOne_2;
    vl[1].n = 1;
    goto TaskOne_TestOne_3;
TaskOne_TestOne_2:
    vl[1].n = 0;
TaskOne_TestOne_3:
    r0 = vl[1];
    return;
}

