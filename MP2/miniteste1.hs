charIn :: Char -> String -> Int
charIn c str = length $ filter (== c) str
