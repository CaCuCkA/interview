
def helper(substr: str) -> str:
    ones = 0
    s = ""

    for i in substr:
        if i == "1":
            ones += 1
    
    for i in range(max(0, len(substr) - ones - 1)):
        s += "1"
    
    if len(substr):
        s += "0"

    for i in range(ones):
        s += "1"

    return s


def solution(binary_string: str) -> str:
    i = 0
    s = ""

    while i < len(binary_string) and binary_string[i] == "1":
        i += 1
        s += "1"

    return s + helper(binary_string[i:])


def main():
    binary_string = str(input("Input your binary string: "))
    print(solution(binary_string))


if __name__ == "__main__":
    main()