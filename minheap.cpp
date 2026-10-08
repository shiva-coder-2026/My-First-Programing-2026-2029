#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
private:
    vector<int> heap;

    // Left child index
    int leftIndex(int i) {
        return 2 * i + 1;
    }

    // Right child index
    int rightIndex(int i) {
        return 2 * i + 2;
    }

    // Check left child
    bool hasLeft(int i) {
        return leftIndex(i) < heap.size();
    }

    // Check right child
    bool hasRight(int i) {
        return rightIndex(i) < heap.size();
    }

    // Swap two elements
    void swapElements(int i, int j) {
        swap(heap[i], heap[j]);
    }

public:

    // Insert element
    void insert(int value) {
        heap.push_back(value);

        int i = heap.size() - 1;

        // Heapify up
        while (i > 0) {
            int parent = (i - 1) / 2;

            if (heap[parent] <= heap[i])
                break;

            swapElements(parent, i);
            i = parent;
        }
    }

    // Min Heap Deletion
    int remove() {

        if (heap.empty()) {
            return -1;
        }

        // Store root element
        int removed = heap[0];

        // Move last element to root
        heap[0] = heap.back();
        heap.pop_back();

        int i = 0;

        // Heapify down
        while (hasLeft(i)) {

            int leftIdx = leftIndex(i);
            int smallerIdx = leftIdx;

            if (hasRight(i)) {

                int rightIdx = rightIndex(i);

                if (heap[rightIdx] < heap[leftIdx]) {
                    smallerIdx = rightIdx;
                }
            }

            // Heap property is satisfied
            if (heap[i] <= heap[smallerIdx])
                break;

            // Swap
            swapElements(i, smallerIdx);

            i = smallerIdx;
        }

        return removed;
    }

    // Display heap
    void display() {
        for (int x : heap) {
            cout << x << " ";
        }
        cout << endl;
    }
};

int main() {

    MinHeap h;

    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(40);

    cout << "Heap before deletion: ";
    h.display();

    cout << "Deleted element: " << h.remove() << endl;

    cout << "Heap after deletion: ";
    h.display();

    return 0;
}
