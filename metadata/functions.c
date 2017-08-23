// am_map.c                 AUTOMAP
                void        AM_getIslope (mline_t* ml, islope_t* is);
                void        AM_activateNewScale (void);
                void        AM_saveScaleAndLoc (void);
                void        AM_saveScaleAndLoc (void);
                void        AM_restoreScaleAndLoc (void);
                void        AM_addMark (void);
                void        AM_findMinMaxBoundaries (void);
                void        AM_changeWindowLoc (void);
                void        AM_initVariables (void);
                void        AM_loadPics (void);
                            // Called by AM_Stop
                void        AM_unloadPics (void);
                void        AM_clearMarks (void);
                void        AM_LevelInit (void);
                            // Called to force the automap to quit if the level is completed while it is up.
                void        AM_Stop (void);
                void        AM_Start (void);
                void        AM_minOutWindowScale(void);
                void        AM_maxOutWindowScale(void);
                            // Called by main loop.
                boolean     AM_Responder (event_t* ev);
                            // Zooming
                void        AM_changeWindowScale (void);
                void        AM_doFollowPlayer (void);
                void        AM_updateLightLev (void);
                            // Updates on Game Tick (called by main loop.)
                void        AM_Ticker (void);
                            // Clear automap frame buffer.
                void        AM_clearFB(int color);
                            // Classic Bresenham with optimizations needed for speed
                boolean     AM_clipMline (mline_t* ml, fline_t* fl);
                void        AM_drawFline (fline_t* fl, int color);
                            // Clip lines, draw visible parts of lines.
                void        AM_drawMline (mline_t* ml, int color);
                            // Draws flat (floor/ceiling tile) aligned grid lines.
                void        AM_drawGrid (int color);
                            // Determines visible lines, draws them. This is LineDef based, not LineSeg based.
                void        AM_drawWalls (void);
                            // Used to rotate player arrow line character (rotation in 2D).
                void        AM_rotate ( fixed_t* x, fixed_t* y, angle_t a);
                void        AM_drawLineCharacter (mline_t* lineguy, int lineguylines, fixed_t scale, angle_t angle, int color, fixed_t x, fixed_t y);
                void        AM_drawPlayers (void);
                void        AM_drawThings (int colors, int colorrange);
                void        AM_drawMarks (void);
                void        AM_drawCrosshair (int color);
                            // Called by main loop (called instead of view drawer if automap active).
                void        AM_Drawer (void);
// d_main.c                 EVENT HANDLING
                            // Called by the I/O functions when input is detected
                void        D_PostEvent (event_t* ev);
                            // Send all the events of the given timestamp down the responder chain
                void        D_ProcessEvents (void);
                            // draw current display, possibly wiping it from the previous
                void        D_Display (void);
                void        D_DoomLoop (void);
                            // Handles timing for warped projection
                void        D_PageTicker (void);
                void        D_PageDrawer (void);
                            // Called after each demo or intro demosequence finishes
                void        D_AdvanceDemo (void);
                            // Cycles through the demo sequences.
                void        D_DoAdvanceDemo (void);
                            // The title screen shown when the game is started
                void        D_StartTitle (void);
                void        D_AddFile (char *file);
                            // Checks availability of IWAD files by name to determine whether registered/commercial features should be executed (notably loading PWADs).
                void        IdentifyVersion (void);
                void        FindResponseFile (void);
                void        D_DoomMain (void);
// d_net.c
                int         NetbufferSize (void);
                unsigned    NetbufferChecksum (void);
                int         ExpandTics (int low);
                void        HSendPacket (int node, int flags);
                boolean     HGetPacket (void);
                void        GetPackets (void);
                            // Builds ticcmds for console player, sends out a packet
                void        NetUpdate (void);
                void        CheckAbort (void);
                void        D_ArbitrateNetStart (void);
                            // Works out player numbers among the net participants
                void        D_CheckNetGame (void);
                            // Called before quitting to leave a net game, without hanging the other players
                void        D_QuitNetGame (void);
                void        TryRunTics (void);
// f_finale.c
                void        F_StartFinale (void);
                boolean     F_Responder (event_t *event);
                void        F_Ticker (void);
                void        F_TextWrite (void);
                void        F_StartCast (void);
                void        F_CastTicker (void);
                boolean     F_CastResponder (event_t* ev);
                void        F_CastPrint (char* text);
                void        F_CastDrawer (void);
                void        F_DrawPatchCol (int x, patch_t* patch, int col);
                void        F_BunnyScroll (void);
                void        F_Drawer (void);
// f_wipe.c
                void        wipe_shittyColMajorXform (short* array, int width, int height);
                int         wipe_initColorXForm (int width, int	height, int ticks);
                int         wipe_doColorXForm (int width, int height, int ticks);
                int         wipe_exitColorXForm (int width, int height, int ticks);
                int         wipe_initMelt (int width, int height, int ticks);
                int         wipe_doMelt (int width, int height, int ticks);
                int         wipe_exitMelt (int width, int height, int ticks);
                int         wipe_StartScreen (int x, int y, int width, int height);
                int         wipe_ScreenWipe (int wipeno, int x, int y, int width, int height, int ticks);
// g_game.c                 GAME LOOP FUNCTIONS, EVENT HANDLING ETC.
                boolean    boolean  emoStatus (void);
                void        G_ReadDemoTiccmd (ticcmd_t *cmd); 
                void        G_WriteDemoTiccmd (ticcmd_t *cmd); 
                void        G_PlayerReborn (int player); 
                void        G_InitNew (skill_t skill, int episode, int map); 
                void        G_DoReborn (int playernum); 
                void        G_DoLoadLevel (void); 
                void        G_DoNewGame (void); 
                void        G_DoLoadGame (void); 
                void        G_DoPlayDemo (void); 
                void        G_DoCompleted (void); 
                void        G_DoVictory (void); 
                void        G_DoWorldDone (void); 
                void        G_DoSaveGame (void); 
// hu_lib.c
                            // this function is empty
                void        HUlib_init (void);
                void        HUlib_clearTextLine (hu_textline_t* t);
                void        HUlib_initTextLine (hu_textline_t* t, int x, int y,patch_t** f, int sc);
                boolean     HUlib_addCharToTextLine (hu_textline_t* t, char ch);
                boolean     HUlib_delCharFromTextLine(hu_textline_t* t);
                void        HUlib_drawTextLine (hu_textline_t* l, boolean drawcursor);
                void        HUlib_eraseTextLine (hu_textline_t* l);
                void        HUlib_initSText (hu_stext_t* s, int x, int y, int h, patch_t** font, int startchar, boolean* on);
                void        HUlib_addLineToSText(hu_stext_t* s);
                void        HUlib_addMessageToSText (hu_stext_t* s, char* prefix, char* msg);
                void        HUlib_drawSText (hu_stext_t* s);
                void        HUlib_eraseSText (hu_stext_t* s);
                void        HUlib_initIText (hu_itext_t* it, int x, int y, patch_t** font, int startchar, boolean* on);
                void        HUlib_delCharFromIText(hu_itext_t* it);
                void        HUlib_eraseLineFromIText (hu_itext_t* it);
                void        HUlib_resetIText (hu_itext_t* it);
                void        HUlib_addPrefixToIText (hu_itext_t* it, char* str);
                boolean     HUlib_keyInIText (hu_itext_t* it, unsigned char ch);
                void        HUlib_drawIText (hu_itext_t* it);
                void        HUlib_eraseIText(hu_itext_t* it);
// hu_stuff.c
                void        HU_Stop (void);
                void        HU_Start (void);
                void        HU_Drawer (void);
                void        HU_Erase (void);
                void        HU_Ticker (void);
                void        HU_queueChatChar (char c);
                char        HU_dequeueChatChar (void);
                boolean     HU_Responder(event_t *ev);
// i_main.c
                int         main (int argc, char** argv);
// i_net.c
                int         UDPsocket (void);
                void        BindToLocalPort (int s, int port);
                void        PacketSend (void);
                void        PacketGet (void);
                int         GetLocalAddress (void);
                void        I_InitNetwork (void);
                void        I_NetCmd (void);
// i_sound.c
                void        myioctl (int fd, int command, int* arg);
                void*       getsfx (char* sfxname, int* len);
                int         addsfx (int sfxid, int volume, int step, int seperation);
                            // SFX API
                void        I_SetChannels();
                void        I_SetSfxVolume(int volume);
                            // MUSIC API - dummy. Some code from DOS version.
                void        I_SetMusicVolume(int volume);
                            // Retrieve the raw data lump index for a given SFX name.
                int         I_GetSfxLumpNum(sfxinfo_t* sfx);
                int         I_StartSound (int id int vol, int sep, int pitch, int priority);
                void        I_StopSound (int handle);
                int         I_SoundIsPlaying (int handle);
                void        I_UpdateSound (void);
                void        I_SubmitSound (void);
                void        I_UpdateSoundParams (int handle, int vol, int sep, int pitch);
                void        I_ShutdownSound (void);
                void        I_InitSound();
                            // Music API. Dummies.
                void        I_InitMusic(void) { };
                void        I_ShutdownMusic(void) { };
                void        I_PlaySong (int handle, int looping);
                void        I_PauseSong (int handle);
                void        I_ResumeSong (int handle);
                void        I_StopSong(int handle);
                void        I_UnRegisterSong(int handle);
                int         I_RegisterSong(void* data);
                            // Is the song playing?
                int         I_QrySongPlaying(int handle);
                            // Interrupt handler.
                void        I_HandleSoundTimer (int ignore);
                            // Get the interrupt. Set duration in millisecs.
                int         I_SoundSetTimer (int duration_of_tick);
                            // Remove the interrupt. Set duration to zero.
                void        I_SoundDelTimer (void);       
// i_system.c               SYSTEM SPECIFIC INTERFACE STUFF.
                            // Unused
                void        I_Tactile (int on, int off, int total);
                ticcmd_t*	I_BaseTiccmd (void);
                int         I_GetHeapSize (void);
                byte*       I_ZoneBase (int* size);
                            // returns time in 1/70th second tics
                int         I_GetTime (void);
                void        I_Init (void);
                void        I_Quit (void);
                void        I_WaitVBL(int count);
                void        I_BeginRead(void);
                void        I_EndRead(void);
                byte*       I_AllocLow(int length);
                void        I_Error (char *error, ...);
// i_video.c                DOOM graphics stuff for X11, UNIX.
                            //  Translates the key currently in X_event
                int         xlatekey(void);
                void        I_ShutdownGraphics(void);
                            // Empty!
                void        I_StartFrame (void);
                void        I_GetEvent(void);
                Cursor      createnullcursor (Display* display, Window root);
                void        I_StartTic (void);
                void        I_UpdateNoBlit (void);
                void        I_FinishUpdate (void);
                void        I_ReadScreen (byte* scr);
                void        UploadNewPalette(Colormap cmap, byte *palette);
                void        I_SetPalette (byte* palette);
                void        grabsharedmemory(int size);
                void        I_InitGraphics(void);
                void        InitExpand (void);
                void        InitExpand2 (void);
                void        Expand4 (unsigned* lineptr, double* xline);
// info.c                   DEFINITION OF THINGS
// m_argv.c                 
                int         M_CheckParm (char *check);
// m_bbox.c                 
                void        M_ClearBox (fixed_t *box);
                void        M_AddToBox (fixed_t*box, fixed_t x, fixed_t y);
// m_cheat.c                CHEAT SEQUENCE CHECKING
                            // Called in st_stuff module, which handles the input. Returns 1 if the cheat was successful, 0 if failed.
                int         cht_CheckCheat (cheatseq_t* cht, char key);
                void        cht_GetParam (cheatseq_t* cht, char* buffer);
// m_fixed.c
                fixed_t     FixedMul (fixed_t a, fixed_t b);
                fixed_t     FixedDiv (fixed_t a, fixed_t b);
                fixed_t     FixedDiv2 (fixed_t a, fixed_t b);
// m_menu.c                 SELECTION MENU, OPTIONS, EPISODES, SLICES, ICONS, ...
                            // Read the strings from the savegame files
                void        M_ReadSaveStrings(void);
                void        M_DrawLoad(void);
                            // Draw border for the savegame description 
                void        M_DrawSaveLoadBorder(int x,int y);
                            // User wants to load this game
                void        M_LoadSelect(int choice);
                            // Selected from DOOM menu
                void        M_LoadGame (int choice);
                void        M_DrawSave(void);
                            // M_Responder calls this when user is finished
                void        M_DoSave(int slot);
                            // User wants to save. Start string input for M_Responder
                void        M_SaveSelect(int choice);
                            // Selected from DOOM menu
                void        M_SaveGame (int choice);
                void        M_QuickSaveResponse(int ch);
                void        M_QuickSave(void);
                void        M_QuickLoadResponse(int ch);
                void        M_QuickLoad(void);
                void        M_DrawReadThis1(void);
                void        M_DrawReadThis2(void);
                            // Change Sfx & Music volumes
                void        M_DrawSound(void);
                void        M_Sound(int choice);
                void        M_SfxVol(int choice);
                void        M_MusicVol(int choice);
                void        M_DrawMainMenu(void);
                void        M_DrawNewGame(void);
                void        M_NewGame(int choice);
                void        M_DrawEpisode(void);
                            // Probably after user has confirmed they want to choose nightmare
                void        M_VerifyNightmare(int ch);
                void        M_ChooseSkill(int choice);
                void        M_Episode(int choice);
                void        M_DrawOptions(void);
                void        M_Options(int choice);
                void        M_ChangeMessages(int choice);
                void        M_EndGameResponse(int ch);
                void        M_EndGame(int choice);
                void        M_ReadThis(int choice);
                void        M_ReadThis2(int choice);
                void        M_FinishReadThis(int choice);
                            // Registers user's response when prompted if they really want to quit + play quit sound
                void        M_QuitResponse(int ch);
                void        M_QuitDOOM(int choice);
                            // Mouse sensitivity
                void        M_ChangeSensitivity(int choice);
                void        M_ChangeDetail(int choice);
                void        M_SizeDisplay(int choice);
                            // Menu functions
                void        M_DrawThermo (int x, int y, int thermWidth, int thermDot);
                void        M_DrawEmptyCell (menu_t* menu, int item);
                void        M_DrawSelCell (menu_t* menu, int item);
                void        M_StartMessage (char* string, void* routine, boolean input);
                void        M_StopMessage(void);
                            // Find string width from hu_font chars
                int         M_StringWidth(char* string);
                            // Find string height from hu_font chars
                int         M_StringHeight(char* string);
                            // Write a string using the hu_font
                void        M_WriteText (int x, int y, char* string);
                            // Sets value of ch based on ev (we are talking about keyboard keys such as down arrow and enter)
                            // Listens to key strokes for messages that ask confirmation
                            // Opens the menu, menu navigation, take screenshots, screen size, etc.
                            // Called by main loop,
                            // saves config file and calls I_Quit when user exits.
                            // Even when the menu is not displayed,
                            // this can resize the view and change game parameters.
                            // Does all the real work of the menu interaction.
                boolean     M_Responder (event_t* ev);
                            // Called by intro code to force menu up upon a keypress
                void        M_StartControlPanel (void);
                            // Called by main loop
                            // Draws the menus directly into the screen buffer.
                void        M_Drawer (void);
                            // Sets menuactive to zero
                void        M_ClearMenus (void);
                void        M_SetupNextMenu(menu_t *menudef);
                            // Only used for menu (skull cursor) animation.
                void        M_Ticker (void);
                            // Called by D_DoomMain
                            // Loads the config file.
                void        M_Init (void);
// m_misc.c
                            // Returns the final X coordinate
                int         M_DrawText (int x, int y, boolean direct, char* string);            
                boolean     M_WriteFile (char const* name, void* source, int length);
                int         M_ReadFile (char const* name, byte** buffer);
                void        M_SaveDefaults (void);
                void        M_LoadDefaults (void);
                            // Creates an image file (for screenshots)
                void        WritePCXfile (char*	filename, byte*	data, int width, int height, byte* palette);
                void        M_ScreenShot (void);

// m_random.c
                            // Both these functions look at an array with pseudo-random numbers between 0 and 255
                            // The function returns one of the numbers in the array 
                int         P_Random (void);
                            // M_Random and P_Random do the same but P_Random is used only by the play simulation.
                int         M_Random (void);
                            // This function resets the index to 0
                            // Fix randoms for demos
                void        M_ClearRandom (void);
// m_swap.c
                            // Swap 16bit, that is, MSB and LSB byte.
                unsigned short  SwapSHORT (unsigned short x);
                            // Swapping 32bit.
                unsigned long SwapLONG (unsigned long x);
// p_ceilng.c
                void        T_MoveCeiling (ceiling_t* ceiling);
                            // Move a ceiling up/down and all around!
                int         EV_DoCeiling (line_t* line, ceiling_e type);
                            // Add an active ceiling
                void        P_AddActiveCeiling (ceiling_t* c);
                            // Remove a ceiling's thinker
                void        P_RemoveActiveCeiling(ceiling_t* c);
                            // Restart a ceiling that's in-stasis
                void        P_ActivateInStasisCeiling(line_t* line);
                            // Stop a ceiling from crushing!
                int         EV_CeilingCrushStop(line_t *line);
// p_doors.c
                void        T_VerticalDoor (vldoor_t* door);
                            // Move a locked door up/down
                int         EV_DoLockedDoor (line_t* line, vldoor_e type, mobj_t* thing);
                int         EV_DoDoor (line_t* line, vldoor_e type);
                            // Opens a door manually, no tag value
                void        EV_VerticalDoor (line_t* line, mobj_t* thing);
                            // Spawn a door that closes after 30 seconds
                void        P_SpawnDoorCloseIn30 (sector_t* sec);
                void        P_SpawnDoorRaiseIn5Mins (sector_t* sec, int secnum);
// p_enemy.c
                void        A_Fall (mobj_t *actor);
                            // Called by P_NoiseAlert.
                            // Recursively traverse adjacent sectors,
                            // sound blocking lines cut off traversal.
                void        P_RecursiveSound (sector_t* sec, int soundblocks);
                void        P_NoiseAlert (mobj_t* target, mobj_t* emmiter);
                boolean     P_CheckMeleeRange (mobj_t* actor);
                boolean     P_CheckMissileRange (mobj_t* actor);
                boolean     P_Move (mobj_t* actor);
                boolean     P_TryWalk (mobj_t* actor);
                void        P_NewChaseDir (mobj_t* actor);
                boolean     P_LookForPlayers (mobj_t* actor, boolean allaround);
                            // Check if all the Keen Commander objects are dead
                void        A_KeenDie (mobj_t* mo);
                            // Sleep/Awake state of monsters
                void        A_Look (mobj_t* actor);
                            // Actor has a melee attack,
                            // so it tries to close as fast as possible
                void        A_Chase (mobj_t*	actor);
                void        A_FaceTarget (mobj_t* actor);
                            // zombie guy (aka Possessed) attack
                void        A_PosAttack (mobj_t* actor);
                            // sargent attack
                void        A_SPosAttack (mobj_t* actor);
                            // chaingunner attack
                void        A_CPosAttack (mobj_t* actor);
                            // chaingunners keep firing unless target got out of sight
                void        A_CPosRefire (mobj_t* actor);
                            // mastermind keeps firing unless target got out of sight
                void        A_SpidRefire (mobj_t* actor);
                            // arachnotron (aka baby spider) attack
                void        A_BspiAttack (mobj_t *actor);
                            // imp attack
                void        A_TroopAttack (mobj_t* actor);
                            // demon attack
                void        A_SargAttack (mobj_t* actor);
                            // cacodemon attack
                void        A_HeadAttack (mobj_t* actor);
                            // cyberdemon
                void        A_CyberAttack (mobj_t* actor);
                            // knight of hell
                void        A_BruisAttack (mobj_t* actor);
                            // revenants
                void        A_SkelMissile (mobj_t* actor)
                            // revenant missile
                void        A_Tracer (mobj_t* actor)
                            // is it the sound that revenants make when they do not have a target?
                void        A_SkelWhoosh (mobj_t*	actor)
                            // revenant punch
                void        A_SkelFist (mobj_t*	actor)
                            // Detect a corpse that could be raised.
                boolean     PIT_VileCheck (mobj_t*	thing)
                            // Check for ressurecting a body
                void        A_VileChase (mobj_t* actor)
                            // archivile wake-up sound
                void        A_VileStart (mobj_t* actor)
                            // start archvile fire
                void        A_StartFire (mobj_t* actor)
                            // continue archvile fire
                void        A_FireCrackle (mobj_t* actor)
                            // archvile fire
                void        A_Fire (mobj_t* actor)
                            // Spawn the hellfire
                void        A_VileTarget (mobj_t*	actor)
                void        A_VileAttack (mobj_t* actor)
                            // mancubus
                void        A_FatRaise (mobj_t *actor)
                void        A_FatAttack1 (mobj_t* actor)
                void        A_FatAttack2 (mobj_t* actor)
                void        A_FatAttack3 (mobj_t* actor)
                void        A_SkullAttack (mobj_t* actor)
                            // Spawn a lost soul and launch it at the target
                void        A_PainShootSkull (mobj_t* actor, angle_t angle)
                            // Call function to spawn a lost soul and face target
                void        A_PainAttack (mobj_t* actor)
                            // Spawns 3 lost souls at different angles when dies
                void        A_PainDie (mobj_t* actor)
                void        A_Scream (mobj_t* actor)
                void        A_XScream (mobj_t* actor)
                void        A_Pain (mobj_t* actor)
                void        A_Fall (mobj_t *actor)
                void        A_Explode (mobj_t* thingy)
                            // Handles end of level when killing the bosses
                void        A_BossDeath (mobj_t* mo)
                            // Cyberdemon step sound
                void        A_Hoof (mobj_t* mo)
                            // Mastermind step sound 
                void        A_Metal (mobj_t* mo)
                            // Arachnotron step sound
                void        A_BabyMetal (mobj_t* mo)
                            // Super Shotgun sounds when firing
                void        A_OpenShotgun2 (player_t* player, pspdef_t*	psp)
                void        A_LoadShotgun2 (player_t* player, pspdef_t*	psp)
                void        A_ReFire (player_t* player, pspdef_t* psp);
                void        A_CloseShotgun2 (player_t* player, pspdef_t* psp);
                            // Final boss stuff
                void        A_BrainAwake (mobj_t* mo)
                void        A_BrainPain (mobj_t* mo);
                void        A_BrainScream (mobj_t* mo);
                            // Generates random rocket explosion objects
                void        A_BrainExplode (mobj_t* mo);
                            // Exits the level
                void        A_BrainDie (mobj_t* mo);
                            // spawns cubes
                void        A_BrainSpit (mobj_t* mo);
                            // sound of cube when generated
                void        A_SpawnSound (mobj_t* mo);
                            // transforms the cube into a "randomly" selected monster
                void        A_SpawnFly (mobj_t* mo);
                            // Player death sound (default or intense when player reaches health of -50)
                void        A_PlayerScream (mobj_t* mo);
// p_floor.c
                            // Move a plane (floor or ceiling) and check for crushing
                result_e    T_MovePlane (sector_t* sector, fixed_t speed, fixed_t dest, boolean crush, int floorOrCeiling, int direction)
                            // Move a floor to its destination (up or down)
                void        T_MoveFloor(floormove_t* floor);
                            // Handle floor types
                int         EV_DoFloor (line_t* line, floor_e floortype);
                            // Build a staircase
                int         EV_BuildStairs (line_t* line, stair_e type);
// p_inter.c
                boolean     P_GiveAmmo (player_t* player, ammotype_t ammo, int num);
                boolean     P_GiveWeapon (player_t* player, weapontype_t weapon, boolean dropped);
                boolean     P_GiveBody ( player_t* player, intnum);
                boolean     P_GiveArmor (player_t* player, int armortype);
                void        P_GiveCard (player_t* player, card_t card);
                boolean     P_GivePower (player_t* player, int power)
                void        P_TouchSpecialThing (mobj_t* special, mobj_t* toucher);
                void        P_KillMobj (mobj_t* source, mobj_t* target)
                void        P_DamageMobj (mobj_t* target, mobj_t* inflictor, mobj_t* source, int damage)
// p_lights.c
                void    T_FireFlicker (fireflicker_t* flick)
                void    P_SpawnFireFlicker (sector_t* sector)
                void    T_LightFlash (lightflash_t* flash)
                void    P_SpawnLightFlash (sector_t* sector)
                void    T_StrobeFlash (strobe_t* flash)
                void    P_SpawnStrobeFlash (sector_t*	sector, int fastOrSlow, int inSync)
                void    EV_StartLightStrobing(line_t* line)
                void    EV_TurnTagLightsOff(line_t* line)
                void    EV_LightTurnOn (line_t* line, int bright)
                void    T_Glow(glow_t* g)
                void    P_SpawnGlowingLight(sector_t* sector)
// p_map.c
                boolean PIT_StompThing (mobj_t* thing)
                P_TeleportMove (mobj_t* thing, fixed_t x, fixed_t y)
                boolean PIT_CheckLine (line_t* ld)
                boolean PIT_CheckThing (mobj_t* thing)
                boolean P_CheckPosition (mobj_t* thing, fixed_t x, fixed_t y)
                boolean P_TryMove (mobj_t* thing, fixed_t x, fixed_t y)
                boolean P_ThingHeightClip (mobj_t* thing)
// z_zone.c
                void        Z_ClearZone (memzone_t* zone);
                void        Z_Init (void);
                void        Z_Free (void* ptr);
                void*       Z_Malloc (int size, int tag, void* user);
                void        Z_FreeTags (int lowtag, int hightag);
                void        Z_DumpHeap (int lowtag, int hightag);
                void        Z_FileDumpHeap (FILE* f);
                void        Z_CheckHeap (void);
                void        Z_ChangeTag2 (void* ptr, int tag);
                int         Z_FreeMemory (void);


// z_zone.h
                #define     Z_ChangeTag (p,t)
