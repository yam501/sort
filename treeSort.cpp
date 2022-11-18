#include <iostream>
#include <ctime>

using namespace std;


void print(int* m_mas, int mas)
{
    for (int i = 0; i < mas; i++)
    {
        cout <<"| "<< m_mas[i] << " |";
    }
    cout << endl;
}

void kucha(int* m_mas, int mas, int i)
{
    int maxim = i;
    int l = 2 * i + 1, r = 2 * i + 2;

    if (l < mas && m_mas[l] > m_mas[maxim])
        maxim = l;
    if (r < mas && m_mas[r] > m_mas[maxim])
        maxim = r;
    if (maxim != i)
    {
        swap(m_mas[i], m_mas[maxim]);
        kucha(m_mas, mas, maxim);
    }
}

void treeSort(int* m_mas, int mas)
{
    srand(time(NULL));

    for (int i = mas / 2 - 1; i >= 0; i--)
    {
        kucha(m_mas, mas, i);
        print(m_mas, mas);
    }

    cout << endl;
    cout << endl;

    print(m_mas, mas);

    cout << endl;

    for (int i = mas - 1; i >= 0; i--)
    {
        swap(m_mas[0], m_mas[i]);
        kucha(m_mas, i, 0);
        print(m_mas,mas);
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
    treeSort(m_mas, mas);
    return 0;
}