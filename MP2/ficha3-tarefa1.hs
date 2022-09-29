paresord :: [(Int,Int)] -> [(Int, Int)]
paresord = filter (\(x,y) -> (x<y))
--paresord [] = []
--paresord ((x1,x2):xs) | x1 < x2 = (x1,x2) : paresord (xs)
--                   | otherwise = paresord (xs)

myconcat :: [String] -> String
myconcat [] = ""
myconcat (x:xs) = x ++ myconcat (xs)

maximos :: [(Float, Float)] -> [Float]
maximos [] = []
maximos ((x,y):xs) = max x y : maximos (xs)

