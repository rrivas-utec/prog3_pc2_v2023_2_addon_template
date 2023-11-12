//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <forward_list>
#include "find_max_product.h"
using namespace std;

static void test_1_4() {
  forward_list<double> flst;
  double n;
  while (cin >> n) flst.push_front(n);
  auto result = find_max_product(flst);
  cout << fixed << setprecision(2) << result << endl;
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", test_1_4);
}