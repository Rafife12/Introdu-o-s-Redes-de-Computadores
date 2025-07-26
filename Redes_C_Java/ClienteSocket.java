
import java.io.*;
import java.net.*;

public class ClienteSocket {
    public static void main(String[] args) {
        String servidor = "google.com";
        int porta = 80;
        try (Socket socket = new Socket(servidor, porta)) {
            System.out.println("Conectado ao servidor " + servidor + " na porta " + porta);
        } catch (IOException e) {
            System.out.println("Erro ao conectar: " + e.getMessage());
        }
    }
}
