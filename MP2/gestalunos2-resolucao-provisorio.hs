import System.Directory
import System.IO
import Data.List
import Control.Exception


-- Menu
menu :: IO String
menu = 
    do 
        let menutxt = unlines ["\n------------------"
                           , "  Menu"
                           , "  (1)  Inserir Aluno"
                           , "  (2)  Imprimir Pauta"
                           , "  (3)  Pesquisar Aluno"
                           , ""
                           , "  (0)  Sair"
                           ]
        hSetBuffering stdout NoBuffering -- from System.IO
        putStrLn menutxt
        putStr "Opção: "
        getLine

main :: IO ()
main = do
    opti <- menu
    case opti of
        "0" -> return ()
        "1" -> do appendAluno2
                  main
        "2" -> do printPauta
                  main
        "3" -> do findAluno
                  main
        othewise -> do doesntExist opti 
                       main
    

-- le o nome e as notas da 1ª e 2ª frequências
appendAluno :: IO ()
appendAluno = do
    putStr "Nome: "
    nome <- getLine
    putStr "Nota F1: "
    notaF1 <- getLine
    putStr "Nota F2: "
    notaF2 <- getLine
    let f1 = read notaF1
        f2 = read notaF2
        notaF = media f1 f2
    appendFile "alunos.txt" (nome ++ " " ++ show f1 ++ " " ++ show f2 ++ " " ++ show notaF ++ "\n")

appendAluno2 :: IO () -- com numero de aluno e validacao - Tarefa 2.3
appendAluno2 = do
    putStr "Numero de aluno: "
    numero <- getLine
    contents <- readFile "alunos.txt"
    if not (valida numero contents) then do 
                            putStrLn "Este número já existe!!"
                            else do
                    putStr "Nome: "
                    nome <- getLine
                    putStr "Nota F1: "
                    notaF1 <- getLine
                    putStr "Nota F2: "
                    notaF2 <- getLine
                    let f1 = read notaF1
                        f2 = read notaF2
                        notaF = media f1 f2
                        al = Aluno (read numero) nome f1 f2 notaF
                    appendFile "alunos2.txt" (show al ++ "\n")

-- valida se numero ja existe
--valida :: String -> String -> Bool
valida numero contents = null $ filter (encontra numero) (lines contents)

-- Calcula a média de dois números decimais
media :: Float -> Float -> Float
media a b = (a+b)/2

-- Imprimir a pauta completa
printPauta :: IO ()
printPauta = do --putStrLn "ler o ficheiro alunos.txt e imprimir o conteúdo"
    contents <- readFile "alunos.txt"
    putStr contents
    

-- procurar e imprimir a informação de um aluno
-- pergutar se quer apagar o atualizar a informação
findAluno :: IO ()
findAluno = do -- putStrLn $ "procurar e imprimir a informação de um aluno"        ++ "pergutar se quer apagar o atualizar a informação"
    putStrLn "Insira o nome do aluno:"
    nome <- getLine
    contents <- readFile "alunos.txt"
    let aluno = head (filter (encontra nome) (lines contents))
    if null aluno then putStrLn "Não existe!" 
                else do 
                    print aluno 
                    -- tarefa 3.1
                    putStrLn "Opções: \n 0 - sair \n 1 - apagar aluno \n 2 - atualizar"
                    opti <- getLine
                    case opti of
                            "0" -> return ()
                            "1" -> apaga aluno contents
                            "2" -> atualiza aluno contents
                            othewise -> doesntExist opti 
                       

encontra nome frase = nome == head (words frase)

apaga aluno contents = do 
                let newContents = unlines (filter (\al -> al /= aluno) (lines contents))
                (tempName, tempHandle) <- openTempFile "." "temp"
                hPutStr tempHandle newContents
                hClose tempHandle
                removeFile "alunos.txt"
                renameFile tempName "alunos.txt"

atualiza aluno contents = do 
    apaga aluno contents
    putStr "Nota F1: "
    notaF1 <- getLine
    putStr "Nota F2: "
    notaF2 <- getLine
    let f1 = read notaF1
        f2 = read notaF2
        notaF = media f1 f2
    appendFile "alunos.txt" (head(words(aluno)) ++ " " ++ show f1 ++ " " ++ show f2 ++ show notaF ++ "\n")


-- Error handling
doesntExist :: String -> IO ()
doesntExist opt =
    putStrLn $ "A opção " ++ opt ++ " não existe"


data Aluno = Aluno {numero :: Int, nome :: String, nota1 :: Float, nota2 :: Float, notafinal :: Float} deriving (Show)
type Pauta = [Aluno]
