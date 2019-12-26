<?php
    # apt install php 
    $intro = "Hi, my name is ";
    $name = "Slim Shady";
    echo "Welcome, friend! $name\n";
    echo 2*4;
    echo "\n";    
    echo round(1.5);
    echo "\n";

    echo $intro . $name;    # dot is combine operator
    echo "\n";

    define("PI",3.1415926535898);
    echo PI;
    echo "\n";

    $hour = 9;
    if ($hour < 12) {
        echo "Good morning!, Hi there!\n";
    } elseif ($hour < 18) {
        echo "Good afternoon!\n";
    } else {
        echo "Good evening!\n";
    }

#    $season = "Winter";
    $season = "Summer";    
    switch ($season) {
        case "Winter":
            echo "Frozen season\n";
            break;
        case "Fall":
            echo "cool season\n";
            break;  
        default: 
            echo "Other season\n";
    }

    $friends = array("Caroline", "Max");
    $friends[] = "Frank";
    print_r($friends);
    rsort($friends);
    var_dump($friends);
    echo count($friends);
    echo "\n";

    $heros = array("Batman", "Robin", "Batgirl");
    foreach ($heros as $hero) {
        echo $hero . ", ";
    }
    echo "\n";

    function sayHi($name) {
        echo "Hi there! $name\n\n";
    }
    sayHi("Kaz");
    echo strtolower("Here's the LOWDOWN.\n");

    $greetings = "Howdy y'all!\n";
    echo str_replace("y'all", "Joe", $greetings);
    echo substr($greetings, 0, 6);
    echo "\n";
    echo str_word_count($greetings);
    echo "\n";

    $items = explode(" ", $greetings);
    var_dump($items);
?>
