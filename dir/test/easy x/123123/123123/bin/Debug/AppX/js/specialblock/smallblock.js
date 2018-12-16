var SmallBlock = function() {
	this.randomX = [0, canvas.width / 4, canvas.width / 2, canvas.width / 4 * 3];
	Block.call(this, this.randomX[parseInt(Math.random() * this.randomX.length)], -120);
	this.interval = 0;
	this.width = 120;
	this.height = 120;
};
SmallBlock.prototype.move = function() {
	this.y += 10.5;
};
SmallBlock.prototype.click = function() {
	player.score -= 12;
	Block.prototype.move = function() {
		this.y += 7 * 0.75;
		return this;
	};
	this.clicked = true;
	Block.prototype.width = 60;
	Block.prototype.height = Block.prototype.width;
	this.interval = 6000;
};
SmallBlock.prototype.reload = function() {
	Block.prototype.move = function() {
		this.y += 7;
		return this;
	};
	Block.prototype.width = 120;
	Block.prototype.height = Block.prototype.width;
	this.obj.x = this.x = this.randomX[parseInt(Math.random() * this.randomX.length)];
};
SmallBlock.prototype.image = new Image();
SmallBlock.prototype.image.src = "resourcepacks/images/smallblock." + frame.suffix;
SmallBlock.prototype.effect = new Image();
SmallBlock.prototype.effect.src = "resourcepacks/images/smallblockeffect." + frame.suffix;
