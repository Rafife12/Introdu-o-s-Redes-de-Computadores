import socket
host = 'localhost'
port = 12345
s = socket.socket()
s.bind((host, port))
s.listen(1)
conn, addr = s.accept()
print(f"Connection from {addr}")
conn.send(b'Hello from server!')
conn.close()
