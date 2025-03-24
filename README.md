# Push Swap

## Description
Push Swap is a 42 school project that involves sorting a stack of integers using a limited set of operations and an auxiliary stack. The goal is to implement an efficient sorting algorithm (such as Radix Sort) that minimizes the number of operations required to sort the stack.

The project simulates two stacks (Stack A and Stack B) and allows only the following operations:
- `sa` (swap A)
- `sb` (swap B)
- `ss` (swap both)
- `pa` (push from B to A)
- `pb` (push from A to B)
- `ra` (rotate A up)
- `rb` (rotate B up)
- `rr` (rotate both up)
- `rra` (rotate A down)
- `rrb` (rotate B down)
- `rrr` (rotate both down)

## Features
- Efficient sorting using Radix Sort (or alternative algorithms like QuickSort hybrid)
- Handles both small (3-5 numbers) and large (100-500 numbers) stacks optimally
- Parses input and validates integers
- Minimizes the number of operations for sorting
- Includes a visualizer (bonus) to see the sorting process (if implemented)

## Installation
Clone the repository:
```bash
git clone https://github.com/vtrevisa/Push_Swap.git
```
Navigate to the project directory:
```bash
cd Push_Swap
```
Compile the program:
```bash
make
```
## Usage
Basic Sorting
```bash
./push_swap 3 1 2
```
Outputs a sequence of operations to sort the stack (e.g., sa, ra, etc.).

## Algorithm Overview
> Radix Sort Approach
> Convert numbers to binary (or another base).
> Sort by each digit (LSB to MSB) using pb and pa operations.
> Repeat until fully sorted.
> Small Stack Optimization (3-5 numbers)
> Uses a hardcoded optimal sequence (e.g., sa + ra for 3 1 2).
> Medium/Large Stacks
> Radix Sort (base-2 or base-3) for efficiency.

## Error Handling
> Detects invalid input (non-integers, duplicates, or values outside INT range).
> Handles empty input or no arguments.
> Bonus Features (If Implemented)
> Checker program to validate sorting.
> Visualizer (e.g., terminal-based animation).

## Testing
Test with random inputs:
Test 100 numbers
```bash
ARG=$(seq 1 100 | shuf | tr '\n' ' '); ./push_swap $ARG | wc -l
```

Test 500 numbers
```bash
ARG=$(seq 1 500 | shuf | tr '\n' ' '); ./push_swap $ARG | wc -l
```

## Technical Details
> Written in C
> Uses linked lists or arrays for stack representation
> Follows 42 Norm guidelines

## Author
Vitor Trevisan - vi.trevi.11@gmail.com - vtrevisa
