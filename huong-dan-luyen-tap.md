# Hướng dẫn luyện tập: Đọc code nhạy hơn + Viết feedback tiếng Anh

**Mục tiêu:** Chuẩn bị cho các job kiểu "AI Code Trainer" (như Alignerr) — luyện lại phản xạ đọc code, tìm bug, và viết feedback tiếng Anh ngắn gọn, rõ ràng. Base của bạn là C#, nên ưu tiên C#/C++ trước, Python/JS chỉ cần đọc hiểu.

---

## Vì sao cần luyện?

Dùng AI để code nhiều khiến "cơ bắp đọc code" bị teo — không phải vì bạn kém, mà vì não quen chờ AI giải thích thay vì tự phân tích. Tin tốt: phục hồi nhanh, chỉ cần 1–2 tuần luyện đều.

---

## Kế hoạch 2 tuần (20–30 phút/ngày)

### Tuần 1 — Tập đọc code + tìm bug

1. Dùng file `agent-bat-loi-code.md` (đi kèm) để nhờ AI sinh code có bug ẩn.
2. Đọc code, **không xem giải thích trước** — tự tìm bug.
3. Viết feedback bằng tiếng Anh (ngắn, đúng ý — xem mẫu bên dưới).
4. Nộp cho Agent để chấm, xem mình bỏ sót gì.
5. Làm 3–4 round/ngày.

### Tuần 2 — Tập viết code + LeetCode Easy

1. Làm 2–3 bài LeetCode Easy/ngày (array, string, hash map).
2. Sau khi viết xong, tự đọc lại code của mình, tự tìm bug nếu có.
3. Tiếp tục xen kẽ với round bắt bug từ Agent (giảm còn 2–3 round/ngày).

### Xoay vòng ngôn ngữ

| Ngày | Ngôn ngữ | Ưu tiên vì |
|------|----------|------------|
| T2, T5 | C# | Vùng mạnh của bạn — null reference, async/await, LINQ side-effect |
| T3, T6 | C/C++ | Bug thường ở pointer, buffer, memory — bạn quen nhờ nền C# |
| T4, CN | Python/JS | Chỉ cần đọc hiểu — type mismatch, mutable default, scoping |

---

## Cách viết feedback mẫu (không cần "đẹp", chỉ cần đúng ý)

**Code lỗi:**
```python
salary = row['salary']
departments[dept].append(salary)
...
result[dept] = sum(salaries) / len(salaries)
```

**Feedback đủ tốt:**
> Bug: `salary` is read as a string from CSV, so `sum()` will raise TypeError. Fix: cast with `float(row['salary'])`. Also, if a department has zero records, `len(salaries)` is 0 → ZeroDivisionError, need a guard.

Không cần "It should be noted that..." — viết thẳng: **Bug → Vì sao → Cách sửa**.

### Khung feedback nên theo

1. **Bug:** mô tả lỗi là gì
2. **Why it fails:** vì sao nó gây lỗi (edge case nào)
3. **Fix:** cách sửa ngắn gọn (code snippet nếu cần)

---

## Mẹo tự luyện không cần Agent

- Lấy 1 repo nhỏ (200–500 dòng) trên GitHub, đọc và tự hỏi: "function này làm gì? input/output gì? input rỗng thì sao?"
- Đừng chạy code ngay — tự đoán output trước, rồi mới chạy để đối chiếu.
- Xóa/đổi 1 dòng trong code chạy đúng → tự tìm ra chỗ mình vừa phá.

---

## Nguồn bổ trợ (không phải trọng tâm, nhưng có thể xen kẽ)

Đây là các nguồn học "viết code đúng" — khác với việc "đọc code tìm bug" là kỹ năng chính job này cần. Dùng để lót nền, không thay thế phần luyện với Agent.

| Nguồn | Nội dung | Nên dùng khi nào |
|---|---|---|
| [300baicode.com](https://300baicode.com/) | Bản Việt hóa Grind 75 — 300 bài LeetCode chia theo tuần, có tag Dễ/Vừa/Khó | Luyện thuật toán nền, chỉ cần làm phần "Dễ" ở Tuần 1–2, không cần hết 300 bài |
| [fx-studio/Python_300_kids](https://github.com/fx-studio/Python_300_kids) | Bài tập Python cơ bản | Chỉ nếu đọc cú pháp Python còn lạ, làm vài ngày cho quen |
| [codetoanbug.com — Golang 100 bài thiếu nhi](https://codetoanbug.com/golang-100-bai-code-thieu-nhi-1/) | Series học Go từ số 0 (môi trường, cú pháp cơ bản) | Chỉ nếu job yêu cầu Go và bạn chưa từng đụng tới, không ưu tiên vì JD không bắt buộc Go |

**Cách xen kẽ hợp lý:** dùng 300baicode.com (phần Dễ) như bài khởi động 15–20 phút đầu buổi luyện, sau đó chuyển sang round bắt bug với Agent — vì phần thi thật của Alignerr nghiêng về đọc/soi lỗi code hơn là giải thuật toán từ đầu.

---

## Sau 2 tuần, bạn nên thấy

- Đọc code Python/JS/C++ "mượt" hơn, không còn bị "mù" khi thiếu AI giải thích.
- Viết feedback tiếng Anh thành phản xạ (không cần nghĩ lâu).
- Đủ tự tin làm bài test thật của Alignerr (mức độ tương đương dev junior–mid, không phải LeetCode Hard).

Apply sau 1–2 tuần luyện, không cần chờ "hoàn hảo" — bài test thật thường dễ hơn bài tự luyện.
