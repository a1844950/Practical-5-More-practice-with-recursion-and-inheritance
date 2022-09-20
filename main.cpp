#include <iostream>
#include <sstream>
#include <vector>

#include "MapAbsoluteValue.h"
#include "MapTriple.h"
#include "MapSquare.h"

#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "FilterForTwoDigitPositive.h"

#include "ReduceGCD.h"
#include "ReduceMinimum.h"

void print(const std::vector<int> &list) {
  for(const int &x: list) {
    std::cout << x << ' ';
  }
  std::cout << '\n';
}

int main() {
  // Input
  std::string str;
  std::getline(std::cin, str);
  std::stringstream ss(str);

  std::vector<int> inputs;
  for (int i; ss >> i;) {
    inputs.push_back(i);
    while (ss.peek() == ',' || ss.peek() == ' ') {
      ss.ignore();
    }
  }

  MapTriple map_triple;
  MapAbsoluteValue map_absolute_value;
  FilterOdd filter_odd;
  FilterForTwoDigitPositive filter_for_two_digit_positive;
  ReduceMinimum reduce_minimum;
  ReduceGCD reduce_gcd;

  std::vector<int> transformed_inputs =
    filter_for_two_digit_positive.filter(
      filter_odd.filter(
        map_triple.map(
          map_absolute_value.map(inputs)
        )
      )
    );

  std::cout << reduce_minimum.reduce(transformed_inputs)
            << ' '
            << reduce_gcd.reduce(transformed_inputs)
            << '\n';

  return 0;
}