Advanced Trading without Combine Bars.

This is the edited version of advanced trading, i have deleted the combines bars.

Installation:
1 Open your custom compiles.sqf fin this line:

    call compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\AdvancedTrading\defaultInit.sqf";

  Change to this:

     call compile preprocessFileLineNumbers "dayz_code\actions\AdvancedTrading\defaultInit.sqf";

 2 Open your description.ext put this line at the bottom of the file:

       #include "dayz_code\actions\AdvancedTrading\trading_dialog.hpp"

 3 Oepn your custopm fnselActions.sqf find this line:

       _buyV = player addAction [localize "STR_EPOCH_PLAYER_289", "\z\addons\dayz_code\actions\AdvancedTrading\init.sqf",(_traderMenu select 0), 999, true, false];

 replace by this line:

       _buyV = player addAction [localize "STR_EPOCH_PLAYER_289", "dayz_code\actions\AdvancedTrading\init.sqf",(_traderMenu select 0), 999, true, false];

 4 download the folder and put this in your dayz_code folder.

 Done.
