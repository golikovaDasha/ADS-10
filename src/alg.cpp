// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  std::string s = tree[n - 1];
  std::vector<char> perm;
  int x = 0;
  while (x < s.length()) {
    perm.push_back(s[x]);
    ++x;
  }
  return perm;
}
