countLetters :: Char -> String -> Int
countLetters c str = length $ filter (== c) str
