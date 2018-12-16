canvas.newBlocks = function(length, y, lastx) {
	var allblocks = [];
	var lastY = y;
	var randomx = [0, canvas.width / 4, canvas.width / 2, canvas.width / 4 * 3];
	var x = randomx[parseInt(Math.random() * randomx.length)];
	var lastX;
	while (x === lastx) {
		var x = randomx[parseInt(Math.random() * randomx.length)];
	}
	lastX = x;
	for (var i = 0; i < length; i++) {
		allblocks[i] = new Block(x, lastY);
		lastY -= canvas.width / 4;
		while (x === lastX) {
			var x = randomx[parseInt(Math.random() * randomx.length)];
		}
		lastX = x;
	}
	return allblocks;
};
var blocks = canvas.newBlocks(10, canvas.height - canvas.width / 4, 0);
var specialblocks = [new BadBlock(), new ReverseBlock(), new BlackBlock(), new SmallBlock(), new HideMouseBlock()];
var specialblock = specialblocks[parseInt(Math.random() * specialblocks.length)].clone();
specialblock.interval = 0;
player.playerIcon = {
	image : new Image(),
	draw : function() {
		try {
			ctx.drawImage(this.image, canvas.width / 2 - 50 - player.score.toString().length / 2 * 20, 0, 50, 50);
		} catch(err) {
			window.close();
		}
	}
};
player.playerIcon.image.src = "resourcepacks/images/playericon." + frame.suffix;
