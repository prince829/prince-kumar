(function(){
let inputitem=document.querySelector('#textbox');
inputitem.onkeyup=function(e){
    if(e.keyCode===13){
        if(inputitem.value){
        additem();
        function additem(){
      let ul=document.querySelector('.list');
      let li=document.createElement('li');
      let textNode=document.createTextNode(inputitem.value);
      ul.appendChild(li);
      li.appendChild(textNode);
      inputitem.value='';
      li.onclick=function(e){
          e.target.remove();
      }
      
    }
}
}
};
})();