fibonacci :: Int -> Int 
fibonacci 0 = 0
fibonacci 1 = 1
fibonacci x = fibonacci(x-1) + fibonacci(x-2)

expoente :: Int -> Int -> Int 
expoente x y = (x*x)