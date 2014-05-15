(function ($) {
    Drupal.behaviors.addressBookForm = {
        attach: function (context, settings) {
            console.log(context, "context");
            console.log(settings, "settings");

            $(document).ready(function () {
                if (window.location.pathname == "/address-book/add") {
                    var $name = ('  #edit-name-fields');
                    var $photo = (' #edit-field-photo1-und-0-ajax-wrapper');
                    var $info = ('  #edit-info-fields');
                    var $save = ('  #edit-submit');
                    var $next = ('  #edit-next');
                    var $back = ('  #edit-back');
                    $(window).bind('load', function () {


                        $($photo).hide();
                        $($info).hide();
                        $($back).hide();
                        $($save).hide();
                    });


                    $($next).bind('click', function (e) {



                        if($($name).is(':visible')){
                            e.preventDefault();$($photo).show();
                        $($name).hide();$($back).show();
                        }

                        else if($($photo).is(':visible')){
                            e.preventDefault();
                            $($photo).hide();
                            $($info).show();
                            $($save).show();
                            $($next).hide();
                        }

                        else {

                            $(save).show();
                        }
                    });
                    $($back).bind('click', function (e) {





                        if($($photo).is(':visible')){
                            e.preventDefault();
                            $($photo).hide();
                            $($name).show();
                           $($save).hide();
                            $($back).hide();
                            $($next).show();
                        }

                        else {
                            e.preventDefault();
                            $($info).hide();
                            $($save).show();
                            $($photo).show();
                            $($photo).show();
                        }
                    });

                }

            });
        }
    };
})(jQuery);