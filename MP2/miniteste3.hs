module Main where
{-
    import Data.Char
    import System.IO

    main = do
        putStrLn "Numero do contador"
        contador <- getLine
        putStrLn "Valor da contagem"
        contagem <- getLine

        contadores <- readFile "teste.txt"
        writeFile "teste.txt" (contador ++ ' ' ++ contagem ++  '\n')
-}
