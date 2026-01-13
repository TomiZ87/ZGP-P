# Contributing to past-exams

Thank you for your interest in contributing! This page is more of a help to the current maintainer(s) (@TomiZ87) to follow certain conventions, but could help if the group of maintainers was to expand.

**_Only @TomiZ87 and people permitted by @TomiZ87 can modify/delete/add new scripts/automatizatoins/new features or work on the main branch. All changes and PRs are reviewed by @TomiZ87._**

Please, follow the set conventions & rules to ensure clear **traceability**.

## Reporting Issues & Questions

- Use [GitHub Issues](../../issues) to report mistakes or request new content.
- Include as much detail as possible: what prototype, docs...
- For any questions, open an issue or reach out to the @TomiZ87.

## How to Contribute (in a Nutshell)

**I want to make contributing as easy as possible**. You can follow this checklist:
1. **Create an issue** with proper title and if needed, the description.
2. **Create a new branch** for your changes from the issue
3. **Clone the repository** and checkout to your branch.
4. **Commit your changes**, with proper commit message.
6. **Open a pull request** with a clear title, description & labels.
7. **Wait for the actions to run** to ensure nothing is broken.
8. **Wait for an approval & merge**, @TomiZ87 will assist you prior to merging to main branch.


## Issues - Conventions
Before starting a new issue, check whether there isn't an opened issue with similar aim/feature/problem - if unsure, contact @TomiZ87.
1. Use a Clear and Short Descriptive Title in the present tense
2. Provide Relevant Details in the Body
    - If your issue is about a specific file, include a direct link to it.
    - If you have a proposed solution, mention it.
    - If relevant issues exist, mention them
    - If reporting a bug, describe how to reproduce it if possible.
    - If requesting a feature, explain the use-case or motivation.
3. Use Labels to Categorize Your Issue
    - This helps maintainers triage and prioritize issues.
4. Assign and Mention Collaborators (Optional)
    - If you want a specific person to look at the issue, mention them.
    - Assign the issue if you have the necessary permissions.

## Branches - Conventions
1. Create a new branch from the issue
2. A branch shall start wit the pre-generated number
3. Keep the name of the branch close/identical to the name of the issue

### General Tips
- **Lowercase only:** Use lowercase letters for all branch names.
- **No spaces:** Use hyphens (`-`) instead of spaces.
- **Be descriptive:** The branch name should make it clear what the branch is for.
- **Keep it short:** Try to keep branch names concise, but not at the expense of clarity - they should be close to identical to the title of the issue.

**Example**
- `2-rebirth-zgp-p`

## Commit Messages - Conventions

- Keep commit messages concise but descriptive.
- Reference related issues at the end of the message (e.g., `(#44)` )
- If multiple authors were present, do not forget to Co-Author them
- Use [Conventional Commits](https://www.conventionalcommits.org/) format:
  - `docs:` for documentation/changes in readme-s
  - `feat:` for new functionalities
  - `fix:` for bug fixes
  - ...
- If needed, you can add a commit message description

**Notes**

It is possible to change the commit message after committing. Read more on [how here](https://docs.github.com/en/pull-requests/committing-changes-to-your-project/creating-and-editing-commits/changing-a-commit-message).

Read more about Co-Authoring [here](https://docs.github.com/en/pull-requests/committing-changes-to-your-project/creating-and-editing-commits/creating-a-commit-with-multiple-authors).


## Pull Requests (PRs) - Conventions

### Creating Pull Requests

1. Create a PR with appropriate name, ideally close or identical to that of the issue. A number of the issue can be mentioned in brackets.
    - E.g.: " Rebirth ZGP-P (#2)"
2. Choose the correct branch to the PR
3. Write a short description of what has been added (+ mention which issues will be closed and which other are related...)
4. Choose an appropriate label, assign yourself to Assigners
5. Request a review from one of these active maintainers

If PR passes through by a reviewer - you have nothing left to do, the reviewer oversees the rest

If changes are needed - commit them and resolve/add comments, request review again

### Reviewing Pull Requests 

- The reviewer should review and leave descriptive feedback if needed (changes can still be recommended).
- If the reviewer finds the issue as done (the code and documentation needs no further changes):
  - The reviewer should write a comment approving the PR (for example `LGTM`) and approve the PULL request.
  - The reviewer merges the branch and deletes the merged branch.
- If the reviewer finds the issue needs improvement:
  - The reviewer should comment what specifically should be improved and if needed, get in contact with the person responsible.

- **Merge conflict:** The reviewer should contact the developer who was responsible for the conflicting part of the PR, and resolve it together.

---

Note: This CONTRIBUTING.md file was adapted from [skipgu/past-exams](https://github.com/skipgu/past-exams) written also by @TomiZ87.

Thank you for helping make this project better! Good luck!

\- @TomiZ87