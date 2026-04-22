//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/	/*Update Signal*/
	{"",		"sleep 0.1 && $SCRIPTS/dunststatus.sh",		0,			2},
	{"",		"$SCRIPTS/language.sh",				0,			0},
	{"",		"$SCRIPTS/system-stats.sh",			5,			0},
	{"",		"$SCRIPTS/volume.sh --status",		0,			11},
	{"",		"$SCRIPTS/vpn.sh --status",			0,			3},
	{"",		"$SCRIPTS/battery.sh",				30,			0},
	{"",		"$SCRIPTS/time.sh",				1,			0},
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
