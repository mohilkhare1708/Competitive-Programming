n = gets.chomp.to_i
(1..n).each do
    a,b,c = gets.chomp.split(" ").map(&:to_i)
    if a < c && b >= 2
        x = 1
    end
    if a >= c && b >= 1
        x = -1
    end
    if a < c && b == 1
        x = 1
    end
    # kari = a * b
    # if kari <= c
    #     y = -1
    # end
    amari = c % a
    kotae = c / a
    # if kari > c && amari == 0   
    #     y = kotae
    # elsif kari > c && amari != 0
    #     y = kotae + 1 
    # end
    if a >= c 
        y = b
    elsif a < c && amari == 0 && b > kotae
        y = kotae + 1
    elsif a < c && amari == 0 && b == kotae
        y = -1
    elsif a < c && amari != 0 && b > kotae
        y = kotae + 1
    elsif a < c && amari != 0 && b == kotae
        y = -1
    elsif a < c && amari == 0 && b < kotae
        y = -1
    elsif a < c && amari != 0 && b < kotae
        y = -1
    end

    print x
    print " "
    print y
    print "\n"
end