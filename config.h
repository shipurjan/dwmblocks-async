#define CMDLENGTH 45
#define DELIMITER " / "
#define CLICKABLE_BLOCKS

#define BASEPATH "/home/cyprian/.config/dwmblocks-async/statusbar/"

const Block blocks[] = {
  BLOCK(BASEPATH "sb-steamprice 'Antwerp' "
    "'https://steamcommunity.com/market/listings/730/Antwerp%202022%20Challengers%20Sticker%20Capsule'", 
                                                    600,  24),
	BLOCK(BASEPATH "sb-price 'xmr' 'Monero' 'XMR'",   600,  23),
	BLOCK(BASEPATH "sb-cpubars",                      1,    22),
	BLOCK(BASEPATH "sb-disk /",                       600,  21),
	BLOCK(BASEPATH "sb-disk /home",                   600,  20),
	BLOCK(BASEPATH "sb-memory",                       1,   19),
	BLOCK(BASEPATH "sb-volume",                       0,    17),
	BLOCK(BASEPATH "sb-clock",                        1,    18),
};
