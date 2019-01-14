<!DOCTYPE html>  
<html>  
<body>  
<?php  
$string = "Great responsibility";  
$count;  
   
print("Duplicate characters in a given string: <br>");  
//Counts each character present in the string  
for($i = 0; $i < strlen($string); $i++) {  
    $count = 1;  
    for($j = $i+1; $j < strlen($string); $j++) {  
        if($string[$i] == $string[$j] && $string[$i] != ' ') {  
            $count++;  
            //Set $string[$j] to 0 to avoid printing visited character  
            $string[$j] = '0';  
        }  
    }  
    //A character is considered as duplicate if count is greater than 1  
    if($count > 1 && $string[$i] != '0'){  
        print($string[$i]);  
        print("<br>");  
    }  
}  
?>  
</body>  
</html>
