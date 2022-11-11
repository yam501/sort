#include <iostream>
#include <ctime>

using namespace std;

void print(int* m_mas, int mas)
{
    for (int i = 0; i < mas; i++)
    {
        cout <<"| "<< m_mas[i] << " | ";
    }
    cout << endl;
}

int step(int* m_mas, int l, int r) 
{
    int marker = l;

    for (int i = l; i <= r; i++)
    {
        if (m_mas[i] <= m_mas[r])
        {
            swap(m_mas[marker], m_mas[i]);
            marker++;
        }
    }

    return marker - 1;
}

int kSort(int* m_mas, int k, int mas)
{
    int l = 0, r = mas - 1;

    while (true)
    {
        int mid = step(m_mas, l, r);

        if ((mid) == (k))
        {
            return m_mas[mid];
        }
        else if (k < mid)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

int main() {

  int mas = 10;
  int* m_mas = new int [mas];

  srand(time(NULL));


  for (int i = 0; i < mas; i++)
        {
            m_mas[i] = rand() % 100 + 1;
        }

        cout << endl;

        cout << "Array:" << endl;
        print(m_mas,mas);
        cout << endl;
    
    int k = 0;
            
            cout << "input K = ";
            cin >> k;

            int n = kSort(m_mas, k - 1, mas);

            cout << "k = " << n << endl;

    cout << "Sorting an array" << endl;
    print(m_mas,mas);
    return 0;
}