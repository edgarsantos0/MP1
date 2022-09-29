data Ponto = Ponto Float Float deriving (Show)
data Shape = Circle Ponto Float | Retangulo Ponto Ponto 
     deriving (Show)

area :: Shape -> Float
area (Circle _ r) = pi * r * r 
area (Retangulo (Ponto x1 y1) (Ponto x2 y2)) = (abs $ x2 - x1) * (abs $ y2 - y1)