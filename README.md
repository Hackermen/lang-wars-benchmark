# Lang Wars Benchmark
*It's just a game, you don't have to be mad :^)*

## Round 1 (The Heart Strings)
Merge the two specified strings alternately, appending the current iteration counter to both strings.
```python
s1 = "ABCDEFH"
s2 = "123456789"
```
Result from first loop (0): `"A1B2C3D4E5F6H70890"`

* Loops: 10'000'000
* Print out **only the first** loop result (to see if logic is correct)
* Allocate `result` in a variable for all loops (can be released after that loop)
* Must work if either `s1` or `s2` has more characters.
* Assume strings would be randomized, so you can't cache the first result and just append the counters, this is a benchmark test.

### Contributing
Send a pull request.
