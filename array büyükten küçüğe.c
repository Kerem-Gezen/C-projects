#include <stdio.h>
 #define MaxNumbers 10
 int main() {
 void insertionSort(int list[], int lo, int hi);
 int num[MaxNumbers];
 printf("Type up to %d numbers followed by 0\n", MaxNumbers);
 int n = 0, v;
 scanf("%d", &v);
 while (v != 0 && n < MaxNumbers) {
 num[n++] = v;
 scanf("%d", &v);
 }
 if (v != 0) {
 printf("More than %d numbers entered\n", MaxNumbers);
 printf("First %d used\n", MaxNumbers);
 }
 //n numbers are stored from num[0] to num[n-1]
 insertionSort(list,lo,hi,num, n);
 printf("\nThe sorted numbers are\n");
 for (int h = 0; h < n; h++) printf("%d ", num[h]);
 printf("\n");
 }
 void insertionSort(int list[], int lo, int hi) {
 //sort list[lo] to list[hi] in ascending order
 for (int h = lo + 1; h <= hi; h++) {
 int key = list[h];
 int k = h - 1; //start comparing with previous item
 while (k >= lo && key < list[k]) {
 list[k + 1] = list[k];
 --k;
 }
 }
}
 
