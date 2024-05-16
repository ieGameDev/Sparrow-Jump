mergeInto(LibraryManager.library, {

  TypeOfDevice: function () {
    var isMobile = ysdk.deviceInfo.isMobile();
    var deviceType = isMobile ? 1 : 0;
    myGameInstance.SendMessage('Yandex', 'SetDevice', deviceType);
  },

  ShowAdv : function(){
      ysdk.adv.showFullscreenAdv({
        callbacks: {
        onClose: function(wasShown) {
          console.log("----------closed----------");
          // some action after close
        },
        onError: function(error) {
          // some action on error
        }
      }
    })
  },  

});