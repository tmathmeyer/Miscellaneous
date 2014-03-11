function EArray() {
	this.__stack__ = [];
	
	this.__listeners__ = {
		push:[],
		pop:[],
        on:[]
		
	};
    
    this.length = 0;

	this.pop = function(){
		var out = this;
		this.__listeners__.pop.forEach(function(each){
			each(out.__stack__.pop());
		});
        this.length --;
	};
	
	this.push = function(element){
		this.__stack__.push(element);
		this.__listeners__.push.forEach(function(each){
			each(element);
		});
        this.length++;
	};
	
	this.map = function(aplic){
		var r = new EArray();
		r.__stack__ = this.__stack.map(aplic);
		r.__listeners__ = this.__listeners__;
		return r;
	};
	
	this.on = function(action, callback){
        this.__listeners__[action].push(callback);
        this.__listeners__.on.forEach(function(each){
            each(action);
        });
	};
    
    this.toJSON = function(){
        return this.__stack__;
    }
}

var test = new EArray();

test.on('on', function(action){
    console.log('an on trigger was added to: '+action);
});

test.on('on', function(action){
    console.log("lol: "+action);
});

test.on('push', function(elem){
    console.log("push " + elem);
});

test.on('pop', function(elem){
    console.log("pop " + elem);
});

test.push(1);
test.push(2);
test.push(3);
test.push(4);
test.push(5);

test.pop();

