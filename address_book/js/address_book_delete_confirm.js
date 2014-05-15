(function ($) {
    Drupal.behaviors.addressBookFormDelete = {
        attach: function (context, settings) {
           // console.log(context, "context");
          //  console.log(settings, "settings");

            $(document).ready(function () {
                if (window.location.pathname == "/address-book") {


                    var $delete = (' .views-field-nothing-1');


                    $($delete).bind('click', '#replace', (function(event){
                        return confirm('Are you sure you want to delete contact?')
                    }));
                }

            });

        }
    };
})(jQuery);