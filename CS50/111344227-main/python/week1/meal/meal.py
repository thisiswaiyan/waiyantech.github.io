def main():
    s = input("What time is it now? ")
    time = convert(s)
    if time >= 7 and time <= 8:
        print("breakfast time")
    elif time >= 12 and time <= 13:
        print("lunch time")
    elif time >= 18 and time <= 19:
        print("dinner time")


def convert(time):
    x, y = time.split(':')
    x = int(x)
    y = float(y)
    return x + y / 60


if __name__ == "__main__":
    main()