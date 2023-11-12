//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <vector>
#include "find_max_product.h"
using namespace std;

static void test_1_1() {
  vector<long long int> vec;
  int n;
  while (cin >> n) vec.push_back(n);
  auto result = find_max_product(vec);
  cout << result << endl;
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}