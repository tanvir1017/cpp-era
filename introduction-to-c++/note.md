## Data Types `Primitive`:

| Data types | descriptions                    |
| ---------- | ------------------------------- |
| int        | 4 bytes `(32 bits)`             |
| char       | 1 bytes `(8 bits)`              |
| float      | 4 bytes `(32 bits)`             |
| bool       | 1 bytes `(8 bits)`              |
| double     | 8 (2 x float) bytes `(64 bits)` |

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

- A binary number consists of only 0 and 1.

* Each digit (0 or 1) is called a bit.
* 1 byte = 8 bits

* int typically uses 4 bytes = 32 bits

* So declaring int age = 25; reserves 32 bits in memory, regardless of the value assigned.

##### 🧮 How It's Stored

- 25 in binary is: `00000000 00000000 00000000 00011001`
  (32-bit padded binary)
