/*Sum of two matrices*/
/*Development of a Matrix*/
#include<iostream>
using namespace std;
int main()
{
int row,colm;
cout<<"\t\t\t-:Enter the Number of Rows and Columns of a Matrix:-"<<endl;
cin>>row>>colm;
int matrix[row][colm];
cout<<"Enter the Elements for Matrix = "<<endl;
for(int i=0; i<row; i++)
{
for(int j=0; j<colm; j++)
{
cin>>matrix[row][colm];	
}	
}
int sum=0;
for(int i=0; i<row; i++){
for(int j=0; j<colm; j++){
sum+=matrix[row][colm];
}
}
cout<<"Sum of all Elements in the Matrix = "<<sum<<endl;
return 0;
}
