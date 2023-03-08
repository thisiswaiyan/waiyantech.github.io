# TODO

def main():
    sentence = input("Text: ")
    print(f"{sentence}")
    letters = count_letter(sentence)
    words = count_word(sentence)
    sentences = count_sentences(sentence)
    L = (float(letters) / float(words)) * 100
    S = (float(sentences) / float(words)) * 100
    index = round((0.0588 * L) - (0.296 * S) - 15.8)

    if index > 16:
        print("Grade 16+")
    elif index < 1:
        print("Before Grade 1")
    else:
        print(f"Grade {index}")


def count_letter(text):
    j = 0
    for i in range(len(text)):
        if text[i].islower() or text[i].isupper():
            j += 1
    return j


def count_word(text):
    j = 0
    for i in text:
        if i == " ":
            j += 1
    return j + 1


def count_sentences(text):
    j = 0
    for i in text:
        if i == "." or i == "!" or i == "?":
            j += 1
    return j


main()

