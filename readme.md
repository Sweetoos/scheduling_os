# Task Scheduling Optimization System

For anyone wondering, yes. This task was generated with chatgpt and I copypasted to this file what chat had written to me.
However, don't worry, code is written by me :)
___

# Project Description

This project implements a Task Scheduling Optimization System using different scheduling algorithms. It aims to simulate the scheduling of tasks with various constraints such as execution time, priority, and deadlines. The system allows comparison of different scheduling algorithms in terms of efficiency and performance, making it useful in fields such as process management, production planning, or resource optimization.

# Key Features

Task Management:
    A data structure for storing tasks, where each task has a priority, execution time, and deadline.

Scheduling Algorithms:
        First-Come, First-Served (FCFS): Executes tasks in the order they arrive.
        Shortest Job First (SJF): Prioritizes tasks with the shortest execution time.
        Round Robin: Distributes time slots equally among tasks using a time quantum.
        Priority Scheduling: Executes tasks based on their priority.
        Earliest Deadline First (EDF): Prioritizes tasks based on their deadlines.

Performance Comparison:
        Measures the performance of different algorithms using metrics such as:
            Average waiting time.
            Total task completion time.
            Resource utilization efficiency.

User Interface (Optional):
        A simple console-based interface for adding tasks, selecting a scheduling algorithm, and displaying results.

Graphical Analysis (Optional):
        Use plotting libraries (e.g., matplotlib-cpp or gnuplot) to visualize the performance of scheduling algorithms on test data sets.

Technology Stack

C++: The core project is implemented in C++.
    STL (Standard Template Library): Leverages data structures like priority queues (priority_queue), lists (list), and vectors (vector).
    Algorithms: Focus on the implementation of task scheduling algorithms.
    Unit Testing: Use Google Test to ensure correctness of the algorithms in different scenarios.

Steps to Build the Project

Implement a data structure to manage tasks with attributes such as priority and execution time.
    Implement various scheduling algorithms (FCFS, SJF, Round Robin, Priority Scheduling, EDF).
    Create a performance comparison module that tracks metrics such as waiting time and resource utilization.
    Optionally, implement a simple user interface for inputting tasks and selecting algorithms.
    Add unit tests and generate test cases to verify the algorithms.
    Optionally, generate performance graphs to compare algorithm efficiency.