#include<iostream>
void nhap(int *a, int &n);
void xoapt(int *a, int &n, int k);
void xuat(int *a , int n);
using namespace std;
int main()
{
   int *a, n, k;
   nhap(a, n);
   
   xoapt(a, n ,k);

   xuat(a, n);

   return 0;
}

void nhap(int *a, int &n, int k)
{
   cout<<"nhap so phan tu: "; cin>>n;
   a = new int [n];
   for ( int i = 0 ; i < n ; i++)
      cin >> *(a + i );
}

void xoapt(int *a, int &n, int k)
{
   if ( k < 0 || k >= n ) return;
      for ( int i = k ; i < n - 1; i++)
         *(a + i) = *(a + i + 1);
            n--;
}

void xuat(int *a, int n, int k)
{
   for ( int i = 0; i < n; i++)
      cout<<*(a + i)<<" ";
}

