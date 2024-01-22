# C++

## Requirement

```bash
brew install gcc
```

```bash
brew install llvm
```

## build

```bash
make build
```

## clangd

Macにデフォルトで搭載されているclangdは古いのでbrewで入れたllvmに付属するclangdを利用

```json
{
    "clangd": {
        "command": "/opt/homebrew/opt/llvm/bin/clangd",
        "rootPatterns": [".git/", "compile_flags.txt", "compile_commands.json"],
        "filetypes": ["c", "cpp", "objc", "objcpp"]
    }
}
```
