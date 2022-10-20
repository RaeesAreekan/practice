var button=document.querySelector("button");
var box=document.querySelector("div")

button.onclick=function changecolor(){
    if(box.style.background=='red'){
        box.style.background='yellow';
    }
    else{
        box.style.background='red' ; 
    }
}
let user={
    name:'raees',
    age:19
}
console.log(user);
console.log(user.name);
user['name']='ronaldo';
console.log(typeof user);