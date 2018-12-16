var BadBlock = function() {
	this.randomX = [0, canvas.width / 4, canvas.width / 2, canvas.width / 4 * 3];
	Block.call(this, this.randomX[parseInt(Math.random() * this.randomX.length)], -120);
	this.interval = 0;
	this.width = 120;
	this.height = 120;
};
BadBlock.prototype.move = function() {
	this.y += 10.5;
};
BadBlock.prototype.click = function() {
	player.score -= 5;
	this.clicked = true;
	Block.prototype.move = function() {
		this.y += 7 * 1.3;
		return this;
	};
	this.interval = 5000;
};
BadBlock.prototype.reload = function() {
	Block.prototype.move = function() {
		this.y += 7;
		return this;
	};
	this.obj.x = this.x = this.randomX[parseInt(Math.random() * this.randomX.length)];
};
BadBlock.prototype.image = new Image();
BadBlock.prototype.image.src = "resourcepacks/images/badblock." + frame.suffix;
BadBlock.prototype.effect = new Image();
BadBlock.prototype.effect.src = "resourcepacks/images/badblockeffect." + frame.suffix;
