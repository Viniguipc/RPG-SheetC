# Nome do executável final
TARGET = SheetC.exe

# Compilador que vamos usar
CC = gcc

# ---------------------------------------------------------
# CAMINHOS DA RAYLIB
# Substitua os caminhos abaixo pelas pastas reais onde você
# extraiu a Raylib no seu computador. Use barras normais (/).
# ---------------------------------------------------------
RAYLIB_INC = C:/Raylib/include
RAYLIB_LIB = C:/Raylib/lib

# Flags de compilação (Avisos ativados e caminho do raylib.h)
CFLAGS = -Wall -I"$(RAYLIB_INC)"

# Flags de linkagem (Onde estão os binários da Raylib e as dependências do Windows)
LDFLAGS = -L"$(RAYLIB_LIB)" -lraylib -lopengl32 -lgdi32 -lwinmm

# Procura automaticamente por todos os arquivos .c na pasta atual
SRCS = $(wildcard *.c)

# Troca a extensão de .c para .o (Arquivos objeto gerados no meio do processo)
OBJS = $(SRCS:.c=.o)

# A regra padrão que roda quando você digita apenas 'make'
all: $(TARGET)

# Regra para criar o executável final juntando todos os .o
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

# Regra para compilar cada arquivo .c individualmente em um arquivo .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar a sujeira (apagar o executável e os arquivos .o)
clean:
	rm -f $(OBJS) $(TARGET)

# Regra para compilar e depois executar o programa
run: all
	./$(TARGET)