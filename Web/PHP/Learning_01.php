<?php
$color = "blue";
function test(){
    global $color;
    echo strpos("Hello world " .$color, "Hello"). "\n";
    echo "Hello world \n";
}
test();
?>