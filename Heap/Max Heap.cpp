#include<bits/stdc++.h> 
using namespace std;

class MaxHeap
{
private:
    vector<int> heap;

public:
    void insert(int value)
    {
        heap.push_back(value);
        int i = heap.size() - 1;

        while (i > 0)
        {
            int parent = (i - 1) / 2;

            if (heap[parent] < heap[i])
            {
                swap(heap[parent], heap[i]);
                i = parent;
            }
            else
            {
                break;
            }
        }
    }
    void display()
    {
        for (int i = 0; i < heap.size(); i++)
        {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    MaxHeap h;

    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        h.insert(value);
    }

    cout << "Max Heap: ";
    h.display();

    return 0;
}