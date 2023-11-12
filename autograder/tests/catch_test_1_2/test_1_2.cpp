//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <deque>
#include "find_max_product.h"
using namespace std;

static void test_1_2() {
  deque<long long int> deq;
  int n;
  while (cin >> n) deq.push_back(n);
  auto result = find_max_product(deq);
  cout << result << endl;
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}