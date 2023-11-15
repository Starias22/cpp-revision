#include"fraction.hpp"
class matrix{
    private:
    int rows_count;
    int columns_count;
    fraction  **data;
    public:
    matrix(int const row,const int col);
    matrix(int const row,const int col,fraction val);
    ~matrix();
    void display();
    //void displayn();
    matrix (fraction f);

    void operator=(matrix m);
    void operator=(fraction f);
    //void operator=(int m);
    matrix(const matrix &m);//constructeur de recopie
    int getColumnsCount();
    int getRowsCount();
    bool operator==(matrix& m);
    matrix operator+(matrix m);
    matrix operator*=(matrix m);
    matrix operator*(matrix m);
    matrix operator+();
      matrix operator-();
    matrix operator-(matrix m);
    matrix operator+=(matrix m);
    matrix operator-=(matrix m);
    matrix operator+(fraction f);
    matrix operator-(fraction m);
    matrix operator+=(fraction m);
    matrix operator-=(fraction m);
    matrix operator*(fraction f);
    matrix operator/(fraction f);
    matrix operator*=(fraction f);
    matrix operator/=(fraction f);

    matrix transpose();






};
