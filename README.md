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
        ├── first_and_last_number_of_givin_target.cpp
        └── search_one_target.cpp
```

## Solved Problems

| No. | Problem | Topic | Approach | Time | Space |
| ---: | --- | --- | --- | --- | --- |
| 1 | [Two Sum](DSA_Practics/array/001_two_sum.c++) | Array | Two pointers | `O(n)` | `O(1)` |
| 2 | [Search for One Target](DSA_Practics/searching/bineary_search/search_one_target.cpp) | Binary Search | Iterative binary search | `O(log n)` | `O(1)` |
| 3 | [Find First and Last Position of Target](DSA_Practics/searching/bineary_search/first_and_last_number_of_givin_target.cpp) | Binary Search | Two binary searches | `O(log n)` | `O(1)` |

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

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
| Problem Name | Difficulty |
| ------- | ------- |
| [0011-container-with-most-water](https://github.com/munnnakumargpj4321-prog/dsa-practice/tree/main/0011-container-with-most-water/) | Medium |
## Two Pointers
| Problem Name | Difficulty |
| ------- | ------- |
| [0011-container-with-most-water](https://github.com/munnnakumargpj4321-prog/dsa-practice/tree/main/0011-container-with-most-water/) | Medium |
| [0344-reverse-string](https://github.com/munnnakumargpj4321-prog/dsa-practice/tree/main/0344-reverse-string/) | Easy |
## Greedy
| Problem Name | Difficulty |
| ------- | ------- |
| [0011-container-with-most-water](https://github.com/munnnakumargpj4321-prog/dsa-practice/tree/main/0011-container-with-most-water/) | Medium |
## Math
| Problem Name | Difficulty |
| ------- | ------- |
| [0009-palindrome-number](https://github.com/munnnakumargpj4321-prog/dsa-practice/tree/main/0009-palindrome-number/) | Easy |
| [0069-sqrtx](https://github.com/munnnakumargpj4321-prog/dsa-practice/tree/main/0069-sqrtx/) | Easy |
## Binary Search
| Problem Name | Difficulty |
| ------- | ------- |
| [0069-sqrtx](https://github.com/munnnakumargpj4321-prog/dsa-practice/tree/main/0069-sqrtx/) | Easy |
## String
| Problem Name | Difficulty |
| ------- | ------- |
| [0344-reverse-string](https://github.com/munnnakumargpj4321-prog/dsa-practice/tree/main/0344-reverse-string/) | Easy |
<!---LeetCode Topics End-->