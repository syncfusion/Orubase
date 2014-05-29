package syncfusion.Orubase.ImageEditor;

import orubase.Native.Android.*;
import android.os.Bundle;
import android.content.res.*;


public class ImageEditor extends OrubaseAppManager {

	Resources resources;
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
		resources=getResources();
		OrubaseAppManager.enableSplashScreen=true;	
        if(getResources().getConfiguration().orientation == Configuration.ORIENTATION_PORTRAIT)
       	 	OrubaseAppManager.splashDrawableImage=resources.getDrawable(R.drawable.splash_portrait);
        else
       	 	OrubaseAppManager.splashDrawableImage = resources.getDrawable(R.drawable.splash_landscape);    

		if(!OrubaseAppManager.isXLargeDevice)
			OrubaseAppManager.OrientationMode = OrientationModes.Portrait;
		addHome(this,"file:///android_asset/WebApplication/Camera.html");
    }

	
	public void onConfigurationChanged(Configuration newConfig) {
		// TODO Auto-generated method stub
		super.onConfigurationChanged(newConfig);
		if(newConfig.orientation == Configuration.ORIENTATION_PORTRAIT)
			OrubaseAppManager.splashDrawableImage = resources.getDrawable(R.drawable.splash_portrait);
		else
			OrubaseAppManager.splashDrawableImage = resources.getDrawable(R.drawable.splash_landscape);
	}
}