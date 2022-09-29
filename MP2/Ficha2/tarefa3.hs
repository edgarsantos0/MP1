opp1 :: (Int,(Int,Int)) -> Int
opp1 (x, (y, z)) | x == 1 = (y + z)
                 | x == 2 = (y - z)
                 | otherwise = error "Vai para o caralho!"

fact :: Float -> Float
fact x | x == 0 = 1
       | x < 0 = error "Nao existe fatorial de numeros negativos!"
       | otherwise = x * fact (x - 1)