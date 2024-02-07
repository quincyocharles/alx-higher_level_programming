$(document).ready(function () {
  $.ajax({
    url: "https://swapi-api.alx-tools.com/api/films/?format=json",
    type: "GET",
    dataType: "json",
    success: function (response) {
      const movies = response.results;
      $.each(movies, function (index, movie) {
        const title = movie.title;
        $("#list_movies").append("<li>" + title + "</li>");
      });
    },
    error: function (xhr, status, error) {
      console.log(error);
    },
  });
});
