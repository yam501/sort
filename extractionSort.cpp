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

void countingSort(int* m_mas,int mas)
{
    int max = MaxVal(m_mas, mas);
    int* m_max = new int[max+1];

    for (int i = 0; i < max+1; i++)
    {
        m_max[i] = 0;
    }

    for (int i = 0; i < mas; i++)
    {
        m_max[m_mas[i]] += 1;
    }

    int j = 0;
    for (int i = 0; i <= max; i++)
    {
        while (m_max[i] > 0)
        {
            m_mas[j] = i;
            j += 1;
            m_max[i] -= 1;
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
    
    cout << "Sorting an array" << endl;
    countingSort(m_mas, mas);
    print(m_mas,mas);
    return 0;
}