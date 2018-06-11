function each() {
    //
}

function complete() {
    //
}

var pause = 500
var delay = 100

function execManyTimes(each, complete) {
	var i = 0
	var repeated
	var id

	function start() {
		id = setInterval(function() {
			each()
			if (++i === 50) {
				clearInterval(id)
				complete(repeated ? null : function() {
					i = 0
					repeated = true
					setTimeout(start, pause)
				})
			}
		}, 20)
	}

	setTimeout(start, pause)
}

execManyTimes(each, complete)
