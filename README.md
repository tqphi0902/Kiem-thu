# Kiem thu do phu c2
1.	Bài toán
Cho dãy n số a1,a2,…,an. Hãy tính tổng các số nguyên tố trong dãy với n < 1000, 1<ai<1e9
2.	Phân tích:
-	Yêu cầu: Chúng ta cần phát triển một chương trình để tính tổng của tất cả các số nguyên tố trong một dãy số cho trước.
-	Đặc điểm của số nguyên tố: Một số nguyên tố là một số tự nhiên lớn hơn 1 và chỉ có hai ước số là 1 và chính nó.
-	Yêu cầu đầu vào: Số lượng phần tử của dãy số n và dãy số a1, a2, ..., an.
-	Yêu cầu đầu ra: Tổng của tất cả các số nguyên tố trong dãy số cho trước.
3.	Thiết kế:
    - a, Mã nguồn
- Viết một hàm is_prime(n) để kiểm tra xem một số có phải là số nguyên tố hay không.
- Viết một hàm sum_of_primes(numbers) để tính tổng của tất cả các số nguyên tố trong dãy số numbers.
    - b, Test case
-	Thiết kế các ca kiểm thử để đảm bảo rằng hàm sum_of_primes() hoạt động đúng đắn trong mọi tình huống.
-	Các ca kiểm thử sẽ bao gồm các trường hợp cho dãy số không có số nguyên tố, dãy số chỉ chứa số nguyên tố và dãy số có cả số nguyên tố và không phải số nguyên tố.
-	Đảm bảo kiểm tra cả trường hợp đầu vào không hợp lệ (số lượng phần tử dãy số nằm ngoài phạm vi cho phép).
