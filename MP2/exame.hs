seg :: (Int, Int, Int) -> Int
seg (x, y, z) = 86400 - (x*60*60 + y*60 + z)