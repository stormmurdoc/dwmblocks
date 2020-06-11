//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
   {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
   {"",	"db_sytemd.sh",	                        0,	7},
   {"",	"db_pacpackages.sh",	                0,	8},
   {"",	"db_news.sh",		                    0,	6},
   {"",	"db_bandwith3.sh",	                    2,	13},
   {"",	"db_music.sh",	                        11,	11},
   {"",	"db_wlan.sh",	                        1,	16},
   {"",	"db_cpu.sh",		                    10,	18},
   {"",	"db_battery.sh",	                    5,	3},
   {"",	"db_clock.sh",	                        60,	1},
   {"",	"db_volume.sh",	                        0,	10},
   /*
   {"",	"moonphase",	18000,	17},
   {"",	"memory",	10,	14},
   {"",	"internet",	5,	4},
   {"",	"help-icon",	0,	15},
   {"",	"weather",	18000,	5},
   {"",	"mailbox",	180,	12},
   */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
