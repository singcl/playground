gold = silver = rest = "unknown"

awardMedals = (first, second, others...) ->
    gold = first
    silver = second
    rest = others

contenders = [
  "Michael Phelps"
  "Liu Xiang"
  "Yao Ming"
  "Allyson Felix"
  "Shawn Johnson"
  "Roman Sebrle"
  "Guo Jingjing"
  "Tyson Gay"
  "Asafa Powell"
  "Usain Bolt"
]

console.log awardMedals contenders...
