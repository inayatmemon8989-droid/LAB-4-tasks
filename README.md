# C Programming Lab Solutions

A collection of foundational C programs covering standard input/output operations, relational and logical operators, conditional branching (`if-else`), arithmetic calculations, and string handling techniques.

---

## 📜 Task Overview & Descriptions

### 1. Scholarship Qualification Check
* **File:** `01_scholarship.c`
* **Description:** Determines scholarship eligibility based on merit or financial background using the logical OR (`||`) operator. A student qualifies if their score is $\ge 80\%$ or if their family income is less than $\text{Rs. } 50,000$.

### 2. Library Fine Calculation
* **File:** `02_library_fine.c`
* **Description:** Calculates late return fees using nested `if-else` structures.
  * `0 days`: No Fine
  * `1 – 5 days`: Rs. 50
  * `6 – 10 days`: Rs. 100
  * `> 10 days`: Rs. 200

### 3. Student Registration (String & Character Input)
* **File:** `03_student_registration.c`
* **Description:** Demonstrates line-by-line text input using `fgets()`, standard output with `puts()`, and single-character input handling via `scanf()`. It illustrates how `fgets()` safely reads full names containing spaces without buffer overflows.

### 4. Rectangle Area & Perimeter
* **File:** `04_rectangle.c`
* **Description:** Takes input for length and width, then calculates both area ($\text{length} \times \text{width}$) and perimeter ($2 \times (\text{length} + \text{width})$).

### 5. Square and Cube Calculation
* **File:** `05_square_cube.c`
* **Description:** Accepts an integer and computes its square ($n^2$) and cube ($n^3$).

### 6. Celsius to Fahrenheit Converter
* **File:** `06_temp_converter.c`
* **Description:** Converts temperature from Celsius to Fahrenheit using the formula:
  $$F = \left(C \times \frac{9}{5}\right) + 32$$
  Uses explicit float division (`9.0 / 5.0`) to avoid integer truncation.

### 7. Three-Number Average Calculator
* **File:** `07_average.c`
* **Description:** Prompts for three numerical inputs and displays their arithmetic mean.

### 8. Pass or Fail Evaluator
* **File:** `08_pass_fail.c`
* **Description:** Evaluates marks against a threshold of $50$ to output either "Pass" or "Fail".


   cd YOUR_REPOSITORY_NAME
