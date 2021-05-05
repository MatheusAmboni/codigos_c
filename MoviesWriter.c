#include<stdio.h>
#include<stdlib.h>

struct Movies{
    int movie_id;
    char title[50]; 
    char director[50];
};

void printMovie(struct Movies movie,int n);
void printMovie(struct Movies movie,int n){
    printf("\n\n_________Filme %d__________\n",n);
    printf("codigo(movie_id): %d\n",movie.movie_id);
    printf("titulo(title) :%s\n",movie.title);
    printf("diretor (director) :%s\n",movie.director);
    return;
};

int main(){
    FILE *filePtr;
    filePtr = fopen("movies.txt", "w");
    const int lib_size=4;
    struct Movies lib[lib_size];
    int i;
    for(i=0;i<lib_size;i++){
        printf("\n Insira dados para os filmes  %i:\n",i); 
        lib[i].movie_id=0+i;
        printf("\n titulo do filme:");
        scanf("%s",lib[i].title);
        printf("\n autor do livro:");
        scanf("%s",lib[i].director);
    }
    printf("\n---conteudo do vetor lib:---");
    for(i=0;i<lib_size;i++){
        printMovie(lib[i],i);
        fprintf(filePtr, " %d, %s, %s \n", lib[i].movie_id, lib[i].title, lib[i].director);
    } 
    return 0;
}  
