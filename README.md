# Bayesian Calculator
An application to calculate the likelihood of a hypothesis given the associated evidence using Bayes' Theorem.

## Overview
Bayes' Theorem states that the "chance evidence is real (supports a hypothesis) is the chance of a true positive among all positives (true or false)."[^1] This theorem can be written as follows:

$$
P(A \mid B) = \frac{P(B \mid A)\, P(A)}{P(B)}
$$

where the evidence term can be expanded using the law of total probability:

$$
P(B) = \sum_{i} P(B \mid A_i)\, P(A_i)
$$

so the general form for a set of mutually exclusive, exhaustive hypotheses $\{A_i\}$ is:

$$
P(A_j \mid B) = \frac{P(B \mid A_j)\, P(A_j)}{\sum_{i} P(B \mid A_i)\, P(A_i)}
$$

**Terms:**

- $P(A \mid B)$ is the *posterior*: the probability of $A$ given $B$
- $P(B \mid A)$ is the *likelihood*: the probability of $B$ given $A$
- $P(A)$ is the *prior*: the initial probability of $A$
- $P(B)$ is the *evidence* (or marginal likelihood) [^2]

This project implements a Bayesian Calculator in C++.

## Technical Notes
*Note: documentation assumes you are using a unix-like operating system*

Before building, testing, or running this project, please install all [dependencies](#dependencies)

### Local Building and Running
**Cmake**
To build and run this project using CMake execute the following commands in the root of the project:
```
cmake -S ./src -B build
cd build/
make
./calculator
```

**Docker**
To build and run this project using Docker execute the following commands in the root of the project:
```
docker build -t calculator .
docker run -t calculator:latest
```

### Dependencies
> `cmake == 3.16`

> `docker == 29.7.2`

> `gcc == 16.2.1`

> `GNU Make == 4.4.1`

### Dev Log
> *0.0.1* - Initialize project and update README.

## Footnotes
> [^1]: “An Intuitive (and Short) Explanation of Bayes’ Theorem – BetterExplained,” Betterexplained.com, 2019. https://betterexplained.com/articles/an-intuitive-and-short-explanation-of-bayes-theorem/ (accessed Oct. 04, 2026).

> [^2]: Anthropic, "Claude Sonnet 5.5," large language model, response to prompt "Give me a latex section compatible with markdown that displays Bayes' Theorem," claude.ai, Oct. 4, 2026. [Online]. Available: https://claude.ai