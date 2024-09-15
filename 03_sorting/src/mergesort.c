#include "mergesort.h"

void merge(char a[], char b[], int l, int q, int r)
{
    int i = l;
    int j = q + 1;
    for (int k = l; k <= r; k++)
    {
        if (i <= q && j <= r)
        {
            if (a[i] <= a[j])
            {
                b[k] = a[i];
                i++;
            }
            else
            {
                b[k] = a[j];
                j++;
            }
        }
        else if (i <= q)
        {
            b[k] = a[i];
            i++;
        }
        else if (j <= r)
        {
            b[k] = a[j];
            j++;
        }
    }

    // Copy back to original array
    for (int k = l; k <= r; k++)
    {
        a[k] = b[k];
    }
}

void mergesort(char a[], char b[], int l, int r)
{
    if (l < r) {
        int q = (l + r) / 2;
        mergesort(a, b, l, q);
        mergesort(a, b, q + 1, r);
        merge(a, b, l, q, r);
    }
}