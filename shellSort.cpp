#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL));

    int n = 10, a[n] = {}, j, d = n / 2 ;
    bool Flag = false;

    for (int i = 0; i < n ;i++){a[i]=rand()%100+1;}

    cout<<"Array:"<<endl;
    for (int i=0;i<n;i++){cout<<"| "<<a[i]<<" |";}
    cout<<endl;

    while (d > 0){
        for (int i = 0; i < n - d; i++){
            Flag = false;
            j = i;
            while ((j >= 0 )and (a[j] > a[j+d])){

                cout << "swap" << endl;
                swap(a[j], a[j + d]);
                for (int i=0;i<n;i++){cout<<"| "<<a[i]<<" |";}
                cout<<endl;
                j-=d;
                Flag = true;
            }
            if (Flag == true){
                i = 0;
            }

        }
        d/=2;
    }
    cout<<"Sorted array:"<<endl;
    for (int i=0;i<n;i++){cout<<"| "<<a[i]<<" |";}
    cout<<endl;
}