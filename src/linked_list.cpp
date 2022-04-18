#include "assignment/linked_list.hpp"

#include <utility> // swap

namespace assignment {

  /**
   * Переворачивает связный список, используя три указателя.
   *
   * Сложность
   *    по памяти ~ O(1)
   *    по времени ~ O(N)
   */
  void LinkedList::ReverseIterative() {
    // Напишите здесь свой код ...
    if (size_ <= 1) {
      return;
    }

    Node* curr = front_;
    Node* prev = nullptr;

    while (curr != nullptr) {
      Node* next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;

    }

    std::swap(back_, front_);
  }

  /**
   * Переворачивает связный список, используя рекурсию.
   *
   * Сложность
   *    по памяти ~ O(N)
   *    по времени ~ O(N)
   */
  void LinkedList::ReverseRecursive() {
    // Напишите здесь свой код ...
    reverse_recursive_helper(front_, nullptr);
    std::swap(front_, back_);
  }

  // вспомогательный метод для реализации рекурсии
  void LinkedList::reverse_recursive_helper(Node*& curr, Node* prev) {
    // Напишите здесь свой код ...
    if (curr == nullptr) {
      return;
    }
    reverse_recursive_helper(curr->next, curr);
    curr->next = prev;
  }

}  // namespace assignment
