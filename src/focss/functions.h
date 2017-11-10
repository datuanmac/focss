#ifndef FOCSS_FUNCTIONS_H_
#define FOCSS_FUNCTIONS_H_

#include <complex>
#include "focss/vector.h"

namespace focss {
const double math_pi = 3.14159265358979323846264338;  // [1]
const double planck = 6.62607004081818181818181e-34;  // [m^2 kg / s]
const double light_speed = 299792458;                 // [m/s]

typedef std::complex<double> Complex;
typedef Vector<Complex> ComplexVector;
typedef Vector<double> RealVector;
const Complex i_unit = Complex(0, 1);

double sinc(const double& x);

double evm2_factor(const ComplexVector& tx, const ComplexVector& rx);
double q2_factor(const ComplexVector& tx, const ComplexVector& rx);

double db_to_linear(const double& db_value);
double dbm_to_watts(const double& dbm_power);
double db_to_natural(const double& db_value);
double disp_to_beta2(const double& dispersion, const double& wavelength);

Complex i_exp(const double& x);

void fft_inplace(const int& size, Complex* input_output);
void ifft_inplace(const int& size, Complex* input_output);
void fft(const int& size, Complex* input, Complex* output);
void ifft(const int& size, Complex* input, Complex* output);

void fft_inplace(ComplexVector* data);
void ifft_inplace(ComplexVector* data);
ComplexVector fft(const ComplexVector& data);
ComplexVector ifft(const ComplexVector& data);
}  // namespace focss

#endif  // FOCSS_FUNCTIONS_H_