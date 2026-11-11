# Git and GitHub

## 1. Introduction to Version Control

Version Control is a system that tracks changes made to files over time. It helps developers maintain project history, restore previous versions, and collaborate efficiently.

### Types of Version Control Systems
1. Local Version Control System
2. Centralized Version Control System (CVCS)
3. Distributed Version Control System (DVCS)

## 2. What is Git?

Git is a free, open-source Distributed Version Control System used to track changes in files and manage projects.

**Features:**
- Tracks file changes.
- Maintains project history.
- Supports branching and merging.
- Allows offline work.
- Helps developers collaborate.

## 3. What is GitHub?

GitHub is a cloud-based platform used to host Git repositories and collaborate on projects.

### Git vs GitHub

| Git | GitHub |
|---|---|
| Version control system | Repository hosting platform |
| Works locally | Supports online collaboration |
| Tracks changes | Hosts and shares projects |

## 4. Installing and Configuring Git

Check Git installation:

```bash
git --version
```

Configure username and email:

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
git config --list
```

## 5. Creating a Repository

```bash
mkdir my-project
cd my-project
git init
```

`git init` initializes a new Git repository.

## 6. Basic Git Commands

| Command | Purpose |
|---|---|
| `git status` | Check repository status |
| `git add filename` | Stage a file |
| `git add .` | Stage all changes |
| `git commit -m "message"` | Save changes |
| `git log` | View commit history |
| `git log --oneline` | View short commit history |
| `git diff` | View unstaged changes |
| `git diff --staged` | View staged changes |
| `git ls-files` | List tracked files |
| `git mv old new` | Rename a file |
| `git rm filename` | Remove a file |
| `git restore --staged filename` | Unstage a file |
| `git revert commit-hash` | Reverse a commit |

## 7. GitHub and Remote Repository

Connect a local repository to GitHub:

```bash
git remote add origin repository-url
git branch -M main
git push -u origin main
```

Important remote commands:

```bash
git remote -v
git clone repository-url
git fetch
git pull
git push
```

## 8. Branching and Merging

A branch is an independent line of development used to work on features without directly modifying the main branch.

```bash
git branch
git switch -c feature
git switch main
git merge feature
git branch -d feature
```

## 9. Merge Conflicts

A merge conflict occurs when Git cannot automatically combine changes from different branches.

**Steps to resolve:**
1. Identify the conflicting file.
2. Open and edit the file.
3. Resolve the conflicting changes.
4. Stage the corrected file.
5. Complete the merge if required.

```bash
git add filename
git commit
```

## 10. Pull Requests and Forking

- **Pull Request:** A request to merge changes from one branch into another on GitHub.
- **Fork:** A personal copy of another user's repository on GitHub.
- **Clone:** Downloads a repository to the local computer.

## 11. Tags and Releases

Tags mark specific points in repository history, commonly for software releases.

```bash
git tag v1.0
git tag -a v1.0 -m "Version 1.0"
git show v1.0
git push origin v1.0
```

## 12. GitHub Issues and Projects

- **Issues:** Used to report bugs, suggest features, and track tasks.
- **Projects:** Used to organize tasks and monitor project progress.

## 13. Conclusion

Git helps developers track and manage code changes, while GitHub provides a platform for hosting repositories and collaborating with others. Both tools make software development organized and efficient.

## References

- TW Lecture: Version Control Tools – Git and GitHub, MNIT Jaipur, October 12, 2026.
- https://git-scm.com/doc
- https://docs.github.com/