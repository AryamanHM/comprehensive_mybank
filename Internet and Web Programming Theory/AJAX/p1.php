<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript" 
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>
		
      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("#driver").click(function(event){
				var ppid =	$("#pid").val(); 
				var qqty = $("#qty").val();
               $('#stage').load('p2.php', {"p":ppid, "q":qqty});
            });
         });
		 
		 
		  $(document).ready(function() {
            $("#driver").onChange(function(event){
				var uid =	$("#username").val(); 
				
               $('#stage').load('find_username.php', {"uid":uid});
            });
         });
		 
      </script>
   </head>
	
	<input id="username" />
	
	
   <body>
      <p>Click on the button to load p2.php −</p>
		
      <div id = "stage" style = "background-color:cc0;">
         STAGE
      </div>
		Product ID: <input id="pid" /><br><br>
		Quantity: <input id="qty"  /><br><br>
      <input type = "button" id = "driver"  value="add items to Cart" />
   </body>
</html>
