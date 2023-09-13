#ifndef QUEUE_H
#define QUEUE_H

#include <list>
#include <iostream>

template <typename T>
class Queue
{
public:
    Queue();
    ~Queue();
    Queue(const Queue<T>&);
    Queue(Queue<T>&&);
    Queue(T);
public:
    Queue<T>& operator=(const Queue<T>&);
    Queue<T>& operator=(Queue<T>&&);
    bool operator==(Queue<T>&);
	bool operator!=(Queue<T>&);
	bool operator>(const Queue<T>&);
	bool operator<(const Queue<T>&);
	bool operator>=(const Queue<T>&);
	bool operator<=(const Queue<T>&);
public:
    T& front();
    const T& front() const;
    T& back();
    const T& back() const;
    bool empty();
    int size();
    void push(const T&);
    void pop();
    void swap(Queue<T>&);
    void print();
private:
    std::list<T> m_queue;
};

#endif // QUEUE_H