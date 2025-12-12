
```md
# 🔷 XOR Array — Problem Description

This repository contains the official problem statement and my solution for the **XOR Array** constructive algorithm task.

---

## 📝 Problem Brief

You are given three integers:

- **n** — size of the array  
- **l**, **r** — the required segment (1 ≤ l < r ≤ n)

You must construct an array **a** of length **n** consisting of **positive integers** (1 ≤ ai ≤ 1e9) such that:

### ✔ Required:
```

f(l, r) = a[l] ⊕ a[l+1] ⊕ ... ⊕ a[r] = 0

```

### ✔ Restriction:
For **every other subarray (x, y)** where **(x, y) ≠ (l, r)**:
```

f(x, y) ≠ 0

```

The XOR value must only be zero for the **specific** segment [l, r] and nowhere else.

📝 **It is guaranteed that a valid array always exists.**

---

## 📥 Input Format
```

t               # number of test cases
n l r           # for each test case

```

Constraints:
- 1 ≤ t ≤ 10⁴  
- 2 ≤ n ≤ 4 × 10⁵  
- 1 ≤ l < r ≤ n  
- Sum of all n across all test cases ≤ 5 × 10⁵  

---

## 📤 Output Format

For each test case, print:
```

a1 a2 ... an

```
A valid array satisfying all conditions.

---

## 🧠 Key Insight

Define:
```

f(x, y) = XOR of all elements from x to y

```

We must enforce:
- Only **one** subarray → XOR equals zero  
- All other subarrays → XOR is **non-zero**

To construct such an array:
- Create the special segment with XOR = 0  
- Fill the rest with distinct or safe values to avoid accidental zero XOR  
- A constructive solution always exists using bitwise properties

---

## 📌 Example

**Input**
```

4
3 1 3
4 1 3
8 2 4
4 3 4

```

**Output**
```

9 8 1
2 7 5 4
9 1 9 8 10 5 4 9
85484 130377 6031 6031

```

---

## 🛠️ My Solution

*(I will insert my implementation here.)*

---

## 📄 License
MIT License

---
```

---

