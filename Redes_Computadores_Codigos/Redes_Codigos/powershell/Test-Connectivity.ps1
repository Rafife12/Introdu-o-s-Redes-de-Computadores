$hosts = "8.8.8.8", "1.1.1.1", "google.com"
foreach ($host in $hosts) {
    if (Test-Connection -ComputerName $host -Count 1 -Quiet) {
        Write-Output "$host is reachable"
    } else {
        Write-Output "$host is unreachable"
    }
}
