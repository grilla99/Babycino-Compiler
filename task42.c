#include <stdio.h>
#include <stdlib.h>

union ilword {
    int n;
    union ilword* ptr;
    void(*f)();
};
typedef union ilword word;

word param[4];
int next_param = 0;

word r0 = {0};

word vg0 = {0};
word vg1 = {0};
word vg2 = {0};
void INIT();
void MAIN();
void TaskFour_Test();
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
    for(p = 0; p <= -1 && p < 4; p++) {
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
    r4.f = &TaskFour_Test;
    *(r3.ptr) = r4;
    return;
}

void MAIN() {
    word vl[0];
    word r10;
    word r9;
    word r8;
    word r7;
    word r6;
    word r5;
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= -1 && p < 4; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
MAIN:
    r1.n = 1;
    r2.ptr = calloc(r1.n, sizeof(word));
    *(r2.ptr) = vg2;
    r3.n = 0;
    r4.n = 1;
    r5.n = 1;
    r6 = *(r2.ptr);
    r7.n = 0;
    r8.ptr = r6.ptr + r7.n;
    r9 = *(r8.ptr);
    param[next_param++] = r2;
    param[next_param++] = r3;
    param[next_param++] = r4;
    param[next_param++] = r5;
    (*(r9.f))();
    r10 = r0;
    printf("%d\n", r10);
    return;
}

void TaskFour_Test() {
    word vl[5];
    word r2;
    word r1;
    int p;
    for(p = 0; p <= 4 && p < 4; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
TaskFour_Test:
    r2 = vl[1];
    if (r2.n == 0) goto TaskFour_Test_1;
    goto TaskFour_Test_2;
TaskFour_Test_1:
    r1 = vl[3];
    if (r1.n == 0) goto TaskFour_Test_0;
    r1 = vl[2];
TaskFour_Test_0:
    r2 = r1;
TaskFour_Test_2:
    if (r2.n == 0) goto TaskFour_Test_3;
    vl[4].n = 1;
    goto TaskFour_Test_4;
TaskFour_Test_3:
    vl[4].n = 0;
TaskFour_Test_4:
    r0 = vl[4];
    return;
}

