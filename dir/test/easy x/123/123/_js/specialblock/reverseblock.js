var ReverseBlock = function() {
	this.randomX = [0, canvas.width / 4, canvas.width / 2, canvas.width / 4 * 3];
	Block.call(this, this.randomX[parseInt(Math.random() * this.randomX.length)], -120);
	this.interval = 0;
	this.width = 120;
	this.height = 120;
};
ReverseBlock.prototype.move = function() {
	this.y += 10.5;
};
ReverseBlock.prototype.click = function() {
	Block.prototype.move = function() {
		this.y += 7 * 1.4;
		return this;
	};
	player.score -= 8;
	this.clicked = true;
	Block.prototype.image.src = "resourcepacks/images/badblock." + frame.suffix;
	this.interval = 10000;
};
ReverseBlock.prototype.reload = function() {
	Block.prototype.move = function() {
		this.y += 7;
		return this;
	};
	this.x = this.obj.x = this.randomX[parseInt(Math.random() * this.randomX.length)];
	Block.prototype.image.src = "resourcepacks/images/block." + frame.suffix;
};
ReverseBlock.prototype.image = new Image();
ReverseBlock.prototype.image.src = "resourcepacks/images/reverseblock." + frame.suffix;
ReverseBlock.prototype.effect = new Image();
ReverseBlock.prototype.effect.src = "resourcepacks/images/reverseblockeffect." + frame.suffix;