# PyralBot

A simple PyralOs Discord bot built with [D++](https://github.com/brainboxdotcc/DPP). It can show up current information about PyralOs

## Requirements

- CMake 3.15+
- A C++17 compiler
- [D++](https://github.com/brainboxdotcc/DPP) library installed (with CMake config package support)
- pthread

## Build

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## Run

Set your bot token as an environment variable before running:

```bash
export BOT_TOKEN=your_discord_bot_token
./bot
```

