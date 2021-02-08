$('#isotope-container').isotope({});
$("#isotope-filters").on('click', 'button', function (e) {
    var filterValue = $(this).attr('data-filter');
    $("#isotope-container").isotope({
        filter: filterValue
    });
    $("#isotope-filters").find('.active').removeClass('active');
    $(this).addClass('active');
});

$("#technical-tuesday-wrapper").magnificPopup({
    delegate: 'a',
    type: 'image',
    gallery: {
        enabled: true
    },
    zoom: {
        enabled: true,
    }
});
