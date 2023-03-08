import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {}
    for row in reader:
        favorites = row["language"]
        if favorites in counts:
            counts[favorites] += 1
        else:
            counts[favorites] = 1

#def get_value(language):
#    return counts[language]
favorite = input("Favorite: ")
if favorite in counts:
#for favorites in sorted(counts, key=lambda language: counts[language], reverse=True):
    print(f"{favorites}: {counts[favorites]}")