//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"🔈", "~/.local/bin/volume",						0,		10},

	/* Get weather forecast for current location */
	{"", "~/.local/bin/get_forecast",					3600,		0},

	{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	/*{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},*/
	{"", "date +'%F (%a) %R'",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
