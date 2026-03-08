# Shortest_Job_First_CPU_Scheduling
This project implements the Shortest Job First (SJF) CPU Scheduling Algorithm (Non-Preemptive) using the C programming language.
The program simulates how an operating system schedules processes based on their burst time, selecting the process with the smallest burst time among the processes that have already arrived.It calculates and displays the Waiting Time (WT) and Turnaround Time (TAT) for each process along with the average waiting and turnaround times.

Features
Accepts Process ID, Arrival Time, and Burst Time as input
Implements Non-Preemptive Shortest Job First Scheduling
Handles CPU idle time when no process has arrived

Calculates:
Completion Time (CT)
Waiting Time (WT)
Turnaround Time (TAT)
Displays Average Waiting Time and Average Turnaround Time

Scheduling Logic
The program reads the number of processes.
Each process is entered with:
Process ID
Arrival Time
Burst Time
At each time unit, the scheduler:
Checks which processes have arrived.
Selects the process with the minimum burst time.
The selected process executes until completion.
Waiting time and turnaround time are calculated for each process.
