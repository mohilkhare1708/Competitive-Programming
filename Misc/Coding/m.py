fname = input("Enter file name: ")
fh = open(fname)
l=[]
for line in fh:
    words = list(line.split(" "))
    for word in words:
        if word[len(word)-1:] == '\n':
            word = word[:len(word)-1]
        if word not in l:
            l.append(word)
        
l.sort()
print(l)