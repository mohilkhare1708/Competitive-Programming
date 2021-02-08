def solution(x, y):
    oneLess = []
    main = []
    if len(x) > len(y):
        oneLess = y
        main = x
    else:
        oneLess = x
        main = y
    oneLess.sort()
    main.sort()
    for i in range(len(oneLess)):
        if main[i] != oneLess[i]:
            return main[i]
    return main[len(main)-1]
    
#print(solution([13, 5, 6, 2, 5], [5, 2, 5, 13]))
    