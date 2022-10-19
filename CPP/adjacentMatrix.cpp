#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int adjMatrix[n][n];
    int multipliedMatrix[n][n];
    int tempMatrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adjMatrix[i][j];
        }
    }

    // Part A
    for (int i = 0; i < n; i++) {
        cout << "Adjacent of " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            if (adjMatrix[i][j] != 0) cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Part B - D
    mempcpy(multipliedMatrix, adjMatrix, n * n * sizeof(int));

    for (int i = 0; i < n - 1; i++) {  // n-1 because doesn't need length 1

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                int temp = 0;
                for (int l = 0; l < n; l++) {
                    temp += adjMatrix[j][l] * multipliedMatrix[l][k];
                }
                tempMatrix[j][k] = temp;
            }
        }
        mempcpy(multipliedMatrix, tempMatrix, n * n * sizeof(int));

        // Printing Matrix
        for (int p = 0; p < n; p++) {
            for (int q = 0; q < n; q++) {
                cout << multipliedMatrix[p][q] << " ";
            }
            cout << endl;
        }

        cout << endl;
    }
}