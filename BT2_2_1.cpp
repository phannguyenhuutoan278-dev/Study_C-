#include<iostream>
using namespace std;

void nhap(int *&a, int &n);
void chenpt(int *&a, int &n, int k, int x);
void xuat(int *a , int n);

int main()
{
   int *a, n, k, x;

   nhap(a, n);

   cout << "Nhap k: ";
   cin >> k;
   cout << "Nhap x: ";
   cin >> x;

   chenpt(a, n, k, x);
   xuat(a, n);

   delete[] a;
   return 0;
}

// Nhap mang
void nhap(int *&a, int &n)
{
   cout << "Number of array: ";
   cin >> n;
   a = new int[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];
}

// Chen phan tu
void chenpt(int *&a, int &n, int k, int x)
{
   if (k < 0 || k > n) return;

   int *b = new int[n + 1];

   for (int i = 0; i < k; i++)
      b[i] = a[i];

   b[k] = x;

   for (int i = k; i < n; i++)
      b[i + 1] = a[i];

   delete[] a;
   a = b;
   n++;
}

// Xuat mang
void xuat(int *a, int n)
{
   for (int i = 0; i < n; i++)
      cout << a[i] << " ";
}
