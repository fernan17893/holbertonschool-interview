const request = require("request");

const movieId = process.argv[2];

const url = `https://swapi.dev/api/films/${movieId}`;

request(url, async (error, response, body) => {
  if (error) {
    console.error(error);
    return;
  }

  const film = JSON.parse(body);
  const characters = film.characters;

  for (const character of characters) {
    console.log(character.name);
  }
});
