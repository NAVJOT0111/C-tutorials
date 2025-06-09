int main(void) {
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int n = 8, step = 2, i, j, temp;
    for(i = 0; i < n - step; i++) {
        for(j = i; j < i + step && j + 1 < n; j++) {
            temp = A[j];
            A[j] = A[j + 1];
            A[j + 1] = temp;
        }
        step = (step * 2) - 1;
    }
    for(i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}
