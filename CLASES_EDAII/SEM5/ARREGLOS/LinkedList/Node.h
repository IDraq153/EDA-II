#ifndef NODE_H
#define NODE_H

template <typename T> class Node {
private:
  T value;
  Node *sgtNode;

public:
  Node(int value) {
    this->value = value;
    sgtNode = nullptr;
  }
  T getValue() { return this->value; }
  Node *getSgtNode() { return this->sgtNode; }
  void setValue(T tmp) { this->value = tmp; }
  void setSgtNode(Node *tmp) { this->sgtNode = tmp; }
};

#endif
