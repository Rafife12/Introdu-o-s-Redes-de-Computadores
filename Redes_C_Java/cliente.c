
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main() {
    int socket_desc;
    struct sockaddr_in server;
    char *message;

    // Cria o socket
    socket_desc = socket(AF_INET, SOCK_STREAM, 0);
    if (socket_desc == -1) {
        printf("Não foi possível criar o socket");
    }

    server.sin_addr.s_addr = inet_addr("216.58.202.110"); // google.com
    server.sin_family = AF_INET;
    server.sin_port = htons(80);

    // Conectar ao servidor remoto
    if (connect(socket_desc, (struct sockaddr *)&server, sizeof(server)) < 0) {
        puts("Erro na conexão");
        return 1;
    }

    puts("Conectado com sucesso");
    return 0;
}
