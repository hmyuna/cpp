if (self !== top) {
	window.top.location.replace(self.location);
}
if (navigator.userAgent.indexOf("iPad") != -1) {
	window.close();
}
var Interval = setInterval(function() {
	canvas.drawBorder();
	for (var i = 0; i < blocks.length; i++) {
		blocks[i].draw(ctx);
	}
	specialblock.draw(ctx);
	player.playerIcon.draw();
	ctx.fillStyle = "white";
	ctx.font = "40px Georgia";
	ctx.fillText(player.score, canvas.width / 2, 20);
	mouse.draw();
	if (player.gameState === "pause") {
		canvas.pause();
		return;
	}
	if (player.gameState === "start") {
		return;
	}
	specialblock.interval -= 30;
	if (frame.black) {
		if (specialblock.fillBlack) {
			specialblock.fillBlack();
		}
		frame.alpha -= (0.9 - 0.8) / 7000 * 30;
		canvas.effect();
		mouse.draw();
	}
	canvas.effect();
	if ((specialblock.clicked || specialblock.y >= canvas.height) && specialblock.interval <= 0) {
		specialblock.reload();
		specialblock = specialblocks[parseInt(Math.random() * specialblocks.length)].clone();
	}
	for (var i = 0; i < blocks.length; i++) {
		blocks[i].move();
	}
	specialblock.move();
	for (var i = 0; i < blocks.length; i++) {
		if (blocks[i].isLast(canvas)) {
			if (blocks[i].clicked) {
				blocks.shift();
			} else {
				player.gameOver = true;
			}
		}
	}
	if (player.score < 0) {
		player.gameOver = true;
		player.score = 0;
	}
	if (player.gameOver) {
		canvas.gameOver();
	}
	if (blocks[blocks.length - 1].y >= 0) {
		blocks = blocks.concat(canvas.newBlocks(10 - blocks.length, blocks[blocks.length - 1].y - canvas.width / 4, blocks[blocks.length - 1].x));
	}
}, 30);
