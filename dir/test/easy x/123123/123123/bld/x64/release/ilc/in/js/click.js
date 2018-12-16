canvas.onclick = function(e) {
	var block;
	if (e.offsetX >= specialblock.x && e.offsetX <= (specialblock.x + specialblock.width) && e.offsetY >= specialblock.y && e.offsetY <= (specialblock.y + specialblock.height) && !specialblock.clicked) {
		specialblock.click();
		return;
	}
	for (var i = 0; i < blocks.length; i++) {
		block = blocks[i];
		if (e.offsetX >= block.x && e.offsetX <= (block.x + block.width) && e.offsetY >= block.y && e.offsetY <= (block.y + block.height)) {
			player.score += 1;
			block.clicked = true;
			if (player.gameState === "start") {
				player.gameState = "running";
				if (document.getElementById("music").paused) {
					document.getElementById("music").play();
				}
			}
			return;
		}
	}
	if (player.gameState === "running") {
		player.gameOver = true;
	}
};
