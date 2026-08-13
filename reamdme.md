# 🏦 Banking System

A modular **Banking System** application built with **C++**, designed to manage client data through a clean and organized architecture.

The project focuses on applying practical C++ programming concepts such as **Structures, Enums, Vectors, File Handling, Data Conversion, Input Validation, and Modular Programming**.

---

## 📌 Project Overview

The Banking System provides a simple interface for managing bank clients and their account information.

The application stores client data in a text file and loads the data into memory using `std::vector`, allowing the program to perform different operations efficiently.

The project is organized into independent modules to keep responsibilities separated and make the code easier to maintain, understand, and extend.

---

## ✨ Features

### 👥 Client Management

The system currently supports:

* 📋 Show all clients
* ➕ Add a new client
* 🗑️ Delete a client
* ✏️ Update client information
* 🔎 Find a client by account number
* 📄 Show detailed client information
* 🚪 Exit the application

### 💾 File Management

Client data is stored in a text file and can be:

* Loaded from the file into a `std::vector`
* Converted from text lines into client records
* Converted from client records into text lines
* Saved back to the file

### ✅ Input Validation

The project also includes reusable helper functions for:

* Validating numbers within a specific range
* Reading positive numbers
* Reading account numbers
* Handling menu selections
* Formatting screen output
* Waiting for user input before continuing

---

## 🏗️ Project Architecture

The project follows a modular structure where each module has a specific responsibility.

```text
Banking-System/
│
├── docs/
│   └── files/
│       └── ClientsData.txt
│
├── Header Files/
│   └── src/
│       ├── clients/
│       │   └── clients.h
│       │
│       ├── core/
│       │   └── core.h
│       │
│       ├── file-handler/
│       │   └── file-handler.h
│       │
│       └── helpers/
│           └── helpers.h
│
├── Source Files/
│   ├── src/
│   │   ├── clients/
│   │   │   ├── client-management.cpp
│   │   │   ├── client-operations.cpp
│   │   │   ├── client-ui.cpp
│   │   │   └── client-validation.cpp
│   │   │
│   │   ├── core/
│   │   │   └── core.cpp
│   │   │
│   │   ├── file-handler/
│   │   │   ├── data-conversion.cpp
│   │   │   └── file-operation.cpp
│   │   │
│   │   └── helpers/
│   │       └── helpers.cpp
│   │
│   └── main.cpp
│
└── README.md
```

---

## 🧩 Modules

### 👥 Clients Module

**Location:**

```text
src/clients/
```

Responsible for all client-related operations.

Main responsibilities include:

* Displaying clients
* Adding clients
* Finding clients
* Updating clients
* Deleting clients
* Displaying client details
* Reading new client information
* Managing the client management screen

Main functions include:

```cpp
ShowClientsListScreen()
ShowAddNewClientScreen()
FindClientByAccountNumber()
ReadNewClient()
ShowDeleteClientScreen()
DeleteClientByAccountNumber()
UpdateClientByAccountNumber()
ShowUpdateClientScreen()
ShowFindClientScreen()
ManageClient()
```

The module is further divided into multiple source files:

```text
client-management.cpp
client-operations.cpp
client-ui.cpp
client-validation.cpp
```

This separation helps keep the client functionality organized instead of placing everything in one large source file.

---

### ⚙️ Core Module

**Location:**

```text
src/core/
```

The Core module contains the fundamental definitions shared across the project.

It includes the main client data structure:

```cpp
struct stClientData
{
    std::string accNumber = "";
    std::string PinCode = "";
    std::string name = "";
    std::string phone = "";
    double accBalance = 0;
    bool MarkForDelete = false;
};
```

It also contains the main menu options:

```cpp
enum enMainMnueOptions
{
    ShowClientsList = 1,
    AddNewClient = 2,
    DeleteClient = 3,
    UpdateClient = 4,
    FindClient = 5,
    Exit = 6
};
```

The Core module acts as a foundation for other modules that depend on the project's main data definitions.

---

### 📁 File Handler Module

**Location:**

```text
src/file-handler/
```

Responsible for communication between the application and the data file.

It handles both **File I/O** and **Data Conversion**.

#### Data Conversion

The module provides functions such as:

```cpp
split()
ConvertClientRecordToDataLine()
ConvertClientDataLineToRecord()
```

These functions convert data between:

```text
Client Record ↔ Text Line
```

#### File Operations

The module also provides:

```cpp
LoadDataFromFileToVector()
SaveDataToFile()
```

The general data flow is:

```text
ClientsData.txt
      │
      ▼
LoadDataFromFileToVector()
      │
      ▼
std::vector<stClientData>
      │
      ▼
Client Operations
      │
      ▼
SaveDataToFile()
      │
      ▼
ClientsData.txt
```

---

### 🛠️ Helpers Module

**Location:**

```text
src/helpers/
```

Contains reusable utility functions used throughout the application.

Examples include:

```cpp
isNumberInRange()
ReadNumberInRange()
ResetScreen()
GetWordForm()
PressAnyKey()
ReadAccountNumber()
ReadPositiveNumber()
```

The purpose of this module is to avoid repeating common functionality across different parts of the project.

---

## 💾 Data Storage

Client information is stored in:

```text
ClientsData.txt
```

Each client is represented by one line.

The project uses:

```text
#//#
```

as the delimiter between fields.

### Example

```text
A1001#//#1234#//#Mohamed Ibrahim Askar#//#01000000000#//#50000
```

The data represents:

| Field        | Description           |
| ------------ | --------------------- |
| `accNumber`  | Client account number |
| `PinCode`    | Account PIN           |
| `name`       | Client full name      |
| `phone`      | Client phone number   |
| `accBalance` | Account balance       |

---

## 🔄 Data Conversion

The project separates the stored text representation from the application's internal representation.

### Text → Record

```text
"A1001#//#1234#//#Mohamed Ibrahim Askar#//#01000000000#//#50000"
                              │
                              ▼
                    stClientData
```

### Record → Text

```text
stClientData
     │
     ▼
ConvertClientRecordToDataLine()
     │
     ▼
"A1001#//#1234#//#Mohamed Ibrahim Askar#//#01000000000#//#50000"
```

This makes the file-handling logic independent from the client-management logic.

---

## 🧠 Main Menu

The application provides the following main operations:

```text
[1] Show Clients List
[2] Add New Client
[3] Delete Client
[4] Update Client
[5] Find Client
[6] Exit
```

The menu is represented internally using the `enMainMnueOptions` enum.

---

## 🛡️ Input Validation

The project includes reusable validation functions to make user input safer and more consistent.

For example:

```cpp
ReadNumberInRange()
```

is used to ensure that a number falls within a specified range.

Other helpers handle:

* Positive numbers
* Account numbers
* Menu choices
* Screen interaction

---

## 🧱 Programming Concepts Used

This project applies several important C++ concepts:

* C++ Functions
* Structures (`struct`)
* Enumerations (`enum`)
* `std::vector`
* `std::string`
* References
* Pointers
* Default Parameters
* File I/O
* Data Parsing
* String Splitting
* Input Validation
* Modular Programming
* Separation of Responsibilities
* Header / Source File Organization

---

## 🗂️ Design Approach

The project follows a **Separation of Concerns** approach.

Each module has a specific responsibility:

```text
┌──────────────────────┐
│      Main Program    │
└──────────┬───────────┘
           │
           ▼
┌──────────────────────┐
│   Client Management  │
└───────┬───────┬──────┘
        │       │
        ▼       ▼
┌───────────┐ ┌──────────────┐
│  Helpers  │ │ File Handler │
└───────────┘ └───────┬──────┘
                     │
                     ▼
              ┌──────────────┐
              │ ClientsData  │
              │     .txt     │
              └──────────────┘

             Core
               │
               ▼
        Shared Data & Logic
```

This architecture makes the project easier to:

* Understand
* Debug
* Maintain
* Extend
* Reuse

---

## 🚀 Future Improvements

Possible future enhancements include:

* 💰 Deposit and withdrawal operations
* 💸 Transactions history
* 🔐 Login and authentication system
* 👤 User permissions
* 📊 Transaction reports
* 🔎 Advanced client search
* 💾 Improved data storage
* 🧪 Automated testing
* 🖥️ Improved user interface

---

## 📌 Project Status

**Version:** `1.0`

**Status:** `Completed — Basic Client Management Features`

The current version provides the fundamental client-management functionality and a modular foundation that can be extended with additional banking features.

---

## 👨‍💻 Developer

### Mohamed Askar

**C++ Developer & Project Developer**

> Code . Learn . Evolve 🚀

---

## 📄 License

This project was created for **learning, practice, and software development purposes**.
