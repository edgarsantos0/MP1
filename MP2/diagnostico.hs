areaTri :: Double -> Double -> Double
areaTri x y = (x*y)/2

areaCirc :: Double -> Double
areaCirc x = pi*x*x

volumeCil :: Double -> Double -> Double
volumeCil x y = k*y 
 where k = areaCirc x

validaTab :: (Int, Int) -> Bool
validaTab (x, y) |(x <= 1 || x >= 8) || (y <= 1 || y >= 8) = False
                 |otherwise = True


maxi :: [Int] -> Int 
maxi [] = error "Vai a merda"
maxi [x] = x 
maxi (x : xs) = max x (maxi xs)