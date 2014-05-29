    $(document).delegate("div[data-role='page']","pagebeforeshow", function (e) {
		 if (!sf.isMobile()) {
            sf.getCurrentPage().addClass("sf-tablet");
			             
        }	
    });
