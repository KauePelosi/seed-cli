# Seed

Seed is a flexible CLI tool that generates project structures from customizable templates, independent of programming language.

Instead of relying on rigid, framework-specific generators, Seed allows developers to define their own templates and create projects exactly the way they want.

## Features

- Generate project structures from templates
- Not tied to any specific programming language
- Simple and fast CLI interface
- Extensible architecture for future features
- Support for user-defined templates (planned)

## Motivation

Most project generators are tied to specific languages or frameworks and enforce predefined structures. Seed was created to provide a more flexible alternative, giving developers full control over how their projects are structured.

## Usage

```bash
seed <language> <project_name>

Example
seed cpp my_project
```

This will generate a project structure based on the selected language template.

### How It Works
Seed reads a `template.json` file for the chosen language and creates directories accordingly.

Example template:

```json
{
  "project_structure": [
    "src",
    "include",
    "tests"
  ]
}
```

This will generate:

```
my_project/
├── src/
├── include/
└── tests/
```

### Project Structure
```
.
├── src/
│   ├── core/
│   └── utils/
├── include/
├── templates/
├── bin/
├── build/
└── CMakeLists.txt
```

## Build

```bash
mkdir build
cd build
cmake ..
cmake --build .
```
The binary will be available in the `bin/` directory.

## Roadmap

- File generation support
- Template variables (e.g. project name injection)
- User-defined templates
- Multiple language support
- Git repository initialization
- Global installation support
- AUR package

## Contributing

Contributions are welcome. Feel free to open issues or submit pull requests.

## License

MIT License
