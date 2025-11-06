# MiniOS: A Modular Operating System Simulator in C

## 💡 Overview

**MiniOS** is a modular simulator written in C that integrates fundamental concepts of operating systems into a cohesive and tangible project.  
It is designed as a hands-on learning tool to study and demonstrate core OS topics such as memory management, file systems, threading, protection mechanisms, and inter-process communication.

Each module corresponds to a key concept explored in an undergraduate Operating Systems course, combining to form a small yet functional simulation of how a kernel operates internally.

---

## ✨ Features

- **ROMFS File System Module**  
  Implements parsing and reading of a ROMFS-like filesystem image to simulate virtual disk mounting and file exploration.

- **Custom Memory Allocator**  
  Provides a simple implementation of `memalloc` and `memfree`, using a linked-list allocator with coalescence to manage heap memory within the simulator.

- **Cooperative User-Level Scheduler**  
  Simulates user-level cooperative threads using manual context switching, mimicking coroutine behavior and simple thread scheduling.

- **Memory Protection & Signal Handling**  
  Utilizes the `mprotect` system call and POSIX signals to emulate memory isolation and error recovery between running threads.

- **Secure Process Sandbox**  
  Demonstrates process isolation and inter-process communication (IPC) using `pipe`, `fork`, and `seccomp` to restrict a child process's access to underlying system calls.

---

## 📁 Project Structure (Module Overview)

| **Component** | **Main Files** | **Module Description** |
|----------------|----------------|--------------------------|
| **Core** | `src/main.c` | System initialization, integration of all modules, and main boot sequence. |
| **File System** | `src/fs.c`, `include/fs.h` | Implements the parser and utilities to simulate ROMFS image mounting and exploration. |
| **Memory Manager** | `src/mem.c`, `include/mem.h` | Contains the custom allocator (`memalloc` / `memfree`) with coalescing logic. |
| **Threading** | `src/threads.c`, `include/threads.h` | Context switching logic for the cooperative thread scheduler. |
| **Protection** | `src/protect.c`, `include/protect.h` | Configures signals and uses `mprotect` to emulate memory isolation. |
| **Sandboxing** | `src/sandbox.c`, `include/sandbox.h` | Handles process management (`fork`), IPC (`pipe`), and system call filtering (`seccomp`). |
| **Headers** | `include/` | Directory containing all shared `.h` interface files. |

---

## 🛠️ Build and Run

### Prerequisites
- **GCC or Clang** — C compiler suite.  
- **make** utility.  
- **Linux operating system** — required for `mprotect`, `seccomp`, and POSIX signal support.

### Compilation
```bash
make
Execution
bash
Copiar código
./miniOS
Expected Output
scss
Copiar código
[BOOT] Initializing MiniOS...
[MEM] Heap initialized (16KB)
[FS] Mounted ROMFS image
[PROC] Forking sandboxed child...
[THREAD] Starting cooperative scheduler...
[SECURE] Sandboxing child with SECCOMP