#include <iostream>
#include <random>
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

void shakerSort(int* m_mas, int mas)
{
    int left, right, i;
    left = 1;
    right = mas - 1;
    while (left <= right)
    {
        for (i = right; i >= left; i--)
            if (m_mas[i - 1] > m_mas[i])
            {
                int temp;
                temp = m_mas[i];
                m_mas[i] = m_mas[i - 1];
                m_mas[i - 1] = temp;
            }
        print(m_mas, mas);
        left++;
        for (i = left; i <= right; i++)
            if (m_mas[i - 1] > m_mas[i])
            {
                int temp;
                temp = m_mas[i];
                m_mas[i] = m_mas[i - 1];
                m_mas[i - 1] = temp;
            }
        print(m_mas, mas);
        right--;
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
    shakerSort(m_mas, mas);
    cout << "\nSorted array: ";
    cout << "\n";
    print(m_mas,mas);
    return 0;
}