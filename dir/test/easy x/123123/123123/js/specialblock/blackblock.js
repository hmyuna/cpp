var BlackBlock = function() {
	this.randomX = [0, canvas.width / 4, canvas.width / 2, canvas.width / 4 * 3];
	Block.call(this, this.randomX[parseInt(Math.random() * this.randomX.length)], -120);
	this.interval = 0;
	this.width = 120;
	this.height = 120;
};
BlackBlock.prototype.move = function() {
	this.y += 10.5;
};
BlackBlock.prototype.click = function() {
	player.score -= 8;
	this.clicked = true;
	frame.black = true;
	Block.prototype.image.src = "resourcepacks/images/blackblock." + frame.suffix;
	this.interval = 7000;
};
BlackBlock.prototype.reload = function() {
	frame.black = false;
	frame.alpha = 0.9;
	Block.prototype.image.src = "resourcepacks/images/block." + frame.suffix;
	this.obj.x = this.randomX[parseInt(Math.random() * this.randomX.length)];
};
BlackBlock.prototype.fillBlack = function() {
	ctx.fillStyle = "rgba(0, 0, 0, " + frame.alpha + ")";
	ctx.fillRect(0, 0, canvas.width, canvas.height);
	ctx.fillStyle = "white";
	ctx.font = "40px Georgia";
	ctx.fillText(player.score, canvas.width / 2, 20);
};
BlackBlock.prototype.image = new Image();
BlackBlock.prototype.image.src = "resourcepacks/images/blackblock." + frame.suffix;
BlackBlock.prototype.effect = new Image();
BlackBlock.prototype.effect.src = "resourcepacks/images/blackblockeffect." + frame.suffix; 