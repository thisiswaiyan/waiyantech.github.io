def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    i = ""
    if len(s) >= 7 or len(s) < 2:
        return False
    for c in range(len(s)):
        if s[c].isnumeric():
            for j in s[c:]:
                i += j
                if i[0] == "0":
                    return False
        elif s[c] in [".",","," "]:
            return False
    for j in range(len(i)):
        if i[j].isalpha():
            return False
    return True


main()