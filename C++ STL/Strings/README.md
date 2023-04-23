# Strings
## Defining string Objects
1. No initializer (or empty braces, {}):
```cpp
std::string empty; // The string ""
```

2. An initializer containing a `string` literal:
```cpp
std::string proverb{ "Consistency is the key to success." }; // The given literal
```

3. An initializer containing an existing `string` object:
```cpp
std::string sentence{ proverb }; // Duplicates proverb
```

4. An initializer containing a string literal followed by the **length** of the sequence in the literal to be used to initialize the `string` object:
```cpp
std::string part_literal{ "Least said soonest mended.", 7}; // "Least s"
```

5. An initializer containing a repeat count followed by the character literal that is to be **repeated** in the `string` that initializes the `string` object (mind the **round parentheses!**):
```cpp
std::string open_wide(6, 'a'); // "aaaaaa"
```

6. An initializer containing an existing `string` object, an **index specifying the start** of the substring, and the **length of the substring**:
```cpp
std::string phrase{proverb, 5, 8}; // "stency i"
```

7. Create a `string` from an existing `std::string` object and only a **single integer number**. The resuling `string` object then contains a substring starting at the given index.
```cpp
std::string string{ "Consistency is the key to success" };
std::string part_string{ string, 19 }; // "key to success"
std::string part_literal{"Consistency is the key to success", 18}; // "Consistency is the"
```
