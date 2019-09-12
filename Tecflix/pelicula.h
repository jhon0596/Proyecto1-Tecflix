#ifndef PELICULA_H
#define PELICULA_H

#include <QString>
class pelicula
{
public:
    pelicula();
    QString getColor() const;
    void setColor(const QString &value);

    QString getDirector() const;
    void setDirector(const QString &value);

    int getNumeroCriticas() const;
    void setNumeroCriticas(int value);

    int getDuracion() const;
    void setDuracion(int value);

    int getDirectorFacebookLikes() const;
    void setDirectorFacebookLikes(int value);

    QString getActor2Name() const;
    void setActor2Name(const QString &value);

    int getActor1FacebookLikes() const;
    void setActor1FacebookLikes(int value);

    int getGross() const;
    void setGross(int value);

    QString getGenero() const;
    void setGenero(const QString &value);

    QString getActor1Name() const;
    void setActor1Name(const QString &value);

    QString getMovieTitle() const;
    void setMovieTitle(const QString &value);

    int getNumVotedUser() const;
    void setNumVotedUser(int value);

    int getCastTotalFacebookLikes() const;
    void setCastTotalFacebookLikes(int value);

    QString getActor3Name() const;
    void setActor3Name(const QString &value);

    int getFacenumberInPoster() const;
    void setFacenumberInPoster(int value);

    QString getPlotKeywords() const;
    void setPlotKeywords(const QString &value);

    QString getMovie_imdb_link() const;
    void setMovie_imdb_link(const QString &value);

    int getNumUserForReviews() const;
    void setNumUserForReviews(int value);

    QString getLanguage() const;
    void setLanguage(const QString &value);

    QString getCountry() const;
    void setCountry(const QString &value);

    QString getContentRating() const;
    void setContentRating(const QString &value);

    int getBudget() const;
    void setBudget(int value);

    int getTitleYear() const;
    void setTitleYear(int value);

    int getActor2FacebookLikes() const;
    void setActor2FacebookLikes(int value);

    int getImdbScore() const;
    void setImdbScore(int value);

    double getAspectRatio() const;
    void setAspectRatio(double value);

    int getMovieFacebookLikes() const;
    void setMovieFacebookLikes(int value);

private:
    QString color;
    QString director;
    int numeroCriticas;
    int duracion;
    int directorFacebookLikes;
    QString actor2Name;
    int actor1FacebookLikes;
    int gross;
    QString genero;
    QString actor1Name;
    QString movieTitle;
    int numVotedUser;
    int castTotalFacebookLikes;
    QString actor3Name;
    int facenumberInPoster;
    QString plotKeywords;
    QString movie_imdb_link;
    int numUserForReviews;
    QString language;
    QString country;
    QString contentRating;
    int budget;
    int titleYear;
    int actor2FacebookLikes;
    int imdbScore;
    double aspectRatio;
    int movieFacebookLikes;


};

#endif // PELICULA_H
