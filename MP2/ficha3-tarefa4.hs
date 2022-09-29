separa :: [a] -> ([a], [a])
separa x = splitAt (div (length x) 2) x

merge :: [a] -> [a] -> [a]
merge x y = x++y