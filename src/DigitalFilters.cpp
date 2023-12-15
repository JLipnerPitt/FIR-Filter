#include "DigitalFilters.h"


DigitalFilters::DigitalFilters() {

}

DigitalFilters::~DigitalFilters() {

}

float* DigitalFilters::fir_filter(FilterInput& input) {
  const auto* time = input.time;
  const auto* coefficients = input.coefficients;
  auto* output = input.output;

  for (auto i = 0u; i < input.outputLength; i++) {
    output[i] = 0.f;
    for (auto j = 0u; j < input.filterLength; j++) {
      output[i] += time[i + j] * coefficients[j];
    }
  }
  return output;
}