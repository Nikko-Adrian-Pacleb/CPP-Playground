# L3 Variables and Constants

Constants:

- constexpr variables are evaluated at compile time.
- constexpr functions can be invoked with plain variables
- consteval can only be invoked with const variables

**Sample Code**
consteval function

```cpp
consteval double GetPi() { return 22.0 / 7; }
constexpr double XPi(int x) { return x * GetPi(); }
constexpr double pi = GetPi()
```
