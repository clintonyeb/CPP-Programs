
var username = $('#username');
var password = $('#password');

function sendDataLogin() {

   $.get('saveas.php?name1=username&name2=password', {
           postname: username,
           postpass: password
       },
       function(data) {
           $("#result").html(data);
           if(data=="logged in")
               showDiv();

       });
}
function showDiv() {
   document.getElementById('princess').style.display = "block";
}

function showError() {

   document.getElementById("result").innerHTML = "There is a technical glitch in the system. Somebody messed up some code in this webpage which is responsible for the error that you see.Can you fix this error? <br><br> <b>Problem :</b> There is one or more bugs in this webpage. Remove the bugs and login. On successful login, you can meet the princess and get a success code. Otherwise you are stuck at the gate forever.";

   }


