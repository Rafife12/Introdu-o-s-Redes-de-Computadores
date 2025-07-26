#!/bin/bash
for ip in 192.168.0.{1..5}; do
  ping -c 1 $ip &> /dev/null && echo "$ip is reachable" || echo "$ip is unreachable"
done
