type Jornada = [Jogo]
type Jogo = ((Equipa,Golos),(Equipa,Golos))
type Equipa = String
type Golos = Int



--[(("Real", 3), ("Atleti", 0)), (("Benfica", 3), ("Porto", 0)), (("Sporting", 3), ("Sporting", 0))]

igualj :: Jornada -> Bool
igualj jorn | (filter (\((x1, _), (x2, _)) -> x1==x2) jorn) == [] = True
            | otherwise = False

--semrepet :: Jornada -> Bool
--semrepet jorn | filter(\(x1, _), (x2, _)) -> 