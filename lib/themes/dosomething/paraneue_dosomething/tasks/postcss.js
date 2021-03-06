module.exports = {
  all: {
    src: "dist/app.min.css",
    options: {
      map: false,
      processors: [
        require('autoprefixer-core')({
          browsers: ['last 4 versions', 'Firefox ESR', 'Opera 12.1']
        }).postcss,
        require('css-mqpacker').postcss
      ]
    }
  }
};
