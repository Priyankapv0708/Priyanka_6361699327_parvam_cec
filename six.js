let add = (a,b)=> a+b;

console.log(add(2,3));


let max_num=(a,b,c)=>{
    if (a >= b && a >= c)
        max=a;
    else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    return max;
}

console.log("Max num:",max_num(1,2,3));

let user = {
    name:"Jimmy",
    age:12,
    state:"Karnataka"
};
let {name,age,state} = user;
console.log(name,age,state);

let color = ["red","green","blue","yellow"];
console.log(color);
let [,second,,fourth]=color;

console.log(second,fourth);

let a = [1,2,3];
let b = [4,5];
let merge = [...a,...b];
console.log("Merged array:",merge);

let c =a.map((ele)=>ele*2);

console.log("Result:",c);

let f=[1,2,3,4,5,6,7];
let res = f.filter((ele)=>ele %2 ===0);
console.log("Filter:",res);

let sum=f.reduce((sum,current)=>sum+current,0);

console.log("Sum",sum)