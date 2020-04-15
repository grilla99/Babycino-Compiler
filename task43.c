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
void TestStructure_aBoolean();
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
    r4.f = &TestStructure_aBoolean;
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
    for(p = 0; p <= -1 && p < 1; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
MAIN:
    r9.n = 1;
    if (r9.n == 0) goto main_0;
    goto main_1;
main_0:
    r2.n = 1;
    r3.ptr = calloc(r2.n, sizeof(word));
    *(r3.ptr) = vg2;
    r4 = *(r3.ptr);
    r5.n = 0;
    r6.ptr = r4.ptr + r5.n;
    r7 = *(r6.ptr);
    param[next_param++] = r3;
    (*(r7.f))();
    r8 = r0;
    r9 = r8;
main_1:
    if (r9.n == 0) goto main_2;
    r10.n = 5;
    printf("%d\n", r10);
    goto main_3;
main_2:
main_3:
    return;
}

void TestStructure_aBoolean() {
    word vl[0];
    word r1;
    int p;
    for(p = 0; p <= -1 && p < 1; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
TestStructure_aBoolean:
    r1.n = 1;
    printf("%d\n", r1);
    r0.n = 1;
    return;
}

