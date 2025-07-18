## Data Types:

| Data types | descriptions        |
| ---------- | ------------------- |
| int        | 4 bytes `(32 bits)` |
| char       | 4 bytes `(1 bits)`  |
| float      | 4 bytes             |
| bool       | 4 bytes             |
| double     | 4 bytes             |

---

### 01 - `Int` Variable type

```cpp
    #include <iostream>
    using namespace std;
    int main (){
        int age = 25; // 11001 in binary
        return 0;
    }
```

#### 🔢 Binary Numbers

A binary number consists of only 0 and 1.

Each digit (0 or 1) is called a bit.
1 byte = 8 bits

int typically uses 4 bytes = 32 bits

So declaring int age = 25; reserves 32 bits in memory, regardless of the value assigned.

##### 🧮 How It's Stored

- 25 in binary is: `00000000 00000000 00000000 00011001`
  (32-bit padded binary)
