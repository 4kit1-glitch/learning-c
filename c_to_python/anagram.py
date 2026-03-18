word1 = input("Enter word 1: ")
word2 = input("Enter word 2: ")

for char in word1:
    if len(word1) != len(word2):
        print("Not anagrams")
        break
    if char not in word2:
        print("Not anagrams")
        break
else:
    print("Anagrams")
