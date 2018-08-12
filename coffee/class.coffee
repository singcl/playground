class Animal
  constructor: (@name) ->
  move: (meters) ->
    console.log @name + " moved #{meters}m."

class Snake extends Animal
  move: ->
    console.log "Slithering..."
    super 5

class Horse extends Animal
  move: ->
    console.log "Galloping..."
    super 45

sam = new Snake "Sammy the Python"
tom = new Horse "Tommy the Palomino"

sam.move()
tom.move()

# Static methods can be defined using @ before the method name:
class Teenager
  @say: (speech) ->
    words = speech.split ' '
    fillers = ['uh', 'um', 'like', 'actually', 'so', 'maybe']
    output = []
    for word, index in words
      output.push word
      output.push fillers[Math.floor(Math.random() * fillers.length)] unless index is words.length - 1
    output.join ', '


console.log Teenager.say("Are we there yet?")

# coffee快速访问原型对象
String::dasherize = ->
  this.replace(/_/g, '-')

console.log "s_RRR_kkWWW_".dasherize()
