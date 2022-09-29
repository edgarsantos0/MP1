transf :: [a] -> [a]
transf [] = []
transf (x:[]) = [x]
--transf (x:xs) if (length (x:xs) < 4) = error "A lista deve ter pelo menos 4 elementos"
transf (x:xs) = head xs : x : (transf $ tail xs)
