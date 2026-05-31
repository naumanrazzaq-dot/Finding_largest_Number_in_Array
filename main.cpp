#include <iostream>

using namespace std;

int main()
{
   int matrix[3][3] = {
    {15, 45, 23},
    {89, 34, 12},
    {7,  65, 50}
};
int row=3;
int col=3;
int large=matrix[0][0];
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        if(matrix[i][j]>large)
            large=matrix[i][j];
    }
}
cout<<large;
    return 0;
}
