# 🏦 Banking System

A modular **Banking System** application built with **C++**, designed to manage clients and perform basic banking transactions through a clean and organized architecture.

The project focuses on practical C++ concepts such as **Structures, Enums, Vectors, File Handling, Data Conversion, Input Validation, and Modular Programming**.

---

## 📌 Features

### 👥 Client Management

* 📋 Show all clients
* ➕ Add a new client
* 🗑️ Delete a client
* ✏️ Update client information
* 🔎 Find a client by account number
* 📄 Show detailed client information

### 💰 Transactions

The system supports basic banking transactions through a dedicated **Transaction Main Menu**:

* 💵 Deposit
* 💸 Withdraw
* 💰 Show Total Balances
* ↩️ Return to Main Menu

---

## 🏗️ Project Architecture

The project is divided into independent modules to keep responsibilities separated and make the code easier to maintain and extend.

```text
Banking-System/
│
├── Header Files/
│   └── src/
│       ├── clients/
│       ├── core/
│       ├── file-handler/
│       ├── helpers/
│       └── transactions/
│
├── Source Files/
│   ├── src/
│   │   ├── clients/
│   │   ├── core/
│   │   ├── file-handler/
│   │   ├── helpers/
│   │   └── transactions/
│   │
│   └── main.cpp
│
├── docs/
│   └── files/
│       └── ClientsData.txt
│
└── README.md
```

---

## 💾 Data Storage

Client data is stored in `ClientsData.txt` and loaded into a `std::vector` for processing.

The project uses:

```text
#//#
```

as the delimiter between client fields.

Example:

```text
A1001#//#1234#//#Mohamed Ibrahim Askar#//#01000000000#//#50000
```

---

## 🧩 Main Modules

### Clients

Handles client management operations such as adding, deleting, updating, searching, and displaying clients.

### Transactions

Handles banking operations including:

```text
Deposit
Withdraw
Total Balances
Transaction Main Menu
```

### File Handler

Responsible for loading and saving client data and converting between text and client records.

### Helpers

Contains reusable functions for input validation, account number reading, screen handling, and other common operations.

### Core

Contains shared data structures, enums, and core definitions used throughout the project.

---

## 🧠 Programming Concepts

The project applies:

* C++ Functions
* Structures and Enumerations
* `std::vector` and `std::string`
* References and Pointers
* File I/O
* Data Parsing and Conversion
* Input Validation
* Modular Programming
* Separation of Responsibilities

---

## 📌 Project Status

**Version:** `1.1`

**Status:** `In Progress`

The project currently includes **Client Management** and **Basic Banking Transactions**, with more banking features planned for future development.

---

## 👨‍💻 Developer

### Mohamed Askar

**C++ Developer & Project Developer**

> Code . Learn . Evolve 🚀

---

## 📄 License

This project was created for **learning, practice, and software development purposes**.
