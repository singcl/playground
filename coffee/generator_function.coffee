# a generator in CoffeeScript is simply a function that yields.
perfectSquares =  ->
  num = 0
  loop
    num += 1
    yield num * num
  return

x = perfectSquares

# https://developer.mozilla.org/zh-CN/docs/Web/JavaScript/Reference/Operators/void
fibonacci =  ->
  [pre, curr] = [0, 1]
  loop
    [pre, curr] = [curr, pre + curr]
    yield curr

getFibonacciNumbers = (length) ->
  results = [1]
  for n from fibonacci()
    results.push n
    break if results.length is length
  results

console.log getFibonacciNumbers 12