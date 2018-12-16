var canvas = document.getElementById("canvas");
var ctx = canvas.getContext("2d");
var player = {
	score : 0,
	gameOver : false,
	gameState : "start",
};
var frame = {
	black : false,
	alpha : 0.9,
	suffix : "png",
	mousehide : false
};
var playerIcon = new Image();
playerIcon.src = "resourcepacks/images/playericon." + frame.suffix;
ctx.textAlign = "center";
ctx.textBaseline = "middle";
var bg = new Image();
bg.src = "resourcepacks/images/bg." + frame.suffix;
canvas.drawBorder = function() {
	try {
		ctx.clearRect(0, 0, canvas.width, canvas.height);
		ctx.drawImage(bg, 0, 0, canvas.width, canvas.height);
		ctx.strokeRect(0, 0, canvas.width, canvas.height);
	} catch(err) {
		window.location.reload();
	}
};
var mouse = {
	x : 0,
	y : 0,
	image : new Image(),
	hideImage : new Image(),
	width : 50,
	height : 50,
	r : 5,
	draw : function() {
		try {
			if (frame.mousehide) {
				ctx.drawImage(this.hideImage, this.x - this.width / 2, this.y - this.height / 2, this.width, this.height);
			} else {
				ctx.drawImage(this.image, this.x - this.width / 2, this.y - this.height / 2, this.width, this.height);
			}
		} catch(err) {
			ctx.beginPath();
			if (frame.mousehide) {
				ctx.fillStyle = "rgba(255, 0, 255, 0.2)";
			} else {
				ctx.fillStyle = "purple";
			}
			ctx.arc(this.x, this.y, this.r, 0, Math.PI * 2, false);
			ctx.fill();
			ctx.closePath();
		}
	}
}
mouse.image.src = "resourcepacks/images/mouse." + frame.suffix;
mouse.hideImage.src = "resourcepacks/images/hidemouse." + frame.suffix;
var loading = new Image();
loading.src = "resourcepacks/images/loading.gif";
loading.draw = function() {
	ctx.drawImage(loading, (canvas.width - ((loading.width > canvas.width) ? canvas.width : loading.width)) / 2, (canvas.height - ((loading.width > canvas.height) ? canvas.height : loading.height)) / 2, ((loading.width > canvas.width) ? canvas.width : loading.width), ((loading.width > canvas.height) ? canvas.height : loading.height));
};
loading.onload = loading.draw;
canvas.effect = function() {
	if (specialblock.interval > 0) {
		ctx.textAlign = "left";
		ctx.textBaseline = "top";
		ctx.fillStyle = "white";
		ctx.font = "40px Georgia";
		try {
			ctx.drawImage(specialblock.effect, 0, 0, 50, 50);
			ctx.fillText(parseInt(specialblock.interval / 1000), 50, 0);
		} catch(err) {
			ctx.drawImage(specialblock.image, 0, 0, 50, 50);
			ctx.fillText(parseInt(specialblock.interval / 1000), 50, 0);
		}
	}
	ctx.textAlign = "center";
	ctx.textBaseline = "middle";
};
canvas.download = function() {
	var aLink = document.createElement('a');
	var evt = document.createEvent("HTMLEvents");
	evt.initEvent("click", false, false);
	aLink.download = "游戏截图";
	aLink.href = this.toDataURL("image/jpeg", 0.5);
	aLink.dispatchEvent(evt);
};
canvas.gameOver = function() {
	clearInterval(Interval);
	canvas.drawBorder();
	ctx.textAlign = "center";
	ctx.textBaseline = "middle";
	ctx.fillStyle = "white";
	ctx.font = "50px Georgia";
	ctx.fillText("Game Over", canvas.width / 2, canvas.height / 2);
	ctx.fillText("分数" + player.score, canvas.width / 2, canvas.height / 2 + 50);
	document.getElementById("music").pause();
	canvas.style.cursor = "default";
	if (player.score >= 70) {
		canvas.download();
	}
	setTimeout(function() {
		location.reload();
	}, 3000);
};
canvas.pause = function() {
	if (frame.black) {
		if (specialblock.fillBlack) {
			specialblock.fillBlack();
		}
		this.effect();
	}
	this.effect();
	ctx.fillStyle = "white";
	ctx.font = "50px 隶书";
	ctx.fillText("暂停", this.width / 2, this.height / 2);
	mouse.draw();
}; 