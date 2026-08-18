# tee

A lightweight and fast implementation of the classic **tee** command-line utility. It reads standard input (`stdin`) and writes it simultaneously to standard output (`stdout`) and specified files.

---

## 🚀 Features

* **Parallel Output:** Simultaneously streams input to `stdout` and specified files.
* **Simple & Fast:** Minimal memory and CPU overhead.
* **Cross-Platform:** Works on Linux, macOS, and Windows environments.

---

## 📦 Installation

### 1. Clone the repository
```bash
git clone [https://github.com/An0ther0ne/tee.git](https://github.com/An0ther0ne/tee.git)
cd tee
```

### 2. Build the project
```bash
# For C / C++ projects:
make

# For Rust projects:
cargo build --release
```

---

## 💻 Usage

Basic syntax:

```bash
<command> | ./tee [FILE...]
```

### Examples

* **Redirect output to a file while displaying it in the terminal:**
  ```bash
  echo "Hello World" | ./tee output.txt
  ```

* **Write to multiple files simultaneously:**
  ```bash
  ls -la | ./tee file1.txt file2.txt file3.txt
  ```

* **Capture and log live network traffic (including stderr):**
  ```bash
  tshark -l -i 1 -f "udp port 67" 2>&1 | tee tshark_log.txt
  ```

---

## 📄 License

Distributed under the [MIT](LICENSE) License.
