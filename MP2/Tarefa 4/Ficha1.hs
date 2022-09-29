somamulti :: (Int, Int) -> (Int, Int) -> (Int, Int) 
somamulti (x, y) (z, w) = (x+y, z*w)

max32 :: Int -> Int -> Int -> (Int, Int)
max32 x y z
 |x > y && x > z = (x, max y z)
 |y > x && y > z = (y, max x z)
 |z > x && z > y = (z, max x y)

ordenar :: (Int, Int, Int) -> (Int, Int, Int)
ordenar (x, y, z) |x > y && x > z = (x, max y z, min y z)
                  |y > x && y > z = (y, max x z, min x z)
                  |z > x && z > y = (z, max x y, min x y)

triangulo :: Double -> Double -> Double -> Bool
triangulo x y z |x + y < z || x + z < y || y + z < x = False
                |otherwise = True

abrev :: String -> String
abrev nome = a where 
    a = s  ++  " " ++ k
    s = head l 
    k = last l
    l = words nome
