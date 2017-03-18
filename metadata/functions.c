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

// i_main.c
                int         main (int argc, char** argv);