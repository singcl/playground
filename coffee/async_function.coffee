sleep = (ms) ->
  new Promise (resolve) ->
    setTimeout resolve ms, ms

console.log sleep(30)

say = (text) ->
  console.log text

countdown = (seconds) ->
  for i in [seconds..1]
    say i
    x = await sleep 1000
    say x * i
  say "goodbye"

countdown 3