<?php

class Fibonacci
{
    public $fibonacciCache = [];

    public function __construct($n)
    {
        for ($i = 0; $i <= $n; $i++) {
            $this->fibonacciCache[$i] = 0;
        }
        echo $this->fib($n);
    }

    public function fib(int $n)
    {
        if ($n === 1 || $n === 2) {
            return 1;
        }

        if ($this->fibonacciCache[$n] != 0) {
            return $this->fibonacciCache[$n];
        }

        $result = $this->fib($n - 1) + $this->fib($n - 2);

        $this->fibonacciCache[$n] = $result;

        return $result;
    }
}

new Fibonacci(50);
