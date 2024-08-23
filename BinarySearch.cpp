#include <iostream>
#include <vector>

using namespace std;


int BinarySearch(vector<int> vec, int target) {
    int low = 0;
    int high = vec.size() - 1;

    while (low <= high) {
    
        int mid = (low + high) / 2;
        if (vec[mid] == target) {
            return mid;
        }

        if(vec[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;

}

int main() {
    vector<int> vec = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78}; 
    int target = 23;
    
    int index = BinarySearch(vec, target);
    
    if(index != -1) {
        cout << "Elemento encontrado en el indice: " << index << endl;
        } else {
            cout << "Elemento no encontrado" << endl;
        }

    return 0;
}

