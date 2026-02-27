# ALX Projects Super-Repository

This repository serves as the main container for my ALX Software Engineering projects. The individual project groups are organized as Git submodules.

## Submodules

This project contains the following submodules:

-   `alx-higher_level_programming`: Contains projects primarily focused on Python, covering everything from basic syntax to advanced concepts like OOP and TDD.
-   `alx-low_level_programming`: Contains projects focused on C programming, building a strong foundation in pointers, memory management, and data structures.
-   `alx-system_engineering-devops`: Contains projects related to Bash scripting, networking, web servers, and other DevOps principles.

## Setup and Cloning

To clone this repository and all its submodules, use the following command:

```bash
git clone --recurse-submodules https://github.com/Tsegazeab3/ALX_Projects.git
```

If you have already cloned the repository without the submodules, you can initialize them with:

```bash
git submodule update --init --recursive
```

## Required Packages & Languages

The projects within the submodules utilize several languages and tools. To work with them, you will generally need:

-   **C Projects:** `gcc` (GNU Compiler Collection)
-   **Python Projects:** `python3`
-   **DevOps & Scripting:** A Unix-like environment with `bash`, and `ruby` for some specific tasks.
