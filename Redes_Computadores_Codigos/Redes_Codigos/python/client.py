import socket
host = 'localhost'
port = 12345
s = socket.socket()
s.connect((host, port))
print(s.recv(1024).decode())
s.close()
