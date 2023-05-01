#include <iostream>
using namespace std;
class Matrix {
    int m, n;
    int **mat;
public:
    Matrix(int rows, int cols) {
        m = rows;
        n = cols;
        mat = new int*[m];
        for (int i = 0; i < m; i++) {
            mat[i] = new int[n];
        }
    }

    void input() {
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    void add(Matrix B) {
        if (m == B.m && n == B.n) {
            Matrix C(m, n);
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    C.mat[i][j] = mat[i][j] + B.mat[i][j];
                }
            }
            cout << "Sum of matrices is:\n";
            C.display();
        }
        else {
            cout << "Matrices are not of same dimensions\n";
        }
    }

    void subtract(Matrix B) {
        if (m == B.m && n == B.n) {
            Matrix C(m, n);
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    C.mat[i][j] = mat[i][j] - B.mat[i][j];
                }
            }
            cout << "Difference of matrices is:\n";
            C.display();
        }
        else {
            cout << "Matrices are not of same dimensions\n";
        }
    }

    void transpose() {
        Matrix C(n, m);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                C.mat[j][i] = mat[i][j];
            }
        }
        cout << "Transpose of matrix is:\n";
        C.display();
    }
};

int main() {
    int m, n;
    cout << "Enter number of rows and columns for matrix:\n";
    cin >> m >> n;

    Matrix A(m, n);
    A.input();

    int choice;
    do {
        cout << "Select an operation to perform:\n";

        cout << "1. Add two matrices\n";
        cout << "2. Subtract two matrices\n";
        cout << "3. Transpose matrix\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: {
                Matrix B(m, n);
                B.input();
                A.add(B);
                break;
            }
            case 2: {
                Matrix B(m, n);
                B.input();
                A.subtract(B);
                break;
            }
            case 3: {
                A.transpose();
                break;
            }
            case 4: {
                break;
            }
            default: {
                cout << "Invalid choice\n";
            }
        }
    } while (choice != 4);

    return 0;
} 
