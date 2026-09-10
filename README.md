# Computer Science Curriculum

A structured, self-directed Computer Science education built around textbooks, following the breadth and depth of rigorous undergraduate and graduate-level curricula from leading universities.

## About

This repository contains the materials, notes, exercises, implementations, and projects developed throughout a comprehensive self-directed education in Computer Science.

The curriculum is organized around books rather than individual online courses. Each book represents a course or a substantial component of the curriculum and has its own directory, identified by a unique course code.

The goal is to build a coherent body of knowledge across the fundamental areas of Computer Science, progressing from mathematical and theoretical foundations to systems, algorithms, programming languages, software engineering, and advanced topics.

## Curriculum

The complete structure of the education is maintained in the `curriculum/` directory.

- `curriculum/catalogo-cursos-cs-es.pdf` — complete curriculum, course sequence, and overall organization
- `<COURSE_CODE>/` — individual course based on a textbook
- `<COURSE_CODE>/meta.md` — metadata, overview, objectives, reading progress, and useful links
- `<COURSE_CODE>/` — exercises, implementations, notes, and other study material

## Structure

```text
.
├── curriculum/
│   └── meta.md
│
├── <COURSE_CODE>/
│   ├── meta.md
│   ├── notes/
│   ├── exercises/
│   ├── projects/
│   └── ...
│
├── <COURSE_CODE>/
│   ├── meta.md
│   ├── notes/
│   ├── exercises/
│   └── ...
│
└── README.md
```

The exact internal structure of each course directory may vary according to the nature of the material.

## Course Organization

Each course is centered around a primary textbook.

The `meta.md` file inside each course directory serves as the course index and contains:

- Book and author information
- Subject and scope
- Learning objectives
- Reading progress
- Relevant notes
- Useful external resources

Study artifacts are kept separately from `meta.md` so that the metadata remains concise and easy to inspect.

## Progress

Reading progress is tracked directly in each course's `meta.md` using Markdown checkboxes.

For example:

```markdown
- [ ] Chapter 1 — Introduction
- [x] Chapter 2 — Fundamentals
- [ ] Chapter 3 — Advanced Topics
```

A checked item indicates that the corresponding material has been completed.

Completion of a chapter does not necessarily imply mastery. The curriculum is intended to involve reading, problem solving, implementation, experimentation, and review.

## Philosophy

This curriculum is based on several principles:

- Fundamentals before specialization.
- Understanding before memorization.
- Mathematical rigor where appropriate.
- Programming as a means of understanding computational concepts.
- Theory and practice should reinforce each other.
- Exercises are part of the learning process, not optional supplements.
- Books are treated as primary sources of structured knowledge.
- External resources are used when they improve understanding, not merely to increase the amount of material.
- Depth is preferred over superficial coverage.

The purpose is not simply to collect completed books. The purpose is to develop a coherent understanding of Computer Science and the ability to apply that knowledge independently.

## Sources

The curriculum draws inspiration from established Computer Science programs and their course structures, particularly programs from leading universities.

Books are selected according to the role they play in the curriculum rather than solely according to popularity or convenience.

The curriculum may therefore combine textbooks from different institutions and authors when doing so provides a stronger overall education.

## Private Material

Directories beginning with `_` are considered private and are intentionally excluded from version control.

```text
_private/
_notes/
_drafts/
```

This allows personal or unpublished material to coexist with the public portion of the repository without being committed to Git.

## Repository Conventions

- Each course has a unique course code.
- Each course directory contains a `meta.md`.
- `meta.md` contains course metadata and reading progress.
- Course-specific material stays inside its corresponding course directory.
- Directories beginning with `_` are private.
- Generated files and build artifacts are excluded from version control.
- External resources are recorded in the `Links` section of the corresponding `meta.md`.

## Status

This curriculum is a long-term project and is expected to evolve over time.

Courses may be added, removed, reordered, or replaced as the overall structure is refined.

The current curriculum and its organization can always be found in:

`curriculum/catalogo-cursos-cs-es.pdf`
