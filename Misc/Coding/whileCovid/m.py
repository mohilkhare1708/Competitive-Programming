def find_answer(bin_l):
    while True:
        len_set = set(map(lambda x: len(x), bin_l))
        if len(len_set) > 1:
            break

        if 0 in len_set or bin_l[0][0] == '0':
            return 0

        bin_l = list(map(lambda x: bin(int(x[1:], 2)), bin_l))

    max_len = max(map(lambda x: len(x), bin_l))
    big_set = set(map(lambda x: int(x, 2), filter(lambda x: len(x) == max_len, bin_l)))
    small_set = set(map(lambda x: int(x, 2), filter(lambda x: len(x) != max_len, bin_l)))

    return min([cur_big ^ cur_small for cur_big in big_set for cur_small in small_set])


input()  # don't care about n
l = list(map(int, input().split()))

bin_list = list(map(lambda x: bin(x)[2:], l))
print(bin_list)
print(find_answer(bin_list))