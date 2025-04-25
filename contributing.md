# 📡 Contributing to the LoRa Repository

Welcome to the LoRa repository under our Microcontroller Enthusiasts Organization!  
This is a place where raw code and true understanding meet. We work close to the metal — no layers, no shortcuts.

## 🌱 Contribution Rules

We keep things simple, strict, and to the point:

### ✅ What’s Accepted

- **Any programming language is welcome.**  
  Whether it’s C, Assembly, Rust, Zig, or even FORTH — as long as it directly controls hardware, it belongs here.

- **Direct register access only.**  
  Your code should interact with hardware registers explicitly. No HALs. No libraries that wrap the hardware.  
  We embrace the datasheet and speak directly to the chip.

### 🚫 What’s Not Accepted

- **No abstraction layers.**  
  This repo is not for SDKs, frameworks, or drivers built on top of HALs or other middleware.

- **No copy-paste from other projects.**  
  All contributions must be written by you. Learn from others, but write your own code.  
  We value original, handcrafted work.

## 🛠️ How to Contribute

1. **Fork this repository.**
2. **Create a new branch**:  
   Use a descriptive name like `atmega328-lora-receive`.
3. **Create a new folder** inside `src/` with a clear name, e.g., `src/atmega328_register_send/`.
4. **Write your code.**  
   Focus on clarity, efficiency, and clean register-level control.
5. **Add a `README.md`** inside your folder:  
   - Mention the microcontroller you’re using.
   - List key registers accessed.
   - Briefly explain how your code works.
6. **Open a Pull Request.**  
   Keep your PR focused on a single contribution.

We’ll review your work carefully, offer feedback if needed, and celebrate each addition that speaks directly to the hardware.

## 💬 Need Help?

- **Open an issue** if you're unsure about register behavior or want feedback on an idea before coding.
- We welcome questions and collaborative thinking.

---

Craft your logic like a circuit — sharp, intentional, and elegant.  
This is a home for creators who talk directly to silicon.

**Welcome to the no-abstraction zone.**

– The Maintainers
