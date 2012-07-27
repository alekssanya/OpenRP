//OpenRP Bitvalues begin here, each number is x2, beginning at 1.
#define ADMIN_KICK					1 // /amkick
#define ADMIN_BAN					2 // /amban
#define ADMIN_TELEPORT				4 // /amtele
#define ADMIN_SEARCHCHAR			8 // /searchChar
#define ADMIN_SLEEP					16 // /amsleep
#define ADMIN_MUTE					32 // /ammute
#define ADMIN_SLAP					64 // /amslap
#define ADMIN_GRANTREMOVEADMIN		128 // Grant or remove admin
#define ADMIN_MAP					256 // /map
#define ADMIN_XP					512 // XP related
#define ADMIN_PROTECT				1024 // /amprotect
#define ADMIN_ANNOUNCE				2048 // /amannounce
#define ADMIN_WARN					4096 // /amwarn
#define ADMIN_EMPOWER				8192 // /amemp
#define ADMIN_MERC				    16384 // /ammerc
#define ADMIN_CHEATS				32768 // Cheat commands related
#define	ADMIN_ADMINWHOIS			65536 // /amadminwhois
#define ADMIN_SCALE					131072 // amscale
#define ADMIN_BITVALUES				262144 // ambitvalues
#define ADMIN_ADDEFFECT				524288 // /amaddeffect
#define ADMIN_FORCETEAM				1048576 // /amforceteam
#define ADMIN_WEATHER				2097152 // /amweather
#define ADMIN_STATUS				4194304 // /amstatus
#define ADMIN_RENAME				8388608 // /amrename
#define	ADMIN_FACTION				16777216 // Faction related
#define ADMIN_CREDITS				33554432 // Credits related
#define ADMIN_ITEM					67108864 // Item related
#define ADMIN_MUSIC					134217728 // /ammusic
#define ADMIN_BOUNTY				268435456 // /bounty remove
#define ADMIN_SHAKE					536870912 // /amshakescreen

//OpenRP Bitvalues End Here.

//Flags for player states
#define PLAYER_NORMAL				1 //There are no states affecting this player.
#define PLAYER_SLEEPING					2 //This player has been put to sleep.
#define PLAYER_MUTED					4 //This player has been muted.
#define PLAYER_EMPOWERED				8 //This player is empowered.
#define PLAYER_MERCD					16 //This player is mercd.

void M_HolsterThoseSabers(gentity_t *ent);