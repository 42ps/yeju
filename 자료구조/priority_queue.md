https://en.cppreference.com/w/cpp/container/priority_queue

- 우선순위를 지정하여 하나의 원소를 큐에 삽입
- 가장 높은 우선순위를 가진 원소를 큐에서 제거

### 시간 복잡도
삽입, 삭제 O(logN)

### prototype
```cpp
template<
class T,
class Container = std::vector<T>,
class Compare = std::less<typename Container::value_type>
> class priority_queue;
```

default로 내림차순으로 정렬되며,
Compare로 std::greater<T>를 사용하면 가장 작은 원소를 top으로 두도록 정렬할 수 있다.

### Element access
#### top()
가장 위에 있는 원소를 조회한다.

### Capacity
#### empty()
비어있을시 true, 이외의 경우에 false를 반환
#### size()
큐의 사이즈를 반환

### Modifiers
#### push()
큐에 원소를 삽입해 정렬한다.
```cpp
c.push_back(value);
std::push_heap(c.begin(), c.end(), comp);
```

#### pop()
top에 있는 원소를 지운다.
```cpp
c.push_back(value);
std::pop_heap(c.begin(), c.end(), comp); c.pop_back();
```

프로토타입이 `void pop();`이며, 반환하지 않는다!

#### swap()
```cpp
std::priority_queue<char> s1;
std::priority_queue<int> s2;
 
s1.swap(s2); //s1와 s2를 swap한다.
```

```cpp
using std::swap;
swap(c, other.c);
swap(comp, other.comp);
```

#### emplace()
```cpp
template< class... Args >
void emplace( Args&&... args );
```
오브젝트를 생성하지 않고 바로 값을 삽입한다.
