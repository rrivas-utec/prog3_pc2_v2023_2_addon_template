//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <list>
#include "find_max_product.h"
using namespace std;

static void test_1_3() {
  list<double> lst;
  double n;
  while (cin >> n) lst.push_back(n);
  auto result = find_max_product(lst);
  cout << fixed << setprecision(2) << result << endl;
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}