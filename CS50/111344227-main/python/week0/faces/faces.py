def main():
    s = input("")
    s = convert(s)
    print(s)


def convert(r):
    r = r.replace(":)", "🙂")
    r = r.replace(":(", "🙁")
    return r


main()