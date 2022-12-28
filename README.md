# Interview 

The company is developing a smart home system. The candidate is applying for the position of `Junior C++ Developer`.

## Problem

You are given a binary string `binary` consisting of only `0`'s or `1`'s. You can apply each of the following operations any number of times:

* Operation 1: If the number contains the string `"00"`, you can replace it with `"10"`<br>
For example, `"00011"`&rArr;`"10011"`

* Operation 2: If the number contains the substring `"10"`, you can replace it with `"01"`. <br>
For example, `"00010"`&rArr;`"00001"`

Return the ***maximum binary string*** you can obtain after any number of operations. Binary string `x` is greater than binary string `y` if `x`'s decimal representation is greater than `y`'s decimal representation.

**Example 1**

> **Input:** binary = `"000110"` <br>
**Output:** `"111011"`<br>
**Explanation:** A valid transformation sequence can be:<br>
`"000110"` &rArr; `"000101"` <br>
`"000101"` &rArr; `"100101"` <br>
`"100101"` &rArr; `"110101"` <br>
`"110101"` &rArr; `"110011"` <br>
`"110011"` &rArr; `"111011"`
>

**Example 2**
>**Input:** binary = `"01"`<br>
**Output:** `"01"`<br>
**Explanation:** `"01"` cannot be transformed any further.<br>

**Purpose of the task**<br>
>* Testing the participant for the ability to solve problems in stressful conditions. 
>
> * Testing the participant for the ability to solve problems in stressful conditions. Ability to solve greedy problems
>

## Solution 

We should understand that in this problem we should work only with zeroes. We have two operations: 
* `"00"` &rArr; `"10"`
* `"10"` &rArr; `"01"`

With this operations we should shift our `0`'s to left and `1`'s to right. Only edge case is that we should not touch the leftmost `1`'s if present because shifting leftmost `1`'s to right is not leading to optimal answer. for e.g. "`100110011"` is converted to `"100001111"` so that our answer becomes: <br>
`"100001111"` &rArr;  "`111101111"`

### Plan
* Move all left `1`'s to a new line
* Count all ones
* Move all zeros from right to left in substring
* Transform (n - 1) `0`'s &rArr; `1`'s
* Add tail string`s tail


### Pseudocode
```
func helper (string substr):
    ones = 0
    for element from 0 to substr.size:
        if element = 1: 
            ones = ones + 1
    
    string res

    for i from 0 to substr.size - ones - 1:
        res += 1

    if substr.size > 0:
        res = res + 0

    for i from 0 to ones:
        res = res + 1
    
    return res


func solution(string s):
    i = 0
    string res
    while element != 0:
        i = i + 1
        res  = res + "1"
    
    return res + helper(s_substring);
    
```
### Algorithm on `Python` and `C++`
<br>

***Python***

Open a terminal in this directory and paste the code below:

```
$ python3 solution.py
```


***C++*** <br>
Open a terminal in this derictory and execute object file

```
$ ./solution
```

>**Attention!**<br>
You can see code on Python or on C++ if you open `solution.py` or `solution.cpp` in Notebook or in any IDE


## Conclusion 