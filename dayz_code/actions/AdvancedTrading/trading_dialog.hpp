class ZSC_RscText {
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	type = 0;
	style = 0;
	shadow = 1;
	colorShadow[] = {0, 0, 0, 0.5};
	font = "Zeppelin32";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	colorText[] = {1, 1, 1, 1.0};
	colorBackground[] = {0, 0, 0, 0};
	linespacing = 1;
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
};
class ZSC_RscShortcutButton {
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	color[] = {1, 1, 1, 1.0};
	colorFocused[] = {1, 1, 1, 1.0};
	color2[] = {0.95, 0.95, 0.95, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorBackground[] = {0.3843, 0.7019, 0.8862, 1};
	colorBackgroundFocused[] = {0.3843, 0.7019, 0.8862, 1};
	colorBackground2[] = {1, 1, 1, 1};
	periodFocus = 1.2;
	periodOver = 0.8;
	class HitZone {
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
};
class ShortcutPos {
	left = 0;
    top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
	w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
	h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos {
		left = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	period = 0.4;
	font = "Zeppelin32";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	action = "";
    class Attributes {
	    font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	class AttributesImage {
    	font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
	};
	soundPush[] = {"", 0, 1};
		soundEnter[] = {"", 0, 1};
		soundClick[] = {"", 0, 1};
		soundEscape[] = {"", 0, 1};
		sound[] = {"", 0, 1};
	};	
class ZSC_RscButtonMenu : ZSC_RscShortcutButton {
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
    colorBackground[] = {0.3843, 0.7019, 0.8862, 0.5};
	colorBackgroundFocused[] = {0.9, 0.9, 0.9, 0.5};
	colorBackground2[] = {0.9, 0.9, 0.9, 0.5};
	color[] = {1, 1, 1, 1};
	colorFocused[] = {1, 1, 1, 1};
	color2[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	class TextPos {
		left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	class Attributes {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "center";
		shadow = "false";
	};
	class ShortcutPos {
		left = "(6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top = 0.005;
		w = 0.0225;
		h = 0.03;
	};
	textureNoShortcut = "";
};	
class ZSC_RscScrollBar {
	color[] = {1, 1, 1, 0.6};
	colorActive[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.3};
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};	
class ZSC_RscListBox {
	style = 0;
	idc = -1;
    type = 5;
	w = 0.275;
	h = 0.04;
	font = "Zeppelin32";
	colorSelect[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	colorBackground[] = {0.28, 0.28, 0.28, 0.28};
	colorSelect2[] = {1, 1, 1, 1};
	colorSelectBackground[] = {0.7, 0.7, 0.7, 0.5};
	colorSelectBackground2[] = {0.7, 0.7, 0.7, 0.5};
	colorScrollbar[] = {0.2, 0.2, 0.2, 1};
	wholeHeight = 0.45;
	rowHeight = 0.04;
	color[] = {0.7, 0.7, 0.7, 1};
	colorActive[] = {0, 0, 0, 1};
	colorDisabled[] = {0, 0, 0, 0.3};
	sizeEx = 0.023;
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	class ScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
		border = "\ca\ui\data\ui_border_scroll_ca.paa";
		shadow = 0;
	};
	class ListScrollBar : ZSC_RscScrollBar {
		color[] = {1, 1, 1, 1};
		autoScrollEnabled = 1;
	};
	    soundPush[] = {"", 0, 1};
    	soundEnter[] = {"", 0, 1};
		soundClick[] = {"", 0, 1};
		soundEscape[] = {"", 0, 1};
		sound[] = {"", 0, 1};
};
		class ZSC_RscEdit {
			type = 2;
			style = 0x00 + 0x40;
			font = "Zeppelin32";
			shadow = 2;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorBackground[] = {0, 0, 0, 1};
			colorText[] = {0.95, 0.95, 0.95, 1};
			colorDisabled[] = {1, 1, 1, 0.25};
			autocomplete = 0;
			colorSelection[] = {0.3843, 0.7019, 0.8862, 1};
			canModify = 1;
			soundPush[] = {"", 0, 1};
			soundEnter[] = {"", 0, 1};
			soundClick[] = {"", 0, 1};
			soundEscape[] = {"", 0, 1};
			sound[] = {"", 0, 1};
		};		
		class ZSC_RscStructuredText {
			type = 13;
			style = 0;
			x = 0;
			y = 0;
			h = 0.035;
			w = 0.1;
			text = "";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorText[] = {1, 1, 1, 1.0};
			shadow = 1;
			
			class Attributes {
				font = "Zeppelin32";
				color = "#ffffff";
				align = "left";
				shadow = 1;
			};
		};
	

class AdvancedTrading_dialog {
	idd = 711197;
	class Controls {
		class RscText_ATBackground1 {
			idc = -1;
			x = "0.20 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.40 * safezoneW";
			h = "0.70 * safezoneH";
			colorBackground[] = {0, 0, 0, 0.8};
			type = 0;
			colorText[] = {0.8784, 0.8471, 0.651, 1};
			text = "";
			fixedWidth = 0;
			style = 0;
			shadow = 2;
			font = "Zeppelin32";
			SizeEx = 0.03921;
		};
		class RscText_ATBackground2 : RscText_ATBackground1 {
			idc = -1;
			x = "0.60 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.20 * safezoneW";
			h = "0.70 * safezoneH";
		};
		class RscText_AT2 : ZSC_RscText {
			idc = -1;
			text = $STR_EPOCH_PLAYER_289;
			x = "0.20 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.60 * safezoneW";
			h = "0.04 * safezoneH";
			colorBackground[] = {0.3843, 0.7019, 0.8862, 0.5};
			colorText[] = {1, 1, 1, 1};
		};
		class RscText_Zupa_1 : ZSC_RscText {
			idc = 7408;
			text = $STR_EPOCH_TRADE_SELLING_GEAR;
			x = "0.21 * safezoneW + safezoneX";
			y = "0.22 * safezoneH + safezoneY";
			w = "0.38 * safezoneW";
			h = "0.05 * safezoneH";
			colorText[] = {1, 1, 1, 1};
    	};
		class ZSC_RscButtonMenu_Z1 : ZSC_RscButtonMenu {
			idc = -1;
			text = $STR_UI_GEAR;
			x = "0.21 * safezoneW + safezoneX";
			y = "0.26 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "[2] call Z_getContainer;";
		};
		class ZSC_RscButtonMenu_Z2 : ZSC_RscButtonMenu {
			idc = -1;
			text = $STR_EPOCH_TRADE_BACKPACK;
			x = "0.31 * safezoneW + safezoneX";
			y = "0.26 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
	    	onButtonClick = "[0] call Z_getContainer;";
		};
		class ZSC_RscButtonMenu_Z3 : ZSC_RscButtonMenu {
			idc = -1;
			text = $STR_DN_VEHICLE;
			x = "0.41 * safezoneW + safezoneX";
			y = "0.26 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "[1] call Z_getContainer;";
		};
		class ZSC_RscButtonMenu_Z4 : ZSC_RscButtonMenu {
			idc = 7416;
			text = $STR_EPOCH_PLAYER_292;
			x = "0.51 * safezoneW + safezoneX";
			y = "0.26 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "Z_CategoryView = true; Z_ResetContainer = true; call Z_ChangeBuySell;";
		};
		class RscText_AT6 : ZSC_RscText {
			idc = 7412;
			text = "";
			x = "0.21 * safezoneW + safezoneX";
			y = "0.30 * safezoneH + safezoneY";
			w = "0.30 * safezoneW";
			h = "0.03 * safezoneH";
			colorText[] = {1, 1, 1, 1};
		};
		class RscText_AT7 : ZSC_RscText {
			idc = 7413;
			text = "";
			x = "0.21 * safezoneW + safezoneX";
			y = "0.33 * safezoneH + safezoneY";
			w = "0.30 * safezoneW";
			h = "0.03 * safezoneH";
			colorText[] = {1, 1, 1, 1};
		};
		class ZSC_RscButtonMenu_BACK : ZSC_RscButtonMenu {
			idc = 7449;
			text = $STR_DISP_BACK;
			x = "0.21 * safezoneW + safezoneX";
			y = "0.33 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "Z_Selling = true; Z_CategoryView = true; call Z_ChangeBuySell;";
		};
		class RscText_AT8 : ZSC_RscText {
			idc = -1;
			text = $STR_EPOCH_TRADE_INVENTORY;
			x = "0.21 * safezoneW + safezoneX";
			y = "0.38 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.03 * safezoneH";
			colorText[] = {1, 1, 1, 1};
		};
		class RscText_AT9 : ZSC_RscText {
			idc = 7409;
			text = $STR_EPOCH_TRADE_SELLING;
			x = "0.46 * safezoneW + safezoneX";
			y = "0.38 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.03 * safezoneH";
			colorText[] = {1, 1, 1, 1};
		};
		class RscListbox_AT10 : ZSC_RscListBox {
			idc = 7401;
			idcLeft = -1;
			idcRight = -1;
			x = "0.21* safezoneW + safezoneX";
			y = "0.41 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.30 * safezoneH";
			soundSelect[] = {"", 0.1, 1};
			onLBSelChanged = "['sellable',(lbCurSel 7401)] call Z_getItemInfo";
    		class ListScrollBar : ZSC_RscScrollBar {};
		};
		class RscListbox_AT11 : ZSC_RscListBox {
			idc = 7402;
			x = "0.46 * safezoneW + safezoneX";
			y = "0.41* safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.30 * safezoneH";
			soundSelect[] = {"", 0.1, 1};
			onLBSelChanged = "['selling',(lbCurSel 7402)] call Z_getItemInfo";
			class ListScrollBar : ZSC_RscScrollBar {};
		};
		class RscListbox_AT20 : ZSC_RscListBox {
			idc = 7421;
			idcLeft = -1;
			idcRight = -1;
			x = "0.21* safezoneW + safezoneX";
			y = "0.41 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.30 * safezoneH";
			soundSelect[] = {"", 0.1, 1};
			onload = "ctrlShow [_this,false]";
			onLBDblClick = "if (Z_CategoryView) then {(lbCurSel 7421) call Z_fillCategoryList;};";
			onLBSelChanged = "if (!Z_CategoryView) then {['buyable',(lbCurSel 7421)] call Z_getItemInfo;};";
			class ListScrollBar : ZSC_RscScrollBar {};
		};
		class RscListbox_AT21 : ZSC_RscListBox {
			idc = 7422;
			x = "0.46 * safezoneW + safezoneX";
			y = "0.41* safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.30 * safezoneH";
			soundSelect[] = {"", 0.1, 1};
			onload = "ctrlShow [_this,false]";
			onLBSelChanged = "['buying',(lbCurSel 7422)] call Z_getItemInfo";
		};
		class RscSearchBackground : ZSC_RscListBox {
			idc = -1;
			x = "0.21 * safezoneW + safezoneX";
			y = "0.72 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.03 * safezoneH";
			soundSelect[] = {"", 0.1, 1};
	    	class ListScrollBar : ZSC_RscScrollBar {};
		};
		class Zupa_Filter_Edit : ZSC_RscEdit {
			idc = 7444;
			colorText[] = {1, 1, 1, 1};
			text = "";
			sizeEx = 0.03;
			x = "0.21 * safezoneW + safezoneX";
			y = "0.72 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.03 * safezoneH";
		};
		class ZSC_RscButtonMenu_ATTFilter : ZSC_RscButtonMenu {
			idc = 7498;
			text = $STR_UI_FILTER;
			x = "0.21 * safezoneW + safezoneX";
			y = "0.77 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			onButtonClick = "if (Z_CategoryView && !Z_Selling) then {(lbCurSel 7421) call Z_fillCategoryList} else {[(ctrlText 7444)] call Z_filterList};";
		};
		class ZSC_RscButtonMenu_AT12 : ZSC_RscButtonMenu {
			idc = 7430;
			text = " > ";
			x = "0.36 * safezoneW + safezoneX";
			y = "0.41 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "[(lbCurSel 7401)] call Z_pushItemToList;";
		};
		class ZSC_RscButtonMenu_AT14 : ZSC_RscButtonMenu {
			idc = 7431;
			text = " >> ";
			x = "0.36 * safezoneW + safezoneX";
			y = "0.49 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "call Z_pushAllToList;";
		};
		class ZSC_RscButtonMenu_AT13 : ZSC_RscButtonMenu {
			idc = 7432;
			text = " < ";
			x = "0.36 * safezoneW + safezoneX";
			y = "0.57 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "[(lbCurSel 7402)] call Z_removeItemFromList;";
		};
		class ZSC_RscButtonMenu_AT15 : ZSC_RscButtonMenu {
			idc = 7433;
			text = " << ";
			x = "0.36 * safezoneW + safezoneX";
			y = "0.65 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "call Z_removeAllToList;";
		};
		class ZSC_RscButtonMenu_ATT1 : ZSC_RscButtonMenu {
			idc = 7440;
			text = " > ";
			x = "0.36 * safezoneW + safezoneX";
			y = "0.41 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "[(lbCurSel 7421),(ctrlText 7441)] call Z_toBuyingList;";
			onload = "ctrlShow [_this,false]";
		};
		class Zupa_Amount_Edit : ZSC_RscEdit {
			idc = 7441;
			colorText[] = {1, 1, 1, 1};
			text = "1";
			sizeEx = 0.03;
			x = "0.36 * safezoneW + safezoneX";
			y = "0.49 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			h = "0.03 * safezoneH";
			onload = "ctrlShow [_this,false]";
		};
		class ZSC_RscButtonMenu_ATT3 : ZSC_RscButtonMenu {
			idc = 7442;
			text = " < ";
			x = "0.36 * safezoneW + safezoneX";
			y = "0.57 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "[(lbCurSel 7422)] call Z_removeItemFromBuyingList;";
    		onload = "ctrlShow [_this,false]";
		};
		class ZSC_RscButtonMenu_ATT4 : ZSC_RscButtonMenu {
			idc = 7443;
			text = " << ";
			x = "0.36 * safezoneW + safezoneX";
			y = "0.65 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			onButtonClick = "call Z_removeAllFromBuyingList;";
			onload = "ctrlShow [_this,false]";
		};
		class RscText_ATT8 : ZSC_RscStructuredText {
			idc = 7404;
			text = "";
			x = "0.45 * safezoneW + safezoneX";
			y = "0.32 * safezoneH + safezoneY";
			w = "0.15 * safezoneW";
    		h = "0.03 * safezoneH";
			colorText[] = {1, 1, 1, 1};
			onload = "ctrlShow [_this,false]";
		};
		class RscSearchBackground2 : ZSC_RscListBox {
			idc = -1;
			x = "0.46 * safezoneW + safezoneX";
			y = "0.72 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.03 * safezoneH";
			soundSelect[] = {"", 0.1, 1};
			class ListScrollBar : ZSC_RscScrollBar {};
		};
		class RscText_AT18 : ZSC_RscText {
			idc = 7410;
			text = $STR_EVAL_TYPENOTHING;
			x = "0.46 * safezoneW + safezoneX";
			y = "0.72 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.03 * safezoneH";
			colorText[] = {1, 1, 1, 1};
		};
		class ZSC_RscButtonMenu_AT16 : ZSC_RscButtonMenu {
			idc = 7435;
			text = $STR_EPOCH_PLAYER_292;
			x = "0.46 * safezoneW + safezoneX";
			y = "0.77 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			onButtonClick = "call Z_SellItems;";
		};
    	class ZSC_RscButtonMenu_AT27 : ZSC_RscButtonMenu {
			idc = 7436;
			text = $STR_EPOCH_PLAYER_291;
     		x = "0.46 * safezoneW + safezoneX";
			y = "0.77 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			onload = "ctrlShow [_this,false]";
			onButtonClick = "call Z_BuyItems;";
		};
		/*class ZSC_RscButtonMenu_AT28 : ZSC_RscButtonMenu {
			idc = -1;
			x = "0.63 * safezoneW + safezoneX";
			y = "0.77 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			onButtonClick = "[[],0,false,0,[],[],true] call Z_returnChange; ((ctrlParent (_this select 0)) closeDisplay 2); localize ""STR_EPOCH_PLAYER_307"" call dayz_rollingMessages;";
			text = $STR_EPOCH_PLAYER_306;
		};*/
		class ZSC_RscButtonMenu_AT29 : ZSC_RscButtonMenu {
			idc = -1;
			x = "0.63 * safezoneW + safezoneX";
			y = "0.80 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 2);";
			text = $STR_UI_CLOSE;
		};
		class RscStrText_AT_PriceInfo : ZSC_RscStructuredText {
			idc = 7451;
			text = "";
			x = "0.46 * safezoneW + safezoneX";
			y = "0.72 * safezoneH + safezoneY";
			w = "0.13 * safezoneW";
			h = "0.03 * safezoneH";
			colorText[] = {1, 1, 1, 1};
		};
		class RscText_AT_InfoLabel : ZSC_RscText {
			idc = 7488;
			text = $STR_EPOCH_TRADE_DETAILS;
			x = "0.60 * safezoneW + safezoneX";
			y = "0.38 * safezoneH + safezoneY";
			w = "0.20 * safezoneW";
			h = "0.03 * safezoneH";
			colorBackground[] = {0.3843, 0.7019, 0.8862, 0.5};
			colorText[] = {1, 1, 1, 1};
		};
		class RscText_AT_BreakLine : ZSC_RscText {
        	idc = -1;
			x = "0.60 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.0005 * safezoneW";
			h = "0.70 * safezoneH";
			colorBackground[] = {0.3843, 0.7019, 0.8862, 0.5};
		};
		class RscStrText_AT_ItemInfo : ZSC_RscStructuredText {
			idc = 7445;
			text = "";
			x = "0.61 * safezoneW + safezoneX";
			y = "0.43 * safezoneH + safezoneY";
			w = "0.19 * safezoneW";
			h = "0.59 * safezoneH";
			colorText[] = {1, 1, 1, 1};
		};
		class RscStrText_AT_ContainerInfo : ZSC_RscStructuredText {
			idc = 7446;
			text = "";
			x = "0.61 * safezoneW + safezoneX";
			y = "0.24 * safezoneH + safezoneY";
			w = "0.19 * safezoneW";
			h = "0.35 * safezoneH";
			colorText[] = {1, 1, 1, 1};
		};
	};
};