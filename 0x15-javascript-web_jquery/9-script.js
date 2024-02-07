$(document).ready(function () {
  $.ajax({
    url: 'https://fourtonfish.com/hellosalut/?lang=fr',
    type: 'GET',
    dataType: 'text',
    success: function (response) {
      $('#hello').text(response);
    }
  });
});
