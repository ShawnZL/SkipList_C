//
// Created by Shawn Zhao on 2022/11/7.
//

#ifndef SKIPLIST_C_NODE_H
#define SKIPLIST_C_NODE_H
template<typename K, typename V>
class SkipList;

template<typename K, typename V>
class Node {
    friend class SkipList<K,V>;
public:
    Node() {};
    Node(K k, V v);
    ~Node();
    K getKey() const;
    V getValue() const;

private:
    K key;
    V value;
    Node<K,V> **forward;
    int nodeLevel;
};

template<typename K, typename V>
Node<K, V>::Node(const K k, const V v) {
    key = k;
    value = v;
}

template<typename K, typename V>
Node<K,V>::~Node() {
    delete[]forward;
}

template<typename K, typename V>
K Node<K, V>::getKey() const {
    return key;
}

template<typename K, typename V>
V Node<K,V>::getValue() const {
    return value;
}
#endif //SKIPLIST_C_NODE_H
