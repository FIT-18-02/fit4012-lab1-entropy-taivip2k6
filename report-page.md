# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.
Hiểu cách tính entropy, redundancy và tìm nghịch đảo modulo bằng thuật toán Euclid mở rộng.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa |0  | 8 | Lặp hoàn toàn → dư thừa cao |
| abcd | 2  | 6 |  Ký tự khác nhau → entropy cao|
| hello world |  ~3.18| ~4.82 |  Mức độ ngẫu nhiên trung bình|

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | -1 |

## 4. Kết luận
Nêu ngắn gọn em học được gì từ bài lab, khó khăn lớn nhất là gì, và điều gì giúp em hiểu rõ hơn về entropy hoặc modulo inverse.
Bài lab giúp hiểu rõ entropy đo độ ngẫu nhiên của dữ liệu và redundancy phản ánh phần dư thừa. Ngoài ra, hiểu cách dùng thuật toán Euclid mở rộng để tìm nghịch đảo modulo khi gcd = 1. Khó khăn lớn nhất là hiểu công thức và áp dụng đúng vào code.
