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


void mergeSort(int* m_mas, int mas)
{
    int st = 1;
   
    int* help = new int[mas];

    while (st < mas)
    {
        int index = 0;

        int l = 0;
        
        int m = l + st;
        
        int e = l + (st * 2);

        do
        {
            if (m >= mas)
            {
                m = mas;
            }
            
            if (e >= mas)
            {
                e = mas;
            }

            int i1 = l;

            int i2 = m;

            for (;(i1 < m) && (i2 < e);)
            {
                if (m_mas[i1] < m_mas[i2])
                {
                    help[index++] = m_mas[i1++];
                }
                else
                {
                    help[index++] = m_mas[i2++];
                }
            }

            while (i1 < m)
            {
                help[index++] = m_mas[i1++];
            }

            while (i2 < e)
            {
                help[index++] = m_mas[i2++];
            }

            l = l + (st * 2);
            
            m = m + (st * 2);
            
            e = e + (st * 2);
        } while (l < mas);

        for (int i = 0; i < mas; i++)
        {
            m_mas[i] = help[i];
        }

        st *= 2;

        cout << "Sorrted array k = " << st << endl;

        for (int i = 0; i < mas; i++)
        {
            cout << "| "<< m_mas[i] << " | ";
        }

        cout << endl;
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
    
    cout << "Sorting an array" << endl;
    mergeSort(m_mas, mas);
    print(m_mas,mas);
    return 0;
}