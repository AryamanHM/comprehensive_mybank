<!DOCTYPE html>
<html>
    <head>
        <title>Average Calculaor</title>
    </head>
    <body>
        Enter the name: <input type="text" id="name" required><br>
        Enter the Maths marks: <input type="text" id="maths" required><br>
        Enter the English marks: <input type="text" id="eng" required><br>
        Enter the Hindi marks: <input type="text" id="hindi" required><br>
        Enter the Physics marks: <input type="text" id="phy" required><br>
        Enter the Chemistry marks: <input type="text" id="chem" required><br>

        <button onclick="Student()">Student Average</button>
        <button onclick="classavg()">Class Average</button>
        <br>
        <ol id="class">
            
        </ol>
        <div>The Class Average is <span id="ans">NULL</span></div>
    </body>
    <script>
        var nameArray = Array();
        var avgArray = Array();
        var e = ""
        function Student()
        {
            var name = document.getElementById("name").value;
            if (name!= ""){
                nameArray.push(name);
                var maths = parseInt(document.getElementById("maths").value);
                var eng = parseInt(document.getElementById("eng").value);
                var hindi = parseInt(document.getElementById("hindi").value);
                var phy = parseInt(document.getElementById("phy").value);
                var chem = parseInt(document.getElementById("chem").value);
                var sum = maths + eng + hindi + phy + chem;
                sum = sum/5;
                avgArray.push(sum);
                alert(sum);
            }
            document.getElementById("name").value="";
            document.getElementById("maths").value="";
            document.getElementById("eng").value="";
            document.getElementById("hindi").value="";
            document.getElementById("phy").value="";
            document.getElementById("chem").value="";
            e += "<li>Name: " + name +" , Average: " + sum + "</li>";
            document.getElementById("class").innerHTML=e;

        }
        function classavg() {
            var sum = 0;
            for (var i=0;i<avgArray.length;i++) {
                sum+=avgArray[i];
            }
            sum = sum/avgArray.length;
            document.getElementById("ans").innerHTML=sum;
        }
    </script>
</html>