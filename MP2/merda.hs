eq2grau :: Float -> Float -> Float -> Int 
eq2grau a b c | delta < 0 = error"Impossivel em R"
              | delta == 0 = 1
              | delta > 0 = 2
                 where delta = b^2 - 4*a*c


