# Push Swap - 42 Project

## 🧮 Overview

**Push Swap** is an algorithmic sorting project from 42 programming school.  
The goal is to sort a list of integers using a limited set of stack operations, with the smallest number of moves possible.

There is two programs:
- `push_swap`: which outputs a list of operations to sort the input.
- `checker`: which checks if the operations correctly sort the list.

## 🚀 Getting Started

### Requirements

- Unix-like system (Linux/macOS)
- gcc compiler
- make

### Installation & Run

> **Note:** This project was originally developed on macOS and may not be compatible with Linux out of the box.

```bash
git clone https://github.com/yourusername/42-push_swap
cd 42-push_swap
make
./push_swap 3 2 1
./push_swap 3 2 1 | ./checker 3 2 1
```

## 🛠 Features

- Custom parsing and error handling
- Double-stack manipulation (Stack A and Stack B)
- Optimized sorting for small and large datasets
- Implemented with a limited set of operations:
  - `sa`, `sb`, `ss` — Swap top elements
  - `pa`, `pb` — Push top element to other stack
  - `ra`, `rb`, `rr` — Rotate stack up
  - `rra`, `rrb`, `rrr` — Rotate stack down


## ⚙️ Sorting Strategies

### `mini_sort()`
Used when the stack has 3 elements. It determines the max value and rotates/swaps accordingly to sort in minimal moves.

### `medium_sort()`
For 4–5 elements: pushes two smallest elements to stack B, uses `mini_sort()` on the remaining, and reinserts the elements with a custom insertion sort logic.

### `big_sort()`
A custom large-scale sorting strategy that:
- Pushes mid-range values between stacks A and B (`push_all_med_to_b`, `push_all_med_to_a`)
- Uses a custom selection mechanism (`set_first_min`, `set_next_min`, `put_min`) to progressively sort values
- Adapts the rotation strategy based on the position of the next minimum

While not a classical algorithm, `big_sort()` is inspired by selection and radix sorting techniques, optimized for stack constraints.

## 🙏 Acknowledgments
[42 School](https://42.fr)

