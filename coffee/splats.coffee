popular  = ['pepperoni', 'sausage', 'cheese']
unwanted = ['anchovies', 'olives']

all = [popular..., unwanted..., 'singcl']

console.log all

# object
user =
    name: 'Heisenberg'
    age: 13

currentUser = {
    user...
    status: 'ok'
}

console.log currentUser