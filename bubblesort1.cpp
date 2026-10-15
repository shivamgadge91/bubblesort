#include<iostream>
using namespace std;
void bubblesort (int a[],int n)
{
    int temp;
    for (int i =0;i<n-1;i++)
    {
        for (int j=0;j<n+1;j++)
        {
            if ( a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubblesort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
/*Enter number of elements: 5
Enter 5 elements: 20 56 44 32 10
Sorted array: 10 20 32 44 56 */