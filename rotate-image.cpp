#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n;j++)
            {
                swap(matrix[j][i],matrix[j][n-i-1]);
            }
        }
        //for the above instead of running two loops 'reverse' function could be used
        //eg:- reverse(matrix[i][j].begin(),matrix[i'][j'].end());
    }

int main()
{
    vector<vector<int>> matrix={{1,2,3},
                                {4,5,6},
                                {7,8,9}};
    rotate(matrix);
    int n=matrix.size();
    for(int i=0;i<n;i++)
    {
        for(int x:matrix[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
