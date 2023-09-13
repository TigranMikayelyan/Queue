#include "queue.h"

template <typename T>
Queue<T>::Queue() : m_queue{}
{}

template <typename T>
Queue<T>::~Queue()
{
    m_queue.clear();
}

template <typename T>
Queue<T>::Queue(const Queue<T>& oth)
{
    m_queue = oth.m_queue;
}

template <typename T>
Queue<T>::Queue(Queue<T>&& oth)
{
    m_queue = oth.m_queue;
    oth.m_queue.clear();
}

template <typename T>
Queue<T>::Queue(T val)
{
    m_queue.push_back(val);
}

template <typename T>
Queue<T>& Queue<T>::operator=(const Queue<T>& oth)
{
    if (this == &oth)
    {
        return *this;
    }
    m_queue = oth.m_queue;
    return *this;
}

template <typename T>
Queue<T>& Queue<T>::operator=(Queue<T>&& oth)
{
    if (this == &oth)
    {
        return *this;
    }
    m_queue = oth.m_queue;
    oth.m_queue.clear();
    return *this;
}

template <typename T>
bool Queue<T>::operator==(Queue<T>& oth)
{
    return (m_queue == oth.m_queue);
}

template <typename T>
bool Queue<T>::operator!=(Queue<T>& oth)
{
    return (m_queue != oth.m_queue);
}

template <typename T>
bool Queue<T>::operator>(const Queue<T>& oth)
{
    return (m_queue > oth.m_queue);
}

template <typename T>
bool Queue<T>::operator<(const Queue<T>& oth)
{
    return (m_queue < oth.m_queue);
}

template <typename T>
bool Queue<T>::operator>=(const Queue<T>& oth)
{
    return !(m_queue < oth.m_queue);
}

template <typename T>
bool Queue<T>::operator<=(const Queue<T>& oth)
{
    return !(m_queue > oth.m_queue);
}

template <typename T>
T& Queue<T>::front()
{
    return m_queue.front();
}

template <typename T>
const T& Queue<T>::front() const
{
    return m_queue.front();
}

template <typename T>
T& Queue<T>::back()
{
    return m_queue.back();
}

template <typename T>
const T &Queue<T>::back() const
{
    return m_queue.back();
}

template <typename T>
bool Queue<T>::empty()
{
    return m_queue.empty();
}

template <typename T>
int Queue<T>::size()
{
    return m_queue.size();
}

template <typename T>
void Queue<T>::push(const T& val)
{
    m_queue.push_back(val);
}

template <typename T>
void Queue<T>::pop()
{
    m_queue.pop_front();
}

template <typename T>
void Queue<T>::swap(Queue<T>& oth)
{
    m_queue.swap(oth.m_queue);
}

template <typename T>
void Queue<T>::print() 
{
    for (const auto& i : m_queue) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
