canvas.onmouseover = function() {
	if (player.gameState === "pause") {
		player.gameState = "running";
		if(!player.gameOver){
		document.getElementById("music").play();
		}
	}
};
canvas.onmouseout = function() {
	if (player.gameState === "running") {
		player.gameState = "pause";
		document.getElementById("music").pause();
	}
};
