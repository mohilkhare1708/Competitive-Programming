s = ''
st = []
st.append(s)
for qq in range(int(input())):
    query = list(map(str, input().split()))
    query[0] = int(query[0])
    if query[0] == 1:
        st.append(st[-1]+query[1])
    elif query[0] == 2:
        st.append(st[-1][:len(st[-1]) - int(query[1])])
    elif query[0] == 3:
        print(st[-1][int(query[1])-1])
    else:
        st.pop()