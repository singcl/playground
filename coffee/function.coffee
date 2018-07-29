# Functions
# run this file use: coffee function.coffee

square = (x) -> x * x
cube = (x) -> square(x) * x

console.log cube(3)

# default values for arguments
fill = (container, liquid = "coffee") ->
    "Filling the #{container} with #{liquid}..."

console.log fill "cap", "water"
