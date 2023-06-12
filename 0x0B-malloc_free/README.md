## 0x0B. *C* - malloc, free

[0-create_array.c](./0-create_array.c): A function that creates an array of chars, and initializes it with a specific char.

- :x: Prototype: char create `*_array(unsigned int size, char c);`
- :x: Returns `NULL` if size = `0`
- :x: Returns a pointer to the array, or `NULL` if it fail

[1-strdup.c](./1-strdup.c): A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- :x: Prototype: `char *_strdup(char *str);`
- :x: The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
- :x: Returns `NULL` if str = NULL
- :x: On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

- :x: FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.

[2-str_concat.c](./2-str_concat.c): A function that concatenates two strings.

- :x: Prototype: `char *str_concat(char *s1, char *s2);`
- :x: The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
- :x: if `NULL` is passed, treat it as an empty string
- :x: The function should return `NULL` on failure



<hr>

### ©ALXPROGRAM
