# 🗓️ Project Planning — Library Management System

## 🧠 Overview
This plan describes the timeline, features, and responsibilities for building the **Library Management System** using **C++ & WXWidgets**.

---

## 📅 Timeline

| Week | Task | Description |
|------|------|-------------|
| Week 1 | Planning & Setup | Create repository, define structure, assign teams |
| Week 2 | GUI Design | Build login screen and dashboard using WXWidgets |
| Week 3 | Logic Implementation | Create classes (Book, User, LibraryManager) |
| Week 4 | Integration | Connect GUI with logic layer |
| Week 5 | Testing & Final Review | Fix bugs, polish GUI, prepare presentation |

---

## 🧩 System Features

1. **Login System**
   - Input fields: Username, Password
   - Validate credentials (temporary check)
   - Redirect to dashboard on success

2. **Dashboard**
   - Sidebar: Add, Delete, Search, View Books, Borrow, Return, Logout
   - Table to display all books (using `wxListCtrl`)
   - Search bar + sorting

3. **Book Management**
   - Add a new book (title, author, genre)
   - Delete or edit existing books
   - Borrow and return tracking

4. **Runtime Data Only**
   - All data stored in memory
   - No database or file storage

---

## 👥 Team Division

| Role | Members | Responsibilities |
|------|----------|------------------|
| **GUI Team** | 5–6 Members | Create login and dashboard UI using WXWidgets |
| **Logic Team** | 4–5 Members | Handle backend logic and OOP structure (Book, User, Manager classes) |
| **Team Leader** | 1 (You) | Supervise, integrate, manage GitHub repo & Jira board |

---

## 📚 Classes Overview

| Class | Description |
|--------|-------------|
| `Book` | Stores book data (id, title, author, status) |
| `User` | Represents a library user (username, password) |
| `LibraryManager` | Handles operations (add, delete, search, borrow, return) |

---

## 🔗 Integration Plan
- The **Logic Team** builds reusable classes and functions.
- The **GUI Team** calls those functions through headers.
- Integration testing will be done by both teams together.

---

## 🧾 Deliverables
- Fully working Library System (runtime data only)
- Clean GUI (Login + Dashboard)
- GitHub Repository with documentation
- Jira Board with tracked tasks
