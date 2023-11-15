#include"../header/matrix.hpp"
#include"../header/wrong_index.hpp"
#include"../header/division.hpp"
#include"../header/invalid_operation.hpp"
matrix::matrix(int const row,int const col){
  if(row<=1||col<=1)
  throw wrong_index();
     this->columns_count=col;
    data=new fraction*[this->rows_count=row];
    for(int i= 0;i<row;i++)
    *(data+i)=new fraction[col];

}
matrix::matrix(int const row,const int col,fraction val){
  if(row<=1||col<=1)
  throw wrong_index();
    this->columns_count=col;
    data=new fraction*[this->rows_count=row];
    for(int i= 0;i<row;i++)
    *(data+i)=new fraction[col];


    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    data[i][j]=val;

}
matrix::~matrix (){
    for(int i=0;i<rows_count;i++)
    delete  [] *(data+i);
    delete [] data;

}

 void matrix:: display(){
    cout<<"\n";
    for(int i=0;i<rows_count;i++)
    {
    for(int j=0;j<columns_count;j++)
    {
    data[i][j].display();
    cout<<"\t";
    }
    cout<<"\n";
    }

 }

 matrix  matrix:: operator+(matrix m){
  if(columns_count!=m.columns_count||rows_count!=m.rows_count)
  throw invalid_operation();
    matrix n=*this;
    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    n.data[i][j]+=m.data[i][j];
    return n;

 }

 
 
 void matrix:: operator=(fraction f){
    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    data[i][j]=f;


 }
 void matrix:: operator=(matrix m){
  
   for(int i=0;i<rows_count;i++)
    delete  [] *(data+i);
    delete [] data;

     rows_count=m.rows_count;
   columns_count=m.columns_count;
   data=new fraction*[rows_count];
    for(int i= 0;i<rows_count;i++)
    *(data+i)=new fraction[columns_count];

    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    data[i][j]=m.data[i][j];

    


 }
 matrix ::matrix (const matrix &m){
    //cout<<"Constructeur de recopie\n";
   // matrix(m.rows_count,m.columns_count);
   rows_count=m.rows_count;
   columns_count=m.columns_count;
   data=new fraction*[rows_count];
    for(int i= 0;i<rows_count;i++)
    *(data+i)=new fraction[columns_count];

    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    data[i][j]=m.data[i][j];





 }
  int  matrix::getColumnsCount(){
    return columns_count;

  }
    int matrix:: getRowsCount(){

  return rows_count;
    }

bool matrix:: operator==(matrix &m){
    if(m.columns_count!=columns_count||m.rows_count!=rows_count)
    return false;

     for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    if(data[i][j]!=m.data[i][j])
    return false;
    return true;
    
    


     }

     matrix  matrix::operator-(matrix m){
      if(columns_count!=m.columns_count||rows_count!=m.rows_count)
  throw invalid_operation();
         matrix n=*this;
    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    n.data[i][j]-=m.data[i][j];
    return n;


     }

    matrix  matrix::operator-=(matrix m){
      if(columns_count!=m.columns_count||rows_count!=m.rows_count)
  throw invalid_operation();
        
    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    data[i][j]-=m.data[i][j];
    return *this;


     }

     matrix  matrix::operator*=(fraction f){
        
    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    data[i][j]*=f;
    return *this;


     }
     matrix  matrix::operator/=(fraction f){
      if(f==fraction(0,1))
      throw division_by_zero();
        
    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    data[i][j]/=f;
    return *this;


     }

     matrix  matrix::operator+=(matrix m){
      if(columns_count!=m.columns_count||rows_count!=m.rows_count)
  throw invalid_operation();
        
    for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    data[i][j]+=m.data[i][j];
    return *this;


     }
    matrix matrix:: operator+(fraction f){

         matrix n=matrix(rows_count,columns_count,f);
        n=*this+n;
        return n;

    }
     matrix matrix ::operator+(){
        return *this;

     }
      matrix matrix:: operator-(){
        return matrix((*this).rows_count,(*this).columns_count, fraction(0,1))-*this;

      }
      matrix matrix:: operator*(matrix m){
        if(columns_count!=m.rows_count)
  throw invalid_operation();

          matrix product=matrix(rows_count,m.columns_count,fraction(0,1));
       
     for(int i=0;i<rows_count;i++)
    for(int j=0;j<m.columns_count;j++)
    for(int k=0;k<columns_count;k++)
    product.data[i][j]=data[i][k]*m.data[k][j];

        return product;

      }
    matrix matrix:: operator-(fraction f){
        matrix n=matrix(rows_count,columns_count,f);
        n=*this-n;
        return n;

    }


     matrix matrix:: operator*=(matrix m){
      if(columns_count!=m.rows_count)
  throw invalid_operation();

          matrix product=matrix(rows_count,m.columns_count,
          fraction(0,1));
       
     for(int i=0;i<rows_count;i++)
    for(int j=0;j<m.columns_count;j++)
    for(int k=0;k<columns_count;k++)
    data[i][k]*=m.data[k][j];

        return *this;

      }
     matrix matrix:: operator-=(fraction f){
        matrix n=matrix(rows_count,columns_count,f);
      *this-=n;
        return *this;

    }
    matrix matrix:: operator+=(fraction f){
        matrix n=matrix(rows_count,columns_count,f);
      *this+=n;
        return *this;

    }
    matrix matrix:: operator*(fraction f){
          matrix n=matrix(rows_count,columns_count,f);
       
     for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    n.data[i][j]=data[i][j]*f;

        return n;

    }
    matrix  matrix::operator/(fraction f){
      if(f==fraction(0,1))
      throw division_by_zero();
        matrix n=matrix(rows_count,columns_count,f);
       
     for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    n.data[i][j]=data[i][j]/f;

        return n;

    }
    matrix matrix::transpose(){
      /*if(columns_count!=rows_count)
  throw invalid_operation();*/
      matrix  n=matrix(this->rows_count,this->columns_count);
         for(int i=0;i<rows_count;i++)
    for(int j=0;j<columns_count;j++)
    n.data[i][j]=data[j][i];

        return n;
        

    }