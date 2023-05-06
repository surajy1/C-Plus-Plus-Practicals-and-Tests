# Strings
## Defining string Objects
1. No initializer (or empty braces, `{}`):
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

## Operations with String Objects
### Concatenating Strings
```cpp
string first;							// Stores the first name
string second;							// Stores the second name

cout << "Enter your first name: ";
cin >> first;							// Read first name

cout << "Enter your second name: ";
cin >> second;							// Read second name

string sentence = "Your full name is ";		// Create basic Sentence
sentence += first + " " + second + ".";		// Augment with names

cout << sentence << endl;				// Output the sentence
cout << "The string contains "
     << sentence.length() << " characters."
     << endl;
```
Output:
```
Enter your first name: John
Enter your second name: Doe
Your full name is John Doe.
The string contains 27 characters.

```

> The `append()` function of `string` object is an alternative to the `+=` operator.
```cpp
sentence.append(first).append(" ").append(second).append(".");
```

> The `append()` function is more flexible than `+=` because it allows, for instance, the concatenation of substrings, or repeated characters:
```cpp
std::string compliment("~~~ What a beautiful name... ~~~");
sentence.append(compliment, 3, 22); // Appends " What a beautiful name", starting from index = 3 (4th position), append 22 characters
sentence.append(3, '!'); // Appends "!!!"
```
