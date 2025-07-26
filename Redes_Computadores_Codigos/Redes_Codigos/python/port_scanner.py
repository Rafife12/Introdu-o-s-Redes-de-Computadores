import socket
host = '127.0.0.1'
for port in range(20, 1025):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.settimeout(0.5)
        result = s.connect_ex((host, port))
        if result == 0:
            print(f"Port {port} is open")
