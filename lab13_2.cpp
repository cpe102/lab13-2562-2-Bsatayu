#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double a[][N]){
	for (int i = 0; i < N; i++)
	{   cout<<"Row "<<i+1<<": "; 
		for(int j=0; j<N;j++){
		 cin >> a[i][j];
		}
	}
	
}
void findLocalMax(const double a[][N], bool b[][N]){
	 for(int i= 0 ; i< N ;i++)
	{ 
	    for(int j=0; j<N;j++){
			if(i==4 or j==0 or j==4 or i==0){
				b[i][j]=0;
			}else{
				if(a[i][j]>a[i-1][j]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i+1][j])
				    b[i][j]=1;     
			 else{
				b[i][j]=0;
			}
		}
	}
	
}
}
void showMatrix(const bool b[][N]){
	for(int i=0;i<N;i++)
	{
     for(int j=0; j<N;j++)
	 {
        cout<<b[i][j]<<" ";
	 }
	 cout<<"\n";
	}
}
