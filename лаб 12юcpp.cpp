
#include <iostream>
using namespace std;

double calculateRowAverage(int arr[][100], int row, int cols) {
    double sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[row][j];
    }
    return sum / cols;
}

int main() {
    int arr[100][100];
    int rows, cols, selectedRow;

    cout << "Massivt³n jol sanin engiz³n³z: ";
    cin >> rows;
    cout << "Massivt³n bagan sanin engiz³n³z: ";
    cin >> cols;

    cout << "Massivt³n elementter³n engiz³n³z:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Ortagha eseptelet³n joldyn nomer³n engiz³n³z (0-" << rows - 1 << "): ";
    cin >> selectedRow;

    if (selectedRow < 0 || selectedRow >= rows) {
        cout << "Kate: zharamsyz jol nomer³." << endl;
        return 1;
    }

    double average = calculateRowAverage(arr, selectedRow, cols);
    cout << "Joldyn arifmetikalik ortasy: " << average << endl;

    return 0;
}






