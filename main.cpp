#include <iostream>

using namespace std;

void interSection(int first[], int second[], int n) {
    bool found = false;
    cout << "Intersection elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (first[i] == second[j]) {
                cout << first[i] << " ";
                found = true;
                break;  
            }
        }
    }
    if (!found) {
        cout << "No intersection found.";
    }
    cout << endl;
}

int main() {
    int first[6] = {1, 5, 2, 3, 4, 6};
    int second[6] = {2, 4, 6, 7, 8, 9};

    interSection(first, second, 6);

    return 0;
}
