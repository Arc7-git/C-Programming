Personal Finance Tool 💰

A simple C-based personal finance management tool that helps users analyze their monthly finances, build personalized budgets, calculate debt ratios, and evaluate their overall financial health.

📌 Features

1. Build a Budget

Create a budget based on your financial goals:

* Savings-Oriented Budget — prioritizes savings and investments.
* Lifestyle-Oriented Budget — allocates more money toward recreation and lifestyle expenses.
* Balanced Budget — follows the 50-30-20 budgeting rule.

2. Financial Score

Get a financial health score out of 100 based on:

* Savings rate
* Debt-to-income ratio
* Needs-to-income ratio
* Wants-to-income ratio

The tool categorizes your result as:

* ⭐ Excellent Financial Health
* 👍 Good Financial Health
* 📊 Average Financial Health
* ⚠️ Poor Financial Health

3. Debt Ratio

Calculate your Debt-to-Income (DTI) ratio and estimate how long it would take to clear your debt based on your monthly payments.

4. Expense Warnings

The program checks major fixed expenses and provides warnings when:

* EMI payments are too high
* Rent takes up too much of your income
* Utility expenses are unusually high

🛠️ Technologies Used

* C
* Standard C Libraries:
    * stdio.h
    * stdlib.h
    * math.h


🚀 How to Run

1. Clone the repository

git clone <your-repository-url>
cd PROJECT

2. Compile the program

Using GCC:

gcc personal_budgeting.c -o personal_budgeting

3. Run the program

On macOS/Linux:

./personal_budgeting

On Windows:

personal_budgeting.exe

🧮 How It Works

The program first collects the user’s:

* Monthly income
* EMI payments
* Rent
* Utility expenses
* Insurance expenses

It then calculates the user’s disposable income and provides access to different financial tools.

Monthly Income
      ↓
Fixed Expenses
      ↓
Disposable Income
      ↓
 ┌───────────────┬────────────────┬─────────────────┐
 │ Build Budget  │ Financial Score│   Debt Ratio    │
 └───────────────┴────────────────┴─────────────────┘

📊 Budgeting Methods

Savings-Oriented

The user chooses a savings percentage of their disposable income. The remaining amount is divided between investments and miscellaneous expenses.

Lifestyle-Oriented

A selected percentage of disposable income is allocated toward lifestyle expenses such as:

* Vacations
* Dining out
* Movies
* Recreation

The remaining amount is divided between savings, investments, and miscellaneous expenses.

Balanced Budget

Uses the 50-30-20 rule:

Category	Allocation
Needs & Essentials	50%
Recreation	30%
Savings & Investment	20%

The savings and investment portion is further divided between the two.

🎯 Purpose

This project was developed as a C programming project to apply fundamental programming concepts to a practical real-world problem.

It demonstrates the use of:

* Functions
* Conditional statements
* switch statements
* User input/output
* Arithmetic calculations
* Global variables
* Formatted output
* Basic financial calculations

⚠️ Disclaimer

This project is intended for educational and informational purposes only. The budgeting recommendations and financial calculations should not be considered professional financial advice.

👨‍💻 Author

Archit Nikam

A C programming project focused on applying programming fundamentals to personal finance management.
