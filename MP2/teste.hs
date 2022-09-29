triIsosceles :: (Float, Float, Float) -> Bool
triIsosceles (x, y, z) | ((x == y) && (x /= z)) || ((x == z) && (x /= y)) || ((y == z) && (y /= x)) = True
                       | otherwise = False

triIsoscelesLst :: [(Float, Float, Float)] -> [(Float, Float, Float)]
triIsoscelesLst ((x,y,z):xs) | triIsosceles (x,y,z) = (x,y,z): triIsoscelesLst xs
                  | otherwise = triIsoscelesLst xs 

distance :: (Float, Float) -> (Float, Float) -> Float
distance (x1, y1) (x2, y2) = sqrt((c1*c1) + (c2*c2))
            where c1 = (x2-x1)
                  c2 = (y2-y1)

track :: [(Float, Float)] -> Float
track [] = 0
track[(_,_)] = 0
track ((x1,y1):xs) = (distance (x1,y1) (head xs)) + track xs