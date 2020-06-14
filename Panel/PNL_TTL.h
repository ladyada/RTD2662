
#define _DISPLAY_RATIO            _DISABLE

//--------------------------------------------------
#define _PANEL_DOUBLE_H             0

#ifdef __RTDACCESS__
//__SCALER__

//--------------------------------------------------
// Panel Style : 
//(_PANEL_TTL / _PANEL_HZ / _PANEL_LVDS / _PANEL_RSDS) |
//_AUTOCALC_PIXCLK |
//(_LVDS_MAP1 / _LVDS_MAP2) | 
//(_DISP_24_BIT / _DISP_18_BIT) |
//_RSDS_GC_SWAP |
//_RSDS_HL_SWAP |
//_RSDS_PN_SWAP |


//--------------------------------------------------
// Panel Configuration :
//_DHS_MASK |
//_DISP_EO_SWAP |
//_DISP_RB_SWAP |
//_DISP_ML_SWAP |
//(_DISP_SINGLE_PORT / _DISP_DOUBLE_PORT) |
//_DVS_INVERT |
//_DHS_INVERT |
//_DEN_INVERT,

//--------------------------------------------------

// 640x480
code PanelType Panel0 =
{
	// Panel Style
    _PANEL_TTL |		//_PANEL_TTL,_PANEL_HZ,_PANEL_LVDS,_PANEL_RSDS
    //_AUTOCALC_PIXCLK |
    _LVDS_MAP1 |		//_LVDS_MAP1,_LVDS_MAP2
    _DISP_24_BIT | 		//_DISP_24_BIT,_DISP_18_BIT
    //_RSDS_GC_SWAP |
   ///_RSDS_HL_SWAP |
    //_RSDS_PN_SWAP |
    0x00,                            

	// Panel Configuration
	//_DHS_MASK |
	//_DISP_EO_SWAP |
	//_DISP_RB_SWAP |
	//_DISP_ML_SWAP |
	_DISP_SINGLE_PORT |	//_DISP_SINGLE_PORT,_DISP_DOUBLE_PORT
	//_DVS_INVERT |
	//_DHS_INVERT |
	//_DEN_INVERT |
	0x00,


	32,         // Display Horizontal Start Position
	640,        // Display Horizontal Width

	852,        // Display Horizontal Total Clock Number in One Display Line

	852,        // Display Horizontal Total Clock Number in One Display Line for CVBS PAL
	852,        // Display Horizontal Total Clock Number in One Display Line for CVBS NTSC

	39,         // Display Vertical Start Position
	480,        // Display Vertical Height

	525,        // Display Vertical Total Line Number in One Frame

	16,         // Display H Sync Width
	3,          // Display V Sync Height

	25,         // Typical Pixel Clock in MHz

	1100,		// H Sync Max Freq Unit in 0.1 kHZ
	100,		// H Sync Min Freq Unit in 0.1 kHZ
	880,		// V Sync Max Freq Unit in 0.1 HZ
	490,		// V Sync Min Freq Unit in 0.1 HZ

    // TTL setting   
    //(2 << 4) |  // Delay
    (1 << 1) |    // DCLK output enable
    0x00,         // DCLK Polarity

};

//--------------------------------------------------
// 800x600
code PanelType Panel1 =
{
	// Panel Style
    _PANEL_TTL |		//_PANEL_TTL,_PANEL_HZ,_PANEL_LVDS,_PANEL_RSDS
    //_AUTOCALC_PIXCLK |
    _LVDS_MAP1 |		//_LVDS_MAP1,_LVDS_MAP2
    _DISP_24_BIT | 		//_DISP_24_BIT,_DISP_18_BIT
    //_RSDS_GC_SWAP |
    //_RSDS_HL_SWAP |
    //_RSDS_PN_SWAP |
    0x00,                            

	// Panel Configuration
	//_DHS_MASK |
	//_DISP_EO_SWAP |
	//_DISP_RB_SWAP |
	//_DISP_ML_SWAP |
	_DISP_SINGLE_PORT |	//_DISP_SINGLE_PORT,_DISP_DOUBLE_PORT
	//_DVS_INVERT |
	//_DHS_INVERT |
	//_DEN_INVERT |
	0x00,


	119,         // Display Horizontal Start Position
	800,        // Display Horizontal Width

	960,//1056,        // 1Display Horizontal Total Clock Number in One Display Line

	960,        // Display Horizontal Total Clock Number in One Display Line for CVBS PAL
	960,        // Display Horizontal Total Clock Number in One Display Line for CVBS NTSC

	39,         // Display Vertical Start Position
	480,        // Display Vertical Height

	525,        // Display Vertical Total Line Number in One Frame

	16,         // Display H Sync Width
	3,          // Display V Sync Height

	30,         // Typical Pixel Clock in MHz

	1100,		// H Sync Max Freq Unit in 0.1 kHZ
	100,		// H Sync Min Freq Unit in 0.1 kHZ
	880,		// V Sync Max Freq Unit in 0.1 HZ
	490,		// V Sync Min Freq Unit in 0.1 HZ

    // TTL setting   
    (3 << 4) |  // Delay
    (1 << 1) |    // DCLK output enable
    0x00,         // DCLK Polarity

};

//--------------------------------------------------
// 800x480
code PanelType Panel2 =
{
	// Panel Style
    _PANEL_TTL |		//_PANEL_TTL,_PANEL_HZ,_PANEL_LVDS,_PANEL_RSDS
    //_AUTOCALC_PIXCLK |
    _LVDS_MAP1 |		//_LVDS_MAP1,_LVDS_MAP2
    _DISP_24_BIT | 		//_DISP_24_BIT,_DISP_18_BIT
    //_RSDS_GC_SWAP |
    //_RSDS_HL_SWAP |
    //_RSDS_PN_SWAP |
    0x00,                            

	// Panel Configuration
	//_DHS_MASK |
	//_DISP_EO_SWAP |
	//_DISP_RB_SWAP |
	//_DISP_ML_SWAP |
	_DISP_SINGLE_PORT |	//_DISP_SINGLE_PORT,_DISP_DOUBLE_PORT
	//_DVS_INVERT |
	//_DHS_INVERT |
	//_DEN_INVERT |
	0x00,


	86,         // Display Horizontal Start Position
	800,        // Display Horizontal Width

	928,        // 1Display Horizontal Total Clock Number in One Display Line

	928,        // Display Horizontal Total Clock Number in One Display Line for CVBS PAL
	928,        // Display Horizontal Total Clock Number in One Display Line for CVBS NTSC

	36,         // Display Vertical Start Position
	500,        // Display Vertical Height

	525,        // Display Vertical Total Line Number in One Frame

	16,         // Display H Sync Width
	3,          // Display V Sync Height

	40,         // Typical Pixel Clock in MHz

	1100,		// H Sync Max Freq Unit in 0.1 kHZ
	100,		// H Sync Min Freq Unit in 0.1 kHZ
	880,		// V Sync Max Freq Unit in 0.1 HZ
	490,		// V Sync Min Freq Unit in 0.1 HZ

    // TTL setting   
    //(3 << 4) |  // Delay
    (1 << 1) |    // DCLK output enable
    0x01,         // DCLK Polarity


};

//--------------------------------------------------
// 800x480
code PanelType Panel3 =
{
	// Panel Style
    _PANEL_TTL |		//_PANEL_TTL,_PANEL_HZ,_PANEL_LVDS,_PANEL_RSDS
    //_AUTOCALC_PIXCLK |
    _LVDS_MAP1 |		//_LVDS_MAP1,_LVDS_MAP2
    _DISP_24_BIT | 		//_DISP_24_BIT,_DISP_18_BIT
    //_RSDS_GC_SWAP |
    //_RSDS_HL_SWAP |
    //_RSDS_PN_SWAP |
    0x00,                            

	// Panel Configuration
	  //_DHS_MASK |
	  //_DISP_EO_SWAP |
	  //_DISP_RB_SWAP |
	  //_DISP_ML_SWAP |
	  _DISP_SINGLE_PORT |	//_DISP_SINGLE_PORT,_DISP_DOUBLE_PORT
	  _DVS_INVERT |       // pulse low
	  _DHS_INVERT |       // pulse low
	  //_DEN_INVERT |
	  0x00,


	86,         // Display Horizontal Start Position
	800,        // Display Horizontal Width

	928,        // 1Display Horizontal Total Clock Number in One Display Line

	928,        // Display Horizontal Total Clock Number in One Display Line for CVBS PAL
	928,        // Display Horizontal Total Clock Number in One Display Line for CVBS NTSC

	36,         // Display Vertical Start Position
	500,        // Display Vertical Height

	525,        // Display Vertical Total Line Number in One Frame

	16,         // Display H Sync Width
	3,          // Display V Sync Height

	40,         // Typical Pixel Clock in MHz

	1100,		// H Sync Max Freq Unit in 0.1 kHZ
	100,		// H Sync Min Freq Unit in 0.1 kHZ
	880,		// V Sync Max Freq Unit in 0.1 HZ
	490,		// V Sync Min Freq Unit in 0.1 HZ

    // TTL setting   
    //(3 << 4) |  // Delay
    (1 << 1) |    // DCLK output enable
    0x00,         // DCLK Polarity
};

//--------------------------------------------------
// Select panel
BYTE idata ucPanelSelect = 3;


//--------------------------------------------------
code PanelType *Panel[] = 
{
     &Panel0,  // 640x480
     &Panel1,  // 800x600
	 &Panel2,  // 800x480
	 &Panel3,  // 800x480
};

//--------------------------------------------------
BYTE code g_ucPanelCnt = sizeof(Panel)/3;

#if(_VGA_EDID == _ON)
BYTE code tVGA_EDID_DATA[] =
{
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x4a, 0x8b, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01,
    0x1e, 0x0c, 0x01, 0x01, 0x0e, 0x24, 0x1b, 0x78, 0xe8, 0x8a, 0x01, 0x9a, 0x58, 0x52, 0x8b, 0x28,
    0x1e, 0x50, 0x54, 0xff, 0xff, 0x80, 0x61, 0x40, 0x61, 0x4f, 0x61, 0x59, 0x71, 0x4f, 0x81, 0x40,
    0x81, 0x59, 0x81, 0x99, 0xa9, 0x40, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x31, 0x37, 0x27, 0x27, 0x20,
    0x4c, 0x43, 0x44, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x4d, 0x6f, 0x6e,
    0x69, 0x74, 0x6f, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x2b,
    0x55, 0x14, 0x5c, 0x0e, 0x00, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xff,
    0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x31, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0xbd,
};
#endif

#if(_DVI_EDID == _ON)
BYTE code tDVI_EDID_DATA[] =
{
    0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x26,0xCD,0x68,0x46,0x00,0x00,0x00,0x00,
    0x23,0x0c,0x01,0x03,0x81,0x24,0x1D,0x78,0xeF,0x0D,0xC2,0xa0,0x57,0x47,0x98,0x27,
    0x12,0x48,0x4F,0xBF,0xEF,0x00,0x81,0x80,0x81,0x8F,0x61,0x40,0x61,0x59,0x45,0x40,
    0x45,0x59,0x31,0x40,0x31,0x59,0xBC,0x34,0x00,0x98,0x51,0x00,0x2A,0x40,0x10,0x90,
    0x13,0x00,0x68,0x22,0x11,0x00,0x00,0x1e,0x00,0x00,0x00,0xFF,0x00,0x30,0x0A,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0xFC,0x00,0x41,
    0x53,0x34,0x36,0x33,0x37,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0xFD,
    0x00,0x38,0x55,0x18,0x50,0x0E,0x00,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x06,
};
#endif

#if(_HDMI_EDID == _ON)
BYTE code tHDMI_EDID_DATA[] =
{
	0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x04, 0x81, 0xD2, 0x04,
	0x50, 0x2D, 0x31, 0x01, 0x14, 0x1E, 0x01, 0x04, 0x81, 0x2F, 0x1A, 0x78,
	0x2E, 0x35, 0x85, 0xA6, 0x56, 0x48, 0x9A, 0x24, 0x12, 0x50, 0x54, 0xAF,
	0xEF, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x3E, 0x0D, 0x20, 0x00, 0x31, 0xE0,
	0x37, 0x10, 0x2C, 0x58, 0x36, 0x00, 0xD6, 0x04, 0x11, 0x00, 0x00, 0x1E,
	0x00, 0x00, 0x00, 0xFF, 0x00, 0x30, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x38,
	0x4B, 0x1E, 0x53, 0x15, 0x00, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x41, 0x64, 0x61, 0x66, 0x72, 0x75, 0x69,
	0x74, 0x48, 0x44, 0x4D, 0x49, 0x0A, 0x01, 0xED, 0x02, 0x03, 0x21, 0x76,
	0x4E, 0x06, 0x07, 0x02, 0x03, 0x15, 0x96, 0x11, 0x12, 0x13, 0x04, 0x14,
	0x05, 0x1F, 0x90, 0x23, 0x09, 0x07, 0x07, 0x83, 0x01, 0x00, 0x00, 0x65,
	0x03, 0x0C, 0x00, 0x10, 0x00, 0x8C, 0x0A, 0xD0, 0x90, 0x20, 0x40, 0x31,
	0x20, 0x0C, 0x40, 0x55, 0x00, 0xB9, 0x88, 0x21, 0x00, 0x00, 0x18, 0x01,
	0x1D, 0x80, 0x18, 0x71, 0x1C, 0x16, 0x20, 0x58, 0x2C, 0x25, 0x00, 0xB9,
	0x88, 0x21, 0x00, 0x00, 0x9E, 0x01, 0x1D, 0x80, 0xD0, 0x72, 0x1C, 0x16,
	0x20, 0x10, 0x2C, 0x25, 0x80, 0xB9, 0x88, 0x21, 0x00, 0x00, 0x9E, 0x01,
	0x1D, 0x00, 0xBC, 0x52, 0xD0, 0x1E, 0x20, 0xB8, 0x28, 0x55, 0x40, 0xB9,
	0x88, 0x21, 0x00, 0x00, 0x1E, 0x02, 0x3A, 0x80, 0xD0, 0x72, 0x38, 0x2D,
	0x40, 0x10, 0x2C, 0x45, 0x80, 0xB9, 0x88, 0x21, 0x00, 0x00, 0x1E, 0x00,
	0x00, 0x00, 0x00, 0xCB
};
#endif//End of #if(_HDMI_EDID == _ON)

#else	// else of . #ifdef __MAIN__

extern code PanelType *Panel[];
extern BYTE code g_ucPanelCnt;
extern BYTE code tVGA_EDID_DATA[];
extern BYTE code tDVI_EDID_DATA[];
extern BYTE code tHDMI_EDID_DATA[];
extern BYTE idata ucPanelSelect;

#endif	// endif of . #ifdef __MAIN__




