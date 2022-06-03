// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  // напишите реализацию
  std::string optionsTree = tree[n - 1];
  std::vector<char> numbers;
  for (int i = 0; i < optionsTree.length(); i++) {
    numbers.push_back(optionsTree[i]);
  }
  return numbers;
}
