calculapontuacao :: [(String, Int, Int)] -> [(String, Int)]
--calculapontuacao [] = []
--calculapontuacao ((str, x, y):ls) = (str, x+y) : calculapontuacao ls
calculapontuacao l = map (\(_, x1, x2) -> x1+x2) l


--selecionapilotos :: [(String, Int, Int)] -> [(String, Int)]
--selecionapilotos [] = []
--selecionapilotos ((str, x, y):ls) = filter ((x+y)> 300) ((str, x, y):ls)