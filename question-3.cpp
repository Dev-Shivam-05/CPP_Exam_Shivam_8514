// Create a Product class with attributes name and price. Use a vector to store multiple
// products. Input and display all product details.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Product
{
public:
    vector<string> p_name;
    vector<double> p_price;

    string product_name;
    int product_price;

    void setProduct()
    {
        cout << "Enter Product Name :- ";
        cin >> product_name;
        p_name.push_back(product_name);
        
        cout << "Enter Product Price :- ";
        cin >> product_price;
        p_price.push_back(product_price);
    }

    void getProduct()
    {
        cout << endl << "Products With There Prices Are :- " << endl;
        for (int i = 0; i < p_name.size(); i++)
        {
            cout << "Product :- " << p_name[i] << "    ";
            cout << "Product Price :- " << p_price[i] << endl;
        }
    }
};

int main()
{
    vector<Product> product;
    int size;

    cout << "Enter the Size of Vector :- ";
    cin >> size;

    Product obj;

    for (int i = 0; i < size; i++)
    {
        obj.setProduct();
    }

    obj.getProduct();
    
    return 0;
}