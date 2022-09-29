fib :: Int -> Int
fib x | x == 0 = 0
      | x == 1 = 1
      | x >= 2 = fib(x-1) + fib(x-2)
      |otherwise = error "Não existe!"