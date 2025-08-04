#include "../include/pch.h"

double p(double x, std::vector<double> coeffs) {
    double result = 0.0;
    for (size_t i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }   
    return  result; 
};

int main(int argc, char** argv) {

double x = 0.0;
std::vector<double> coeffs = {1.0, -2.0, 3.0}; // Example coefficients for a polynomial



    

return 0;
}