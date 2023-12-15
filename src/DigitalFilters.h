#ifndef DigitalFilters_
#define DigitalFilters_

#include <Arduino.h>

struct FilterInput {
  const float* time;
  size_t inputLength;
  const float* coefficients;
  size_t filterLength;
  float* output;
  size_t outputLength;
};

class DigitalFilters {
  public:
    DigitalFilters();
    ~DigitalFilters();
    float* fir_filter(FilterInput& input);

  private:

};
#endif