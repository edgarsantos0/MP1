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
        "1" -> do appendAluno
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
    appendFile "alunos.txt" (nome ++ " " ++ show f1 ++ " " ++ show f2 ++ show notaF ++ "\n")

-- Calcula a média de dois números decimais
media :: Float -> Float -> Float
media a b = (a+b)/2

-- Imprimir a pauta completa
printPauta :: IO ()
printPauta = putStrLn "ler o ficheiro alunos.txt e imprimir o conteúdo"

-- procurar e imprimir a informação de um aluno
-- pergutar se quer apagar o atualizar a informação
findAluno :: IO ()
findAluno = putStrLn $ "procurar e imprimir a informação de um aluno"
                    ++ "pergutar se quer apagar o atualizar a informação"

-- Error handling
doesntExist :: String -> IO ()
doesntExist opt =
    putStrLn $ "A opção " ++ opt ++ " não existe"
