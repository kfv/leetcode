## Introduction

This repository serves as a detailed guide to contributing to the
"Comprehensive LeetCode Solutions Guide" repository. It aims to
provide a comprehensive overview of the repository's structure and
conventions, as well as the process for contributing to the
repository. Contributions from the community are highly encouraged
and play a vital role in enhancing the educational value and
effectiveness of this repository.

## Repository Structure

Each problem is categorised by its LeetCode problem ID under the
`src/` directory. Each problem directory contains a README file,
a Makefile, and the source code for the solutions.

The README provides overview of the problem and its solutions, a
table that summarises the time and space complexities of each
solution method, and additional notes if necessary.

The solutions are organised by method. Each method is implemented
in a separate C file. The C files are named according to the
method they implement. For example, the brute force method for the
[Two Sum](src/1/README.md) problem is implemented in the
`brute_force.c` file.

Each problem directory also contains a Makefile that compiles each
solution method and the shared `test.c` file into a separate
executable. The `test.c` file contains the test cases for the
problem, and all contributors are encouraged to add this file if
it does not already exist.


```sh
.
├── CONTRIBUTING.md
├── LICENSE
├── README.md
└── src
    ├── 1
    │   ├── Makefile
    │   ├── README.md
    │   ├── brute_force.c
    │   ├── hash_table.c
    │   ├── test.c
    │   └── two_pointer.c
    └── 2
    ...
```

## Guidelines for Problem Description

Each problem requires its own README file with the following
structure:

- **General Information**: Present the problem's ID, Title, and
  Level in a table. Link the title to the problem on LeetCode.
  Example:

  | ID  | Title                                                   | Level  |
  |-----|---------------------------------------------------------|--------|
  | 1   | [Two Sum](https://leetcode.com/problems/two-sum/)       |  Easy  |

- **Implementation Details**: Present the time and space
  complexities of each solution method in a table. Include any
  supplementary notes if relevant (or leave it blank otherwise.)
  Example from the [Two Sum](src/1/README.md) problem:
    
  | Method      | Time Complexity | Space Complexity | Note                             |
  |-------------|-----------------|------------------|----------------------------------|
  | Brute Force |     _O(n²)_     |      _O(1)_      | -                                |
  | Two Pointer |  _O(n log n)_   |      _O(n)_      | Assumes input needs to be sorted |
  | Hash Table  |     _O(n)_      |      _O(n)_      | -                                |

- **Methods**: Add a dedicated subsection for each method
  implemented under the "Implementation Details" section, offering
  a thorough explanation of the solution's logic and workings.

- **Additional Notes**: If necessary, add further notes regarding
  source codes, algorithms, or other relevant specifics.

## Getting Involved

For any questions, suggestions, or concerns, please feel free to
open an issue in this repository.

If you've written solution code, prepared a bug fix, or made an
improvement to  the existing code or documentation, please feel
free to submit a pull request with your contributions.

Be as specific as possible about the changes and their impacts.
This repository thrives on your inputs, and we greatly appreciate
your support in its ongoing growth and development.

---

### Continuous Refinement

As this repository is still in its infancy, all guidelines,
including this one, are subject to refinement. Contributors are
encouraged to suggest enhancements to these guidelines and to the
repository at large. Your understanding and contributions are
greatly appreciated.
