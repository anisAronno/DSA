<?php
$a = [1, 2, 3];
$b = [3, 2, 1];

function sum($a, $b)
{
    $res=[0,0];
    foreach ($a as $key=>$aValue) {
        if ($aValue == $b[$key]) {
            continue;
        } elseif ($aValue > $b[$key]) {
            $res[0]+=1;
        } elseif ($aValue < $b[$key]) {
            $res[1]+=1;
        }
    }

    return join(',', $res);
}

echo sum($a, $b)

?>
 