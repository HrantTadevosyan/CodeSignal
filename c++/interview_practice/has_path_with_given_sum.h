#include <iostream>

template<typename T>
struct Tree {
  Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
  T value;
  Tree *left;
  Tree *right;
};

int helper(Tree<int> * t) {
    if (t == nullptr)
        return 0;
    
    int sum = t->value;
    sum += helper(t->left);
    sum += helper(t->right);
    
    return sum;
}

bool hasPathWithGivenSum(Tree<int> * t, int s) {
    if (t == nullptr)
        return false;

    return s == helper(t);
}

