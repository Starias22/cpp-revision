#include<iostream>
#include<vector>
#define N 3

using namespace std;

void display(int  matrix[N][N]){
    int i,j;
    for(i=0;i<N;i++)
    {
    for ( j = 0; j < N; j++)
    
        cout<<matrix[i][j]<<"\t";
        
    cout<<endl;
    }


}
void display(vector<int> vector){
    auto ptr=vector.begin();
    while (ptr!=vector.end())
    {
        cout<<*ptr<<"\n"; 
        ptr++;
    }

    
    

}
vector<int>  product (int  matrix[N][N], vector<int> vect)
{
    
    int i,j,res=0;

    vector<int> prod;
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            res+=matrix[i][j]*vect[j];
            
            
        }
      prod.push_back(res);
       res=0;
        
        
    }
    return prod;

}

int main(){
    int i=0,j=0,A[N][N];
    vector<int> X(N);

    cout<<"Enter the elements of the matrix A\n";

    for(i=0;i<N;i++)
    for ( j = 0; j < N; j++)
    {
        cout<<"Line "<<i+1<<" column "<<j+1<<": ";
        cin>>A[i][j];

    }
    cout<<"Enter the elements of the vector X\n";

    for(i=0;i<N;i++)
    {
     cout<<"Element "<<i+1<<": ";
     cin>>X[i];   
    }
    cout<<"The matrix A\n";
    display(A);

    cout<<"The vector X\n";
    display(X);

    
    
    vector <int> Y=product(A,X);
   

    cout<<"\nA*X gives the vector Y below\n"<<endl;
    display(Y);


    return 0;
}
