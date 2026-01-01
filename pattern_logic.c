#include <stdio.h>
// Name : Animesh Bhawnani
// ERP : 10194
void incTriangle(int n);
void sameTriangle(int n);
void reverseTriangle(int n);
void invertedTriangle(int n);
void continuousPattern(int n);
void oddPattern(int n);
void rightAligned(int n);
void rectanglePattern(int n);
void diamondPattern(int n);
void hourglassPattern(int n);

int main() {
    int choice, rows;

    printf("        PATTERN LOGIC TOOL\n");
    printf("====================================\n");
    printf("1. Increasing Number Triangle\n");
    printf("2. Same Number Triangle\n");
    printf("3. Reverse Number Triangle\n");
    printf("4. Inverted Number Triangle\n");
    printf("5. Continuous Number Pattern\n");
    printf("6. Odd Number Pattern\n");
    printf("7. Right Aligned Number Triangle\n");
    printf("8. Rectangle Number Pattern\n");
    printf("9. Diamond Number Pattern\n");
    printf("10. Hourglass Number Pattern\n");
    printf("====================================\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 10) {
        printf("Enter number of rows: ");
        scanf("%d", &rows);
    }

    switch(choice) {
        case 1: incTriangle(rows); break;
        case 2: sameTriangle(rows); break;
        case 3: reverseTriangle(rows); break;
        case 4: invertedTriangle(rows); break;
        case 5: continuousPattern(rows); break;
        case 6: oddPattern(rows); break;
        case 7: rightAligned(rows); break;
        case 8: rectanglePattern(rows); break;
        case 9: diamondPattern(rows); break;
        case 10: hourglassPattern(rows); break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}


void incTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void sameTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }
}

void reverseTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
}

void invertedTriangle(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void continuousPattern(int n) {
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            printf("%d ", num++);
        printf("\n");
    }
}

void oddPattern(int n) {
    for(int i = 1; i <= n; i++) {
        int odd = 1;
        for(int j = 1; j <= i; j++) {
            printf("%d ", odd);
            odd += 2;
        }
        printf("\n");
    }
}

void rightAligned(int n) {
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            printf("  ");
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void rectanglePattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void diamondPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    for(int i = n - 1; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void hourglassPattern(int n) {
    for(int i = n; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    for(int i = 2; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}
