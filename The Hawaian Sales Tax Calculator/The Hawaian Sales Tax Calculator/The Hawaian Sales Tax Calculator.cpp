
#include <iostream>

int main() {

    /*
    * Sales Liquidity Calculator
    * Current State tax = 4%
    * Current County tax = 2%
    */

    std::cout << "WELCOME to your Hawaian After-taxes Sales Calculator!" << std::endl;
    std::cout << "MAX PASS-ON RATE: 4.7120%" << std::endl;

    std::cout << '\n';

    std::cout << "Please insert the monthly sales income:" << std::endl; // The first question.
    std::cout << "$";

    double salesIncome;
    double stateTax;
    double countyTax;                       // The Variables
    const double stateTaxRate = .04;
    const double countyTaxRate = .005;


    std::cin >> salesIncome;                // The input

    stateTax = (salesIncome * stateTaxRate);
    // Each Variable Calculation
    countyTax = (salesIncome * countyTaxRate);

    std::cout << '\n';                      // Space

    std::cout << "State Tax:" << std::endl; // State Tax Value Text
    std::cout << "$";
    std::cout << stateTax << std::endl;     // Final State Tax Value

    std::cout << '\n';                      // Space

    std::cout << "County Tax:" << std::endl;// State County Tax Text
    std::cout << "$";
    std::cout << countyTax << std::endl;    // Final State Tax Value

    std::cout << '\n';                      // Space

    std::cout << "After Taxes:" << std::endl;// Final Value Text

    // Final Value
    double total = ((salesIncome - stateTax) - countyTax); // Liquid Valu Variable

    std::cout << "$";                       // Dollar
    std::cout << total << std::endl;        // Answer

    return 0;
}

