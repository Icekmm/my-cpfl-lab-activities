//Name:
//Activity Name: OE2
//Description: POS Computer System that computes at least 3 kinds of product input, plus 12% VAT.

#include<iostream>
#include<string>

const double TAX = 0.12;

using namespace std;

int main(){
    
    string cname,pn1,pn2;
    int pq1,pq2,pq3;
    double pn1_price, pn2_price, t_price;

    //add inputs: Product id, customer name - at least three products in your POS
    cout << "Enter Customer name  : ";
    getline(cin,cname);
    //cin.ignore();
    cout << "Enter product1 name  : ";
    cin >> pn1;
    cout << "Enter quantity       : ";
    cin >> pq1;
    cout << "Enter Product price  : ";
    cin >> pn1_price;

    cout << "Enter product2 name  : ";
    cin >> pn2;
    cout << "Enter quantity       : ";
    cin >> pq2;
    cout << "Enter Product price  : ";
    cin >> pn2_price;

    //t_price = qty * price; // add VAT paid

    //format output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //cout << "\n-------------------------" << endl;
    cout << "\n---------RECEIPT--------" << endl;
    cout << "Product name : " << pn1 << endl;
    cout << "Quantity     : " << pq1 << endl;
    cout << "Price        : " << "P" << pn1_price << endl;
    //output total VAT deductions 
    cout << "TOTAL Amount : " << "P" << t_price << endl; // plus VAT
    return 0;
}