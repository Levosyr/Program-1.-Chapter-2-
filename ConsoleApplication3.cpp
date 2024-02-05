#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double originalPrice = 99.00; 
    double markupPercentage = 60.0; 
    double salesTaxRate = 5.25; 

    double sellingPrice = originalPrice + (originalPrice * markupPercentage / 100.0);

    double salesTax = sellingPrice * (salesTaxRate / 100.0);

    double finalPrice = sellingPrice + salesTax;

    cout << fixed << setprecision(2);
    cout << "Original price of the item: $" << originalPrice << endl;
    cout << "Mark-up percentage: " << markupPercentage << "%" << endl;
    cout << "Store's selling price of the item: $" << sellingPrice << endl;
    cout << "Amount of the sales tax: $" << salesTax << endl;
    cout << "Final price of the item: $" << finalPrice << endl;

    return 0;
}
}