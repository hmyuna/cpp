var Block = function(x, y) {
	this.x = x;
	this.y = y;
	this.clicked = false;
	this.draw = function(ctx) {
		try {
			if (!this.clicked) {
				ctx.drawImage(this.image, this.x, this.y, this.width, this.height);
			} else {
				try {
					ctx.drawImage(this.clickedImg, this.x, this.y, this.width, this.height);
				} catch(err) {

				}
			}
		} catch(err) {
			window.close();
		}
		return this;
	};
	this.clone = function() {
		var clone = {};
		for (index in this) {
			clone[index] = this[index];
		};
		clone.obj = this;
		return clone;
	};
};
Block.prototype.move = function() {
	this.y += 7;
	return this;
};
Block.prototype.isLast = function(canvas) {
	return this.y > canvas.height;
};
Block.prototype.image = new Image();
Block.prototype.image.src = "resourcepacks/images/block." + frame.suffix;
Block.prototype.clickedImg = new Image();
Block.prototype.clickedImg.src = "resourcepacks/images/clickedblock." + frame.suffix;
Block.prototype.width = 120;
Block.prototype.height = 120; 