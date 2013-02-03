#include <iostream>
#include <string>
#include<fstream>
#include<sstream>

void insertion_sort(int* arr, int N);

using namespace std;

int main()
{
    int x = 0, N=10000;
    int arr[10000];
    string line;
    fstream myfile;
    myfile.open("data10k.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        stringstream(line)>>arr[x];
        x++;
    }
    insertion_sort(arr, N);

    for(x = 0; x<10000; x++)
    {
        cout<<arr[x]<<endl;
    }
    myfile.close();
    return 0;
}

void insertion_sort (int a[], int N)
{
    int key=0, j=0, i=0;
    for (i=0; i<N; i++)
    {
        key=a[i];
        j=i-1;

        while (j>=0 && a[j] >key)
        {
            a[j+1]=a[j];
            j=j-1;
        }

        a[j+1]=key;
    }

}
