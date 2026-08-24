/*6) Write a program to implement the following operations on a Sparse Matrix, 
assuming the matrix is represented using a triplet.
 (a) Transpose of a matrix. (b) Addition of two matrices. (c) Multiplication of two matrices. */
 #include<iostream>
 #include<vector>
 using namespace std;
 int SparseMatrixcheck(int (&arr)[4][4]){
    int count = 0;
    for(int  i = 0 ; i<4; i++){
        for(int j = 0 ; j<4; j++){
            if(arr[i][j]!=0){
                count++;
            }
        }
    }
    return count;

 }
 int main(){
   int arr[4][4];


    for(int i = 0 ; i<4; i++){
        for(int j = 0 ; j <4 ; j++){
            cout<<"\t";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Your entred array: \n";

    for(int i = 0 ; i<4 ; i++){
        for(int  j = 0 ; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int sparsecount = SparseMatrixcheck(arr);
    if(sparsecount!=0){
        cout<<"The number of non zero elements are: "<<sparsecount;
    }
  
  
 }