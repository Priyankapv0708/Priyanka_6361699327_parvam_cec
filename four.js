let arr=[1,2,3,4];

for (let i=0;i<arr.length ;i++){
    console.log(arr[i]);
}

let colors=["red","blue","green","yellow"];

for(let color of colors){
    console.log(color);   
}

let object={
    name:"ram",
    city:"Bengaluru",
    role:"developer"
}

console.log(object);
for(let key in object){
    console.log(key);
}

console.log("Object:",object);
let json=JSON.stringify(object);
console.log("Json:",json);
