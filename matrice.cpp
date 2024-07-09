#include <iostream>

using namespace std;

int division(int a, int b){
    return a/b;
}

void fill_matrix(int** matrix, int row, int column){
    for(int j=0; j<row*column; ++j){
        int tmp = division(j,column);
        cout << "Enter the element of the " << tmp + 1 << "row and " << j%column + 1 << "column : ";
        cin >> matrix[tmp][j%column];
    }
}

void print_matrix(int** matrix, int row, int column){
    cout << "[ ";
    for(int j=0; j<row*column; ++j){
        int tmp_row = division(j,column);
        int tmp_column = j%column;
        if(tmp_row == row-1 && tmp_column == 0){
            cout << "[ ";
            cout << matrix[tmp_row][tmp_column] << " ";
        }
        else if(tmp_row == 0 && tmp_column == column -1){
            cout << matrix[tmp_row][tmp_column] << " ";
            cout << "]" << endl;
        }
        else if(tmp_column == 0 && tmp_row!=0){
            cout << "[ ";
            cout << matrix[tmp_row][tmp_column] << " ";
        }
        else if(tmp_row == row-1 && tmp_column == column-1){
            cout << matrix[tmp_row][tmp_column];
            cout << " ]" << endl;
        }
        else if(tmp_column == column-1){
            cout << matrix[tmp_row][tmp_column];
            cout << " ]" << endl;
        }
        else{
            cout << matrix[tmp_row][tmp_column] << " ";
        }
    }
}

int main(){
    int row;
    int column;
    cout << "Enter the numbers of rows and columns of the matrix respectively : ";
    cin >> row >> column;
    int** matrice = new int*[row];
    for(int i=0 ; i<row ; ++i){
        matrice[i] = new int[column];
    }
    fill_matrix(matrice,row,column);

    print_matrix(matrice, row, column);

    for(int i = 0; i < row; ++i){
        delete [] matrice[i];
    }


    delete [] matrice;
    matrice = NULL;
}