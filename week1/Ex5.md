**What are `escape sequences'? What standard `escape sequences' are defined in C++? What are their meanings?**

| Escape sequence | Meaning / Description |
|-----------------|------------------------|
| `\\`           | Backslash (`\`) |
| `\'`           | Single quote (`'`) |
| `\"`           | Double quote (`"`) |
| `\?`           | Question mark (`?`) |
| `\n`           | Newline (line break) |
| `\t`           | Horizontal tab |
| `\r`           | Carriage return |
| `\v`           | Vertical tab |
| `\f`           | Form feed |
| `\a`           | Alert (bell sound) |
| `\b`           | Backspace |


If you use an unkown escape sequence the compiler gives you a warning and ignores the backslash. As seen in the example the output of the program is 'HellocWorld' because '\c' is not a known escape sequence.



