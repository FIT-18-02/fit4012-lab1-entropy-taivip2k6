# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Mục tiêu của bài lab là hiểu và cài đặt cách tính entropy của chuỗi, từ đó suy ra redundancy, đồng thời thực hành thuật toán tìm nghịch đảo modulo (modular inverse).

## 2. Cách làm
Đọc và phân tích chương trình mẫu tính entropy.
Cài đặt thêm hàm tính redundancy dựa trên entropy.
Hoàn thiện hàm mod_inverse() bằng thuật toán Euclid mở rộng.
Kiểm thử chương trình với nhiều bộ dữ liệu khác nhau.
## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input       | Entropy | Redundancy | Nhận xét                                    |
| ----------- | ------: | ---------: | ------------------------------------------- |
| aaaa        |   0.000 |      1.000 | Chuỗi lặp hoàn toàn, không có thông tin mới |
| abcd        |   2.000 |      0.000 | Phân bố đều, entropy tối đa                 |
| hello world |   2.846 |      0.051 | Phân bố không đều, gần đạt entropy tối đa   |
|

### 3.2 Modulo inverse
|  a |  m | Kết quả mong đợi | Kết quả chương trình |
| -: | -: | ---------------- | -------------------- |
|  3 |  7 | 5                | 5                    |
| 10 | 17 | 12               | 12                   |
|  6 |  9 | Không tồn tại    | Không tồn tại        |


## 4. Kết luận
Qua bài lab, em hiểu rõ hơn về cách entropy đo lường mức độ thông tin của dữ liệu và cách redundancy phản ánh sự dư thừa. Ngoài ra, em cũng nắm được cách tìm nghịch đảo modulo bằng thuật toán Euclid mở rộng. Khó khăn lớn nhất là xử lý công thức entropy và hiểu ý nghĩa của các giá trị xác suất, nhưng việc chạy nhiều test case đã giúp em hiểu rõ hơn bản chất của các khái niệm này.
