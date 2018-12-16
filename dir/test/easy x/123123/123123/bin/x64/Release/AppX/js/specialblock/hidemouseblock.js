var HideMouseBlock = function() {
	this.randomX = [0, canvas.width / 4, canvas.width / 2, canvas.width / 4 * 3];
	Block.call(this, this.randomX[parseInt(Math.random() * this.randomX.length)], -120);
	this.interval = 0;
	this.width = 120;
	this.height = 120;
};
HideMouseBlock.prototype.move = function() {
	this.y += 10.5;
};
HideMouseBlock.prototype.click = function() {
	player.score -= 5;
	this.clicked = true;
	this.interval = 7000;
	frame.mousehide = true;
};
HideMouseBlock.prototype.reload = function() {
	frame.mousehide = false;
	Block.prototype.image.src = "resourcepacks/images/block." + frame.suffix;
	this.obj.x = this.x = this.randomX[parseInt(Math.random() * this.randomX.length)];
};
HideMouseBlock.prototype.image = new Image();
HideMouseBlock.prototype.image.src = "resourcepacks/images/hideblock." + frame.suffix;
HideMouseBlock.prototype.effect = new Image();
HideMouseBlock.prototype.effect.src = "resourcepacks/images/hideblockeffect." + frame.suffix;