# tee

A lightweight and fast implementation of the classic **tee** command-line utility. It reads standard input (`stdin`) and writes it simultaneously to standard output (`stdout`) and one or more files.

---

## 🚀 Features

* **Parallel Output:** Simultaneously streams input to `stdout` and multiple specified files.
* **Flexible Modes:** Supports both file overwriting and append mode.
* **High Performance:** Optimized buffering for minimal resource usage.
* **Cross-Platform:** Runs seamlessly on Linux, macOS, and Windows.

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
<command> | ./tee [OPTIONS] [FILE...]
```

### Examples

* **Redirect output to a file while displaying it in the terminal:**
  ```bash
  echo "Hello World" | ./tee output.txt
  ```

* **Append output to an existing file (`-a` / `--append`):**
  ```bash
  echo "New log entry" | ./tee -a output.txt
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

## ⚙️ Options

| Flag | Long Option | Description |
| :--- | :--- | :--- |
| `-a` | `--append` | Append data to specified files instead of overwriting. |
| `-i` | `--ignore-interrupts` | Ignore interrupt signals (e.g., `SIGINT` / `Ctrl+C`). |
| `-h` | `--help` | Display help information and exit. |
| `-v` | `--version` | Display version information and exit. |

---

## 📄 License

Distributed under the [MIT](LICENSE) License.
