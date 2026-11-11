# Doxygen Documentation

## 1. Introduction

Doxygen is an open-source documentation generator for programming languages such as C, C++, Python and Java. It extracts information from specially formatted comments in source code and generates reference manuals in formats such as HTML, LaTeX and PDF. It is widely used for documenting libraries and APIs.

## 2. Why Technical Documentation?

Technical documentation:
- Clarifies requirements and specifications.
- Supports software maintenance and onboarding.
- Helps with compliance, auditing and quality control.
- Encourages knowledge sharing and collaboration.

## 3. Key Features of Doxygen

- Parses source code and extracts function, class and module documentation from comments.
- Generates cross-referenced code, call graphs and inheritance diagrams.
- Supports Markdown, LaTeX formulas, diagrams (Graphviz) and code examples.
- Can be integrated into CI/CD workflows.

## 4. Installation

**Windows:** Download the installer from https://www.doxygen.nl/download.html

**macOS:**
```bash
brew install doxygen
```

**Linux (Debian/Ubuntu):**
```bash
sudo apt-get install doxygen
```

Verify the installation:
```bash
doxygen --version
```

## 5. Basic Doxygen Workflow

1. Write specially formatted comments in the source code.
2. Create or edit a configuration file:
   ```bash
   doxygen -g Doxyfile
   ```
3. Run Doxygen using the configuration file:
   ```bash
   doxygen Doxyfile
   ```
4. Browse the generated output. HTML documentation is available at `html/index.html`; LaTeX/PDF output can also be generated.

## 6. Doxygen Comment Syntax (C/C++/Java)

```cpp
/**
 * \\brief Brief description of the function.
 *
 * Longer detailed explanation.
 * \\param x A parameter description.
 * \\return Description of the return value.
 */
int myFunction(int x);
```

- `\\brief` gives a short description.
- `\\param` describes a function parameter.
- `\\return` describes the returned value.

## 7. Doxygen for Python

The lecture material also demonstrates Python documentation using a docstring:

```python
def foo(bar):
    '''
    Brief description.
    More details here.

    :param bar: Bar parameter
    :type bar: int
    :return: Computed value
    :rtype: int
    '''
    return bar + 1
```

## 8. Common Doxygen Tags

| Tag | Purpose |
|---|---|
| `\\brief` | Short summary of a function, class or module |
| `\\param` | Description of a parameter |
| `\\return` | Description of the return value |
| `\\author` | Author information |
| `\\version` | Version information |
| `\\see` | Reference to related items |
| `\\note` | Additional note |

## 9. Documenting Classes

```cpp
/**
 * \\class Car
 * \\brief Represents a car object.
 *
 * Details about the class.
 */
class Car {
public:
    /**
     * \\brief Start the engine.
     * \\return True if successful.
     */
    bool startEngine();
};
```

Doxygen comments can document both a class and its member functions.

## 10. Grouping and Diagrams

The lecture introduces these capabilities:
- Use `\\defgroup` and `\\ingroup` for logical grouping.
- Create call graphs and include diagrams by setting `HAVE_DOT = YES` in the `Doxyfile`.
- Embed diagrams using `@dot` or PlantUML directives.
- Add Markdown or HTML tables and images to enrich documentation.

## 11. Output Formats

Doxygen can generate:
- **HTML** – the default format and suitable for browsing.
- **LaTeX/PDF** – suitable for printable manuals.
- **RTF**
- **XML**
- **DocBook**
- **man pages**

The lecture shows these configuration settings:

```ini
GENERATE_HTML = YES
GENERATE_LATEX = YES
GENERATE_RTF = NO
GENERATE_XML = NO
```

## 12. Best Practices

- Explain the purpose and contract of functions, not only their parameters.
- Keep brief and detailed descriptions distinct.
- Document all public APIs and modules.
- Use a consistent set of tags and layout.
- Generate documentation as part of continuous integration.

## 13. Doxygen with Version Control

- Store the `Doxyfile` in the source repository.
- Update documentation during code reviews.
- Publish generated documentation to GitHub Pages or an internal wiki.

## 14. Mini-Project: Generate Doxygen Documentation

The lecture suggests this practical exercise:

1. Download and install Doxygen.
2. Add Doxygen comments to a small C++ or Python codebase.
3. Generate HTML output.
4. Open `html/index.html`.
5. Explore the generated diagrams and cross-references.

Commands used:
```bash
doxygen --version
doxygen -g Doxyfile
doxygen Doxyfile
```

## 15. Summary

Doxygen automates code documentation using specially formatted comments. It can document functions, classes and modules, generate reference manuals in multiple formats, and create diagrams and cross-references. Keeping the configuration file with the source code and updating documentation alongside code changes helps maintain useful project documentation.

## 16. Reference

- Doxygen Manual: https://www.doxygen.nl/manual/

---

*Prepared from the Technical Writing Lab lecture material: “Introduction to Documentation Tools: Doxygen & Google Docs”, Dr. Neeta Nain, MNIT Jaipur, 11 September 2025. This page covers the Doxygen portion of the lecture.*
