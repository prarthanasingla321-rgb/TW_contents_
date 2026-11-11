# LaTeX Documentation

## 1. Introduction to LaTeX

LaTeX is a document preparation system used to create professional documents, reports, assignments, research papers, and presentations.

**Advantages:**
- Professional document formatting.
- Excellent mathematical typesetting.
- Automatic numbering of sections and equations.
- Supports tables, images, and references.

## 2. Basic Structure of a LaTeX Document

```latex
\documentclass{article}

\begin{document}

Hello, World!

\end{document}
```

- `\documentclass{}` defines the document type.
- `\begin{document}` starts the document.
- `\end{document}` ends the document.

Common document classes: `article`, `report`, `book`, `letter`, and `beamer`.

## 3. Title and Author

```latex
\title{My First Document}
\author{Your Name}
\date{\today}

\begin{document}
\maketitle
\end{document}
```

`\maketitle` displays the title, author, and date.

## 4. Sections and Formatting

LaTeX provides commands to organize content:

```latex
\section{Introduction}
\subsection{Background}
\subsubsection{Details}
```

Common formatting commands:

| Command | Purpose |
|---|---|
| `\textbf{Text}` | Bold text |
| `\textit{Text}` | Italic text |
| `\underline{Text}` | Underlined text |
| `\emph{Text}` | Emphasized text |
| `\noindent` | Removes paragraph indentation |
| `\vspace{10mm}` | Adds vertical space |

Use `%` to write comments.

## 5. Lists in LaTeX

### Unordered List

```latex
\begin{itemize}
    \item First item
    \item Second item
\end{itemize}
```

### Ordered List

```latex
\begin{enumerate}
    \item First item
    \item Second item
\end{enumerate}
```

## 6. Mathematical Expressions

LaTeX supports inline and display mathematics.

- Inline: `\(x+y=10\)`
- Display: `\[x+y=10\]`

### Common Mathematical Commands

| Command | Purpose |
|---|---|
| `x^2` | Superscript |
| `x_1` | Subscript |
| `\frac{a}{b}` | Fraction |
| `\sqrt{x}` | Square root |
| `\sum` | Summation |
| `\int` | Integration |
| `\alpha`, `\beta` | Greek letters |
| `\leq`, `\neq` | Mathematical relations |

### Example

```latex
\[
\frac{a+b}{c} = x^2
\]
```

## 7. Equations

The `equation` environment creates numbered equations.

```latex
\begin{equation}
    E = mc^2
\end{equation}
```

## 8. Arrays and Matrices

The `array` environment creates aligned rows and columns.

```latex
\[
\begin{array}{lcr}
Left & Center & Right \\
a & b & c
\end{array}
\]
```

Matrices can be created using:

```latex
\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

Common matrix environments include `matrix`, `pmatrix`, `bmatrix`, and `vmatrix`.

## 9. Tables

The `tabular` environment creates tables.

```latex
\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Aman & 90 \\
Priya & 85 \\
\hline
\end{tabular}
```

- `c`: Centre alignment
- `l`: Left alignment
- `r`: Right alignment
- `&`: Separates columns
- `\\`: Ends a row
- `\hline`: Adds a horizontal line

## 10. Adding Images

Use the `graphicx` package to insert images.

```latex
\usepackage{graphicx}
```

Example:

```latex
\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{image.png}
    \caption{Sample Image}
\end{figure}
```

## 11. Cross-References and Bibliography

Cross-referencing helps refer to sections, figures, and equations.

```latex
\label{sec:intro}
\ref{sec:intro}
```

For citations and references:

```latex
\cite{reference}
```

The `thebibliography` environment can be used to add references manually.

## 12. Compilation

LaTeX source files use the `.tex` extension.

A common compilation command is:

```bash
pdflatex filename.tex
```

Online editors such as Overleaf can also compile LaTeX documents and generate PDFs.

## 13. Conclusion

LaTeX is a powerful document preparation system used for academic and technical writing. It provides structured formatting and excellent support for mathematical equations, lists, tables, matrices, images, and references.

## References

- TW Lecture 1: Introduction to LaTeX, Prof. Neeta Nain, MNIT Jaipur.
- TW Lecture 2: Mathematical Notations, Equations, Arrays, Matrices and Lists, Dr. Neeta Nain, MNIT Jaipur.
- https://www.overleaf.com/learn
- https://www.latex-project.org/