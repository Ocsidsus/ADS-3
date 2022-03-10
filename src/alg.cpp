// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int i = 0, j = size - 1;
    while (i < j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == value) {
            int c = 0, d = 0;
            for (c = mid - 1; c >= i; c--) {
                if (arr[c] != value)
                    break;
            }
            for (d = mid + 1; d <= j; d++) {
                if (arr[d] != value)
                    break;
            }
            return (d - 1) - c;
        } else if (arr[mid] > value) {
            j = mid;
        } else {
            i = mid + 1;
        }
    }
    return 0;
}
