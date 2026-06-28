# DSA Practice

A collection of my Data Structures and Algorithms solutions written in C++.
This repository helps me practise problem-solving, record the approach used for
each question, and track the time and space complexity of every solution.

## Repository Structure

```text
DSA_Practics/
├── array/
│   └── 001_two_sum.c++
└── searching/
    └── bineary_search/
        └── search_one_target.cpp
```

## Solved Problems

| No. | Problem | Topic | Approach | Time | Space |
| ---: | --- | --- | --- | --- | --- |
| 1 | [Two Sum](DSA_Practics/array/001_two_sum.c++) | Array | Two pointers | `O(n)` | `O(1)` |
| 2 | [Search for One Target](DSA_Practics/searching/bineary_search/search_one_target.cpp) | Binary Search | Iterative binary search | `O(log n)` | `O(1)` |

> **Note:** The Two Sum solution uses two pointers, so its input array must be
> sorted in ascending order.

## Solution Format

Each solution contains comments explaining:

- the question and its input requirement;
- the step-by-step approach;
- the time and space complexity; and
- an example test in `main()`.

## Run a Solution

Compile and run a file with a C++17-compatible compiler. For example, in
PowerShell:

```powershell
g++ "DSA_Practics/array/001_two_sum.c++" -std=c++17 -o two_sum
./two_sum.exe
```

## Goal

Keep learning new DSA patterns and add well-explained solutions regularly.
