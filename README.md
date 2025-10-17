
# 📚 Library Management System (C++ & WXWidgets)

## 🧩 Overview
This project is a **Library Management System** built using **C++** and **WXWidgets** for the GUI.  
It allows users to manage books, handle login sessions, and perform basic library operations.  
The system does **not use any database** — data exists only during runtime (temporary data).  

---

## 🎯 Project Goals
- Build a functional and visually clear desktop application.
- Divide responsibilities between GUI and Logic teams.
- Use WXWidgets for the interface and C++ OOP for logic.
- Maintain clean and modular code that can be extended later.

---

## 🧱 Project Structure
```

LibrarySystem/
│
├── GUI/                 # WXWidgets GUI files
│   ├── login_screen.cpp
│   ├── dashboard_screen.cpp
│   ├── gui_helpers.cpp
│   └── gui_helpers.h
│
├── Logic/               # Core system logic
│   ├── book.cpp
│   ├── book.h
│   ├── user.cpp
│   ├── user.h
│   ├── library_manager.cpp
│   └── library_manager.h
│
├── Docs/                # Documentation files
│   ├── planning.md
│   └── team_structure.md
│
├── main.cpp             # Entry point
└── README.md            # Project info

````

---

## 🧠 Features
- **Login System** (username + password)
- **Add / Delete / Search / View Books**
- **Borrow / Return Books**
- **Logout Functionality**
- **Dynamic GUI** built using WXWidgets

---

## 🧑‍💻 Team Structure
| Team | Members | Responsibility |
|------|----------|----------------|
| GUI Team | 5-6 Members | Design & implement all WXWidgets windows (login, dashboard, etc.) |
| Logic Team | 5 Members | Create and handle classes, functions, and logic behind book & user management |
| Team Leader | 1 Member | Coordinates between both teams, ensures consistent integration |

---

## 🧰 Tech Stack
- **Language:** C++
- **Framework:** WXWidgets (for GUI)
- **Version Control:** GitHub
- **Project Management:** Jira

---

## ⚙️ How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/<your-username>/LibrarySystem.git
````

2. Open the project in **Code::Blocks**, **Visual Studio**, or any C++ IDE.
3. Make sure WXWidgets is installed and linked.
4. Compile and run `main.cpp`.

---

## 🚫 Notes

* No external database is used.
* All data is temporary and lost when the application closes.
* This project focuses on **logic design** and **GUI usability**.

---

## 🏗️ Future Improvements

* Connect with a real database (MySQL or SQLite).
* Add user roles (Admin / Student).
* Implement data persistence using files or JSON.

 


