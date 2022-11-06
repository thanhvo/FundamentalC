# include <stdio.h>
# include <stdlib.h>

int sumEvenFor(int n) {
    int sum = 0;
    for(int i = 0; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}

int sumEvenWhile(int n) {
    int i = 0, sum = 0;
    while (i <= n) {
        sum += i;
        i += 2;
    }
    return sum;
}

int sumEvenDoWhile(int n) {
    int i = 0, sum = 0;
    do {
        sum += i;
        i += 2;
    } while(i <= n);
    return sum;
}

int getInput() {
    int n = 0;
    float f = 0.0;
    const int LINE_MAX = 255;
    char buf[LINE_MAX];

    do {
        printf("Enter a positive number: ");
        scanf("%s", buf);
        f = atof(buf);
        n = (int)f;
    } while (n <= 0 || n != f);
    return n;
}

int main() {
    int n = getInput();
    printf("%d\n", sumEvenFor(n));
    printf("%d\n", sumEvenWhile(n));
    printf("%d\n", sumEvenDoWhile(n));
}