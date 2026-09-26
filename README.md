# 🐛 bug-hunter-practice

Luyện đọc code, bắt bug, viết feedback tiếng Anh — chuẩn bị cho các job kiểu AI Code Trainer (Alignerr) và luyện lại phản xạ đọc code sau thời gian dùng AI nhiều. Sau mỗi buổi, học sâu thêm và bổ sung vào kho kiến thức [VzTong/Learn](https://github.com/VzTong/Learn).

## Cấu trúc

```
bug-hunter-practice/
├── README.md                       ← file này
├── huong-dan-luyen-tap.md          ← kế hoạch luyện 2 tuần, mẫu feedback, nguồn bổ trợ
├── agent-prompt.md                 ← Agent 1: "Bắt Lỗi Code Dạo" — sinh code có bug, chấm feedback
├── agent-hoc-bo-sung-tai-lieu.md   ← Agent 2: "Trợ Giảng Bổ Sung Kho Học" — đào sâu concept + soạn note cho repo Learn
└── rounds/
    ├── _template/
    │   └── feedback.md              ← khung feedback trống, copy ra mỗi round mới
    ├── round-01-csharp/
    │   ├── snippet.cs
    │   └── feedback.md
    ├── round-02-cpp/
    │   ├── snippet.cpp
    │   └── feedback.md
    └── ...
```

## Quy trình hàng ngày

1. **Mở `agent-prompt.md`** → paste vào chat mới (Claude/ChatGPT/Gemini) → Agent sinh code có bug ẩn.
2. **Copy code vào `rounds/round-XX-<ngôn ngữ>/snippet.<ext>`** trong VS Code, chạy thử nếu cần.
3. **Copy `rounds/_template/feedback.md`** vào `rounds/round-XX-<ngôn ngữ>/feedback.md`, điền phần "My feedback" (Bug → Why it fails → Fix) bằng tiếng Anh.
4. **Nộp feedback cho Agent** để chấm — Agent sẽ tự xuất lại 1 block markdown gồm phần chấm, bạn paste đè vào nửa dưới file `feedback.md` đó.
5. Làm 3–5 round/buổi (~20–30 phút).
6. **Cuối buổi, mở `agent-hoc-bo-sung-tai-lieu.md`** → paste vào chat mới → kể lại bug/concept vừa gặp để đào sâu và soạn note.
7. Copy note Agent soạn vào đúng thư mục trong repo [VzTong/Learn](https://github.com/VzTong/Learn) (`Markdown/Architecture/`, `Markdown/Database/`, v.v.), commit.

Chi tiết kế hoạch 2 tuần, khung viết feedback mẫu, và các nguồn luyện bổ trợ → xem `huong-dan-luyen-tap.md`.
