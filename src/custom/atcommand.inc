// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom Atcommands
 * Place the body of custom atcommands in this file.
 * Format:
 *	ACMD_FUNC(command_name)
 *	{
 *		<code>;
 *	}
 **/

//ACMD_FUNC(newcommand)
//{
//	clif_displaymessage(fd, "It works!");
//	clif_specialeffect(&sd->bl, EF_HEARTCASTING, AREA);
//	return 0;
//}

ACMD_FUNC(setrace)
{
	short race=0;
	nullpo_retr(-1, sd);
	race = atoi(message);


	if (!message || !*message || race < 0 || race >= CRACE_MAX) {
		clif_displaymessage(fd, "Invalid Race");
		return -1;
	}

	sd->status.custom_race = race;
	clif_displaymessage(fd, "Race set");
	return 0;
}
