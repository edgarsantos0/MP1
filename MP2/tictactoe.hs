import Data.List

data Piece
  = Open Int
  | Player Char
  deriving Eq

instance Show Piece where
     show (Open n) = show n
     show (Player c) = [c]

openSpace :: [Piece] -> Int -> Bool
openSpace board index 
     |length board < i                 = False
     |pieceIsOpen $ board !! i         = True
     |otherwise                        = False
     where i = index - 1
   
showBoardLine :: [Piece] -> String
showBoardLine (a:b:c:xs) = " " ++ (show a) ++ " " ++ "|" ++ " " ++ (show b) ++ " " ++ "|" ++ " " ++ (show c) ++ " "
showBoardLine _ = error "List must contain at least three elements"

boardBorder :: String
boardBorder = "\n---|---|---\n"

showBoard :: [Piece] -> String
showBoard board = concat $ intersperse boardBorder $ [top, middle, bottom] 
      where
        top = showBoardLine board
        middle = showBoardLine (drop 3 board)
        bottom = showBoardLine (drop 6 board)

pieceIsOpen :: Piece -> Bool                      
pieceIsOpen (Open _) = True
pieceIsOpen _ = False


removeAtNth :: Int -> [a] -> ([a], [a])
removeAtNth index lst = (left, right)
      where 
        (left, ys) = splitAt (index - 1) lst
        right = drop 1 ys

placePiece :: [a] -> a -> Int -> [a]
placePiece board piece index = xs ++ [piece] ++ ys
      where (xs, ys) = removeAtNth index board

getPiecePosition :: [Piece] -> IO Int
getPiecePosition board = do
  input <- getChar

  if input `elem` ['1' .. '9'] && openSpace board (read [input])
    then return $ (read [input])
    else do
      putStrLn "Enter an open position (1-9):"
      getPiecePosition board

swapPlayers :: Char -> Char
swapPlayers 'X' = 'O'
swapPlayers 'O' = 'X'
swapPlayers _ = error "swapPlayers only accepts X or O"


checkBoardState :: [Piece] -> Char -> IO ()
checkBoardState board playerChr
        | tieGame board = putStrLn "It's a tie!"
        | playerWon board (Player 'X') = putStrLn "Player 1 wins!!"
        | playerWon board (Player 'O') = putStrLn "Player 2 wins!!"
        | otherwise = runTicTacToe board (swapPlayers playerChr)



checkWinVertical :: [Piece] -> Piece -> Int -> Bool
checkWinVertical board player index = topPos == player && middlePos == player && bottomPos == player
             where
              topPos = (board !! index)
              middlePos = board !! (index + 3)
              bottomPos = board !! (index + 6)


playerWinVertical :: [Piece] -> Piece -> Bool
playerWinVertical board player = or $ map (checkWinVertical board player) [0, 1, 2] 


checkWinHorizontal :: [Piece] -> Piece -> Int -> Bool
checkWinHorizontal board player index = firstPos == player && secondPos == player && thirdPos == player
          where
            firstPos = board !! index
            secondPos = board !! (index + 1)
            thirdPos = board !! (index + 2)


playerWinHorizontal :: [Piece] -> Piece -> Bool
playerWinHorizontal board player = or $ map (checkWinHorizontal board player) [0, 3, 6]


checkWinDiagonal :: [Piece] -> Piece -> Int -> Int -> Bool
checkWinDiagonal board player index step = firstPos == player && secondPos == player && thirdPos == player
        where 
          firstPos = board !! index
          secondPos = board !! (index + step)
          thirdPos = board !! (index + 2 * step)

playerWinDiagonal :: [Piece] -> Piece -> Bool
playerWinDiagonal board player = wonFirstDiagonal || wonSecondDiagonal
           where
            wonFirstDiagonal = checkWinDiagonal board player 0 4
            wonSecondDiagonal = checkWinDiagonal board player 2 2 

playerWon :: [Piece] -> Piece -> Bool
playerWon board player = playerWinDiagonal board player || playerWinVertical board player || playerWinHorizontal board player

tieGame :: [Piece] -> Bool
tieGame board = all (\piece -> not (pieceIsOpen piece)) board 


runTicTacToe :: [Piece] -> Char -> IO ()
runTicTacToe board playerChr = do
     putStrLn $ showBoard board 
     rawChoice <- getPiecePosition board
     let newBoard = placePiece board (Player playerChr) rawChoice
     checkBoardState newBoard playerChr

main :: IO ()
main = runTicTacToe board 'X'
          where board = [Open 1, Open 2, Open 3, Open 4, Open 5, Open 6, Open 7, Open 8, Open 9]


