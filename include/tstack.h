// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
    T * node;
    int head;
 public:
    TStack() {
        node = new T[size];
        head = -1;
    }
    bool isEmpty() {
        return head == -1;
    }
    void push(T a) {
        node[++head] = a;
    }
    T peek() {
        return node[head];
    }
    T pop() {
        return node[head--];
    }
};
#endif  // INCLUDE_TSTACK_H_
