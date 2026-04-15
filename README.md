[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/WTyCYlbL)
# FIT4012 – Lab 1. Entropy, độ dư thừa thông tin và nghịch đảo modulo


## Mục tiêu bài lab
Sau khi hoàn thành bài này, sinh viên có thể:
- Tính entropy của một chuỗi ký tự
- Tính redundancy (độ dư thừa thông tin)
- Cài đặt nghịch đảo modulo (modular inverse)
- Sử dụng GitHub để quản lý và nộp bài

---

## Cấu trúc repo
- `src/entropy_redundancy.cpp`: Q1, Q2
- `src/mod_inverse.cpp`: Q3
- `tests/test_cases.md`: test cases
- `logs/run_log.md`: log chạy chương trình
- `report-page.md`: báo cáo

---
## Nội dung chính

### 1. Entropy
Công thức:

H = -∑ p(x) log2 p(x)


### 2. Redundancy

R = 1 - (H / Hmax)


Trong đó:
- H: entropy thực tế
- Hmax = log2(n), với n là số ký tự khác nhau

---

### 3. Modular Inverse
Tìm x sao cho:

a × x ≡ 1 (mod m)


Điều kiện tồn tại:

gcd(a, m) = 1


Sử dụng thuật toán Euclid mở rộng

---

## Test cases
Xem tại:

tests/test_cases.md


Bao gồm:
- Entropy: aaaa, abcd, hello world
- Modulo inverse: (3,7), (10,17), (6,9)

---

## Cách chạy

### Compile

g++ -std=c++17 src/entropy_redundancy.cpp -o entropy
g++ -std=c++17 src/mod_inverse.cpp -o modinv


### Run

./entropy
./modinv


---

## Kết quả
- Entropy tính đúng
- Redundancy phản ánh mức độ lặp
- Modular inverse:
  - (3,7) → 5
  - (10,17) → 12
  - (6,9) → không tồn tại

---

## Báo cáo
Xem file:

report-page.md


---

## Kết luận
- Hiểu entropy và redundancy
- Biết tính modular inverse
- Làm quen quy trình làm việc với GitHub

