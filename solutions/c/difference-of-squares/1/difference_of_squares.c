#include "difference_of_squares.h"

#include "difference_of_squares.h"

// Loop from 1 to number, add them up, then square the total
unsigned int square_of_sum(unsigned int number) {
  unsigned int sum = 0;
  for (unsigned int i = 1; i <= number; i++) {
    sum += i;
  }
  return sum * sum;
}

// logic: Loop from 1 to number, square each one, and add it to the total
unsigned int sum_of_squares(unsigned int number) {
  unsigned int total_squares = 0;
  for (unsigned int i = 1; i <= number; i++) {
    total_squares += (i * i);
  }
  return total_squares;
}

// Subtract the two results
unsigned int difference_of_squares(unsigned int number) {
  return square_of_sum(number) - sum_of_squares(number);
}
