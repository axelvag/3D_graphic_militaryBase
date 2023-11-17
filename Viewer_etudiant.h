#ifndef VIEWER_ETUDIANT_H
#define VIEWER_ETUDIANT_H

#include "Viewer.h"



class ViewerEtudiant : public Viewer
{
public:
    ViewerEtudiant();

    int init();
    int render();
    int update( const float time, const float delta );

protected:

    /* -----------------------------------------
     Pour creer un nouvel objet vous devez :

     1. declarer ici dans le fichier Viewer_etudiant.h
     le Mesh,
     la texture si besoin,
     une fonction 'init_votreObjet'
     une fonction 'draw_votreObjet(const Transform& T)'

     --- Rq : regarder comment cela est effectue dans le fichier Viewer.h


     2. Appeler la fonction 'init_votreObjet' dans la fonction 'init' du Viewer_etudiant.cpp
     --- Rq : regarder comment cela est effectue dans le fichier Viewer.cpp


     3. Appeler la fonction 'draw_votreObjet' dans la fonction 'render' du Viewer_etudiant.cpp
     --- Rq : regarder comment cela est effectue dans le fichier Viewer.cpp

      ----------------------------------------- */
    Point tabtree[70];

    /// Declaration des Mesh
    Mesh m_disque;
    Mesh m_cylindre;
    Mesh m_cone;
    Mesh m_sphere;
    Mesh m_terrain;
    Mesh m_tree;
    Mesh m_cubemap;

    /// Declaration des Textures
    GLuint t_terrain;
    GLuint t_tree;
    GLuint t_cubemap;
    GLuint t_cube_militaire;
    GLuint t_cube_hangare;
    GLuint t_cube_militaire3;
    GLuint t_missile;



    /// Declaration des fonction de creation de Mesh du type init_votreObjet()
    void init_disque();
    void init_cylinder();
    void init_cone();
    void init_sphere();
    void init_terrain(Mesh& m_terrain, const Image& im);
    void init_tree();
    void init_alltree(const Image& im);
    void init_cubemap();

    /// Declaration des fonctions draw_votreObjet(const Transform& T)
    void draw_disque(const Transform& T);
    void draw_cylinder(const Transform& T, unsigned int tex);
    void draw_cone(const Transform& T, unsigned int tex);
    void draw_sphere(const Transform& T);
    void draw_fusee(const Transform& T, GLuint t_missile);
    void draw_terrain(const Transform &T, GLuint t_terrain);
    void draw_tree(Transform &T, GLuint tree);
    void draw_alltree(Transform &T, GLuint tree);
    void draw_cubemap(Transform &T, GLuint cubemap);
    void draw_cube_militaire(Transform& T, GLuint t_cube_militaire);

};



#endif
