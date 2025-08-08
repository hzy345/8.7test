#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float A, B, C;
    printf("请输入方程的系数 A, B, C:\n");
    scanf("%f %f %f", &A, &B, &C);

    if (A == 0) {
        printf("该方程有一个实数根:x = %.2f\n", -C/B );
    } else {
        float delta = B * B - 4 * A * C;
        if (delta < 0) {
            printf("该方程无实数根。\n");
        } else if (delta == 0) {
            float x = -B / (2 * A);
            printf("该方程有一个实数根:x = %.2f\n", x);
        } else {
            float x1 = (-B + sqrt(delta)) / (2 * A);
            float x2 = (-B - sqrt(delta)) / (2 * A);
            printf("该方程有两个实数根:x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
    system("pause");
    return 0;
}
