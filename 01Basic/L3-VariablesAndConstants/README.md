# L3 Variables and Constants

## Constants:

- constexpr variables are evaluated at compile time.
- constexpr functions can be invoked with plain variables
- consteval can only be invoked with const variables

**Sample Code**

## consteval function

```cpp
consteval double GetPi() { return 22.0 / 7; }
constexpr double XPi(int x) { return x * GetPi(); }
constexpr double pi = GetPi()
```

## Enum

Enum variables are user-defined types. This variable only accepts the values defined inside the enum.

```cpp
enum RainbowColors {
    Violet = 0,
    Indigo,
    Blue,
    Green,
    Yellow,
    Orange,
    Red
};
```

## Scoped Enum

Scoped enum ensures that variables of its type can only be assigned directly to other variables of the same type

```cpp
enum class CardinalDirections
{North, South, East, West};

CardinalDirections dir = CadinalDirections::South;

int someNumber = CardinalDirections::South; //error
int someNumber = dir; //error

CardinalDirections dir2 = dir // OK
```
