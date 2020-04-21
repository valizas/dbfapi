# include "FlagShip.h"

static FSchar *fgs_file_name = "dbfapi";
static FSvoid init_ref_data();
extern int    fgsDonotenter;

extern FSvar *_bb_get_assign_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_backspace_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_baddate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_baddate_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_block_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_block_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_get_changed_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_colordisp_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_decpos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_delend_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_delete_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_delleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_delright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_delwordleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_delwordright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_display_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_emptydate_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_end_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_hasfocus_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_home_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_insert_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_killfocus_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_left_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_original_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_overstrike_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_picture_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_picture_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_get_pos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_rejected_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_reset_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_right_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_setfocus_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_todecpos_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_type_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_typeout_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_get_undo_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_untransform_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_updatebuffer_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_varget_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_varput_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_wordleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_get_wordright_me FGS_ANSI((FSint, FSvar *[]));
# define GetAssignMethod 0
# define GetBackspaceMethod 1
# define GetBaddateMethod 2
# define GetBaddateAccess 3
# define GetBlockAccess 4
# define GetBlockAssign 5
# define GetChangedAccess 6
# define GetColordispMethod 7
# define GetDecposAccess 8
# define GetDelendMethod 9
# define GetDeleteMethod 10
# define GetDelleftMethod 11
# define GetDelrightMethod 12
# define GetDelwordleftMethod 13
# define GetDelwordrightMethod 14
# define GetDisplayMethod 15
# define GetEmptydateAccess 16
# define GetEndMethod 17
# define GetHasfocusAccess 18
# define GetHomeMethod 19
# define GetInitMethod 20
# define GetInsertMethod 21
# define GetKillfocusMethod 22
# define GetLeftMethod 23
# define GetOriginalAccess 24
# define GetOverstrikeMethod 25
# define GetPictureAccess 26
# define GetPictureAssign 27
# define GetPosAccess 28
# define GetRejectedAccess 29
# define GetResetMethod 30
# define GetRightMethod 31
# define GetSetfocusMethod 32
# define GetTodecposMethod 33
# define GetTypeAccess 34
# define GetTypeoutAccess 35
# define GetUndoMethod 36
# define GetUntransformMethod 37
# define GetUpdatebufferMethod 38
# define GetVargetMethod 39
# define GetVarputMethod 40
# define GetWordleftMethod 41
# define GetWordrightMethod 42
# define Get_a_flagProtect 2
# define Get_block_getProtect 3
# define Get_buff_begProtect 4
# define Get_buff_lngProtect 5
# define Get_colorselProtect 6
# define Get_e_flagProtect 7
# define Get_orig_nameProtect 8
# define Get_picfunctProtect 9
# define Get_pict_lngProtect 10
# define Get_pictemplProtect 11
# define Get_s_flagProtect 12
# define Get_var_evalProtect 13
# define Get_var_ptrProtect 14
# define Get_var_stypeProtect 15
# define Get_x_flagProtect 16
# define GetBaddateProtect 17
# define GetBaddateInstance 18
# define GetBlockProtect 19
# define GetBlockInstance 20
# define GetBufferInstance 21
# define GetCargoInstance 22
# define GetChangedProtect 23
# define GetChangedInstance 24
# define GetClearInstance 25
# define GetColInstance 26
# define GetColorspecInstance 27
# define GetDecposProtect 28
# define GetDecposInstance 29
# define GetEmptydateProtect 30
# define GetEmptydateInstance 31
# define GetExitstateInstance 32
# define GetHasfocusProtect 33
# define GetHasfocusInstance 34
# define GetMinusInstance 35
# define GetNameInstance 36
# define GetOriginalProtect 37
# define GetOriginalInstance 38
# define GetPictureProtect 39
# define GetPictureInstance 40
# define GetPosProtect 41
# define GetPosInstance 42
# define GetPostblockInstance 43
# define GetPreblockInstance 44
# define GetReaderInstance 45
# define GetRejectedProtect 46
# define GetRejectedInstance 47
# define GetRowInstance 48
# define GetSubscriptInstance 49
# define GetTypeProtect 50
# define GetTypeInstance 51
# define GetTypeoutProtect 52
# define GetTypeoutInstance 53
# define ErrorArgInstance 2
# define ErrorArgnumInstance 3
# define ErrorArgsInstance 4
# define ErrorArgtypereqInstance 5
# define ErrorCallfuncsyInstance 6
# define ErrorCandefaultInstance 7
# define ErrorCanretryInstance 8
# define ErrorCansubstitInstance 9
# define ErrorCargoInstance 10
# define ErrorChoiceInstance 11
# define ErrorDescriptioInstance 12
# define ErrorFilehandleInstance 13
# define ErrorFilenameInstance 14
# define ErrorFuncptrInstance 15
# define ErrorFuncsymInstance 16
# define ErrorGencodeInstance 17
# define ErrorMaxsizeInstance 18
# define ErrorMethodselfInstance 19
# define ErrorOperationInstance 20
# define ErrorOscodeInstance 21
# define ErrorSeverityInstance 22
# define ErrorSubcodeInstance 23
# define ErrorSubcodetexInstance 24
# define ErrorSubstituteInstance 25
# define ErrorSubsystemInstance 26
# define ErrorTriesInstance 27
extern FSvar *_bb_tbrowse_addcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_colcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_colorrect_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_colpos_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_colpos_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_colsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_colsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_colwidth_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_configure_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_dehilite_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_delcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_down_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_end_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_footsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_footsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_forcestabl_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_forcestable_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_freeze_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_freeze_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_getcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_gobottom_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_gomousepos_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_gotop_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_headsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_headsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_hilite_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_home_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_inscolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_invalidate_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_left_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_leftvisibl_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_linecursor_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_linecursor_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_nbottom_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_nbottom_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_nleft_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_nleft_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_nright_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_nright_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_ntop_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_ntop_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbrowse_pagedown_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_pageup_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_panend_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_panhome_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_panleft_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_panright_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_refreshall_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_refreshcur_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_refreshcurrent_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_right_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_rightvisib_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_rowcount_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbrowse_setcolumn_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_stabilize_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbrowse_up_me FGS_ANSI((FSint, FSvar *[]));
# define TbrowseAddcolumnMethod 0
# define TbrowseColcountAccess 1
# define TbrowseColorrectMethod 2
# define TbrowseColposAccess 3
# define TbrowseColposAssign 4
# define TbrowseColsepAccess 5
# define TbrowseColsepAssign 6
# define TbrowseColwidthMethod 7
# define TbrowseConfigureMethod 8
# define TbrowseDehiliteMethod 9
# define TbrowseDelcolumnMethod 10
# define TbrowseDownMethod 11
# define TbrowseEndMethod 12
# define TbrowseFootsepAccess 13
# define TbrowseFootsepAssign 14
# define TbrowseForcestablMethod 15
# define TbrowseForcestableMethod 16
# define TbrowseFreezeAccess 17
# define TbrowseFreezeAssign 18
# define TbrowseGetcolumnMethod 19
# define TbrowseGobottomMethod 20
# define TbrowseGomouseposMethod 21
# define TbrowseGotopMethod 22
# define TbrowseHeadsepAccess 23
# define TbrowseHeadsepAssign 24
# define TbrowseHiliteMethod 25
# define TbrowseHomeMethod 26
# define TbrowseInitMethod 27
# define TbrowseInscolumnMethod 28
# define TbrowseInvalidateMethod 29
# define TbrowseLeftMethod 30
# define TbrowseLeftvisiblAccess 31
# define TbrowseLinecursorAccess 32
# define TbrowseLinecursorAssign 33
# define TbrowseNbottomAccess 34
# define TbrowseNbottomAssign 35
# define TbrowseNleftAccess 36
# define TbrowseNleftAssign 37
# define TbrowseNrightAccess 38
# define TbrowseNrightAssign 39
# define TbrowseNtopAccess 40
# define TbrowseNtopAssign 41
# define TbrowsePagedownMethod 42
# define TbrowsePageupMethod 43
# define TbrowsePanendMethod 44
# define TbrowsePanhomeMethod 45
# define TbrowsePanleftMethod 46
# define TbrowsePanrightMethod 47
# define TbrowseRefreshallMethod 48
# define TbrowseRefreshcurMethod 49
# define TbrowseRefreshcurrentMethod 50
# define TbrowseRightMethod 51
# define TbrowseRightvisibAccess 52
# define TbrowseRowcountAccess 53
# define TbrowseSetcolumnMethod 54
# define TbrowseStabilizeMethod 55
# define TbrowseUpMethod 56
# define Tbrowse_columnsProtect 2
# define Tbrowse_cr_bg_colProtect 3
# define Tbrowse_cr_bottomProtect 4
# define Tbrowse_cr_fg_colProtect 5
# define Tbrowse_cr_leftProtect 6
# define Tbrowse_cr_rightProtect 7
# define Tbrowse_cr_topProtect 8
# define Tbrowse_fcolProtect 9
# define Tbrowse_iscreenProtect 10
# define Tbrowse_n_olineProtect 11
# define Tbrowse_n_stableProtect 12
# define Tbrowse_noffsetProtect 13
# define TbrowseAutoliteInstance 14
# define TbrowseCargoInstance 15
# define TbrowseColcountProtect 16
# define TbrowseColcountInstance 17
# define TbrowseColorspecInstance 18
# define TbrowseColposProtect 19
# define TbrowseColposInstance 20
# define TbrowseColsepProtect 21
# define TbrowseColsepInstance 22
# define TbrowseFootsepProtect 23
# define TbrowseFootsepInstance 24
# define TbrowseFreezeProtect 25
# define TbrowseFreezeInstance 26
# define TbrowseGobottomblInstance 27
# define TbrowseGotopblockInstance 28
# define TbrowseHeadsepProtect 29
# define TbrowseHeadsepInstance 30
# define TbrowseHitbottomInstance 31
# define TbrowseHittopInstance 32
# define TbrowseLeftvisiblProtect 33
# define TbrowseLeftvisiblInstance 34
# define TbrowseLinecursorInstance 35
# define TbrowseNbottomProtect 36
# define TbrowseNbottomInstance 37
# define TbrowseNleftProtect 38
# define TbrowseNleftInstance 39
# define TbrowseNrightProtect 40
# define TbrowseNrightInstance 41
# define TbrowseNtopProtect 42
# define TbrowseNtopInstance 43
# define TbrowseRightvisibProtect 44
# define TbrowseRightvisibInstance 45
# define TbrowseRowcountProtect 46
# define TbrowseRowcountInstance 47
# define TbrowseRowposInstance 48
# define TbrowseSkipblockInstance 49
# define TbrowseStableInstance 50
extern FSvar *_bb_tbcolumn_block_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_block_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_cargo_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_cargo_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_colorblock_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_colorblock_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_colsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_colsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_defcolor_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_defcolor_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_footing_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_footing_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_footsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_footsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_heading_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_heading_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_headsep_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_headsep_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_init_me FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_tbcolumn_picture_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_picture_as FGS_ANSI((FSvar *, FSvar *));
extern FSvar *_bb_tbcolumn_width_ac FGS_ANSI((FSvar *));
extern FSvar *_bb_tbcolumn_width_as FGS_ANSI((FSvar *, FSvar *));
# define TbcolumnBlockAccess 0
# define TbcolumnBlockAssign 1
# define TbcolumnCargoAccess 2
# define TbcolumnCargoAssign 3
# define TbcolumnColorblockAccess 4
# define TbcolumnColorblockAssign 5
# define TbcolumnColsepAccess 6
# define TbcolumnColsepAssign 7
# define TbcolumnDefcolorAccess 8
# define TbcolumnDefcolorAssign 9
# define TbcolumnFootingAccess 10
# define TbcolumnFootingAssign 11
# define TbcolumnFootsepAccess 12
# define TbcolumnFootsepAssign 13
# define TbcolumnHeadingAccess 14
# define TbcolumnHeadingAssign 15
# define TbcolumnHeadsepAccess 16
# define TbcolumnHeadsepAssign 17
# define TbcolumnInitMethod 18
# define TbcolumnPictureAccess 19
# define TbcolumnPictureAssign 20
# define TbcolumnWidthAccess 21
# define TbcolumnWidthAssign 22
# define TbcolumnBlockProtect 2
# define TbcolumnBlockInstance 3
# define TbcolumnCargoProtect 4
# define TbcolumnCargoInstance 5
# define TbcolumnColorblockProtect 6
# define TbcolumnColorblockInstance 7
# define TbcolumnColsepProtect 8
# define TbcolumnColsepInstance 9
# define TbcolumnDefcolorProtect 10
# define TbcolumnDefcolorInstance 11
# define TbcolumnFootingProtect 12
# define TbcolumnFootingInstance 13
# define TbcolumnFootsepProtect 14
# define TbcolumnFootsepInstance 15
# define TbcolumnHeadingProtect 16
# define TbcolumnHeadingInstance 17
# define TbcolumnHeadsepProtect 18
# define TbcolumnHeadsepInstance 19
# define TbcolumnPictureProtect 20
# define TbcolumnPictureInstance 21
# define TbcolumnWidthProtect 22
# define TbcolumnWidthInstance 23
extern FSvar *_bb_aadd FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbappend FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbcommital FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbcreate FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbcreatein FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbdelete FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbgoto FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbseek FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbselectar FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbskip FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbusearea FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_eof FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_if FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_int FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_lastrec FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_ordlistadd FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_ordlistcle FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_ordlistreb FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_reccount FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_recno FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_substr FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_trim FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_val FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb___dblocate FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb___quit FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_dbfapi FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_gx_init FGS_ANSI((FSint, FSvar *[]));
extern FSvar *_bb_sleep FGS_ANSI((FSint, FSvar *[]));


static FSint _bbvar_valuec;
static FSint _bbvar_valued;
static FSint _bbvar_valuen;
static FSint _bbvar_done;
static FSint _bbvar___excl_flg;
static FSint _bbvar_tabla0;
static FSint _bbvar_tabla1;
static FSint _bbvar_tabla2;
static FSint _bbvar_pname3;
static FSint _bbvar_ptype4;
static FSint _bbvar_pvalue5;
static FSint _bbvar_pcreate6;
static FSint _bbvar_pgo7;
static FSint _bbvar_pgorn8;
static FSint _bbvar_camposstru;
static FSint _bbvar_paso;
static FSint _bbvar_pauseres;
static FSint _bbvar_pvarname;
static FSint _bbvar_refby;
static FSint _bbvar_terminar;
static FSint _bbvar_vgorn;
static FSint _bbvar_vname;
static FSint _bbvar_vpauseres;
static FSint _bbvar_vtabla;
static FSint _bbvar_vtablename;
static FSint _bbvar_vvalue;
static FSint _bbvar_varea;
static FSint _bbvar_refbynroli;
static FSint _bbvar_nil;
static FSint _bbvar_lineready;
static FSint _bbvar_ddldml;
static FSint _bbvar_entity;
static FSint _bbvar_op;
static FSint _bbvar_valor;
static FSint _bbvar_nombre;
static FSint _bbvar_name;
static FSint _bbvar_type;
static FSint _bbvar_valuec2;
static FSint _bbvar_gorn;
static FSint _bbvar_refline;
static FSint _bbvar_valuen2;
static FSint _bbvar_nrolinnext;
static FSint _bbvar_nrolin;

static FSvar *_bb_cb_1_121_1(parno, parptr, argref)
FSint parno;
FSvar *parptr[];
FSvar *argref[];
{
	fn_stack   fn_stk;
	FSchar   * __who_me=fgs_fn_start(&fn_stk,fgs_file_name,"cb_1_121_13",121,parno);

	if(fgsDonotenter) init_ref_data();
	fn_stk.rvalptr = exp_eval(fgs_chararg(fgsGetVar(_bbvar_valuec), "expression"));
_adios:	return fgs_fn_end(&fn_stk, 'U');
}


static FSvar *_bb_cb_1_167_1(parno, parptr, argref)
FSint parno;
FSvar *parptr[];
FSvar *argref[];
{
	fn_stack   fn_stk;
	FSchar   * __who_me=fgs_fn_start(&fn_stk,fgs_file_name,"cb_1_167_13",167,parno);

	if(fgsDonotenter) init_ref_data();
	fn_stk.rvalptr = exp_eval(fgs_chararg(fgsGetVar(_bbvar_valuec), "expression"));
_adios:	return fgs_fn_end(&fn_stk, 'U');
}


/* *  eof  */
/* * EJEMPLOS */
/* * ~/compile_farm/woody/var/farmas/fuentes/dbfapi CREARDRIVER driv001 */
/* * ~/compile_farm/woody/var/farmas/fuentes/dbfapi CARGARDRIVER driv001 2 3 4 5 CREATE */
/* * ~/compile_farm/woody/var/farmas/fuentes/dbfapi CARGARDRIVER driv001 2 DDLDML C DDL GO 1 */
/* * ~/compile_farm/woody/var/farmas/fuentes/dbfapi CARGARDRIVER driv001 2 ENTITY C TABLE GO 1 */
/* *  */
FSvar * _bb_dbfapi (parno, parptr)
FSint   parno;
FSvar * parptr[];
{
	fn_stack fn_stk;
	FSchar *__who_me=fgs_fn_start(&fn_stk,fgs_file_name,"dbfapi",8,parno);

	FSvar *par0[7], *par1[5], *par2[4];
	if(fgsDonotenter) init_ref_data();
	_fgs_signal_a(7);
#line 7 "dbfapi.prg"
	par0[0] = _bb_gx_init(0, 0);
	_fgs_signal_a(8);
#line 8 "dbfapi.prg"
	fgs_private_param(_bbvar_tabla0, parno, 0, parptr);

	fgs_private_param(_bbvar_tabla1, parno, 1, parptr);

	fgs_private_param(_bbvar_tabla2, parno, 2, parptr);

	fgs_private_param(_bbvar_pname3, parno, 3, parptr);

	fgs_private_param(_bbvar_ptype4, parno, 4, parptr);

	fgs_private_param(_bbvar_pvalue5, parno, 5, parptr);

	fgs_private_param(_bbvar_pcreate6, parno, 6, parptr);

	fgs_private_param(_bbvar_pgo7, parno, 7, parptr);

	fgs_private_param(_bbvar_pgorn8, parno, 8, parptr);

	_tmp_2_ = fgs_declare(_bbvar_camposstru);

	_tmp_2_ = fgs_declare(_bbvar_paso);

	_tmp_2_ = fgs_declare(_bbvar_pauseres);

	_tmp_2_ = fgs_declare(_bbvar_pvarname);

	_tmp_2_ = fgs_declare(_bbvar_refby);

	_tmp_2_ = fgs_declare(_bbvar_terminar);

	_tmp_2_ = fgs_declare(_bbvar_vgorn);

	_tmp_2_ = fgs_declare(_bbvar_vname);

	_tmp_2_ = fgs_declare(_bbvar_vpauseres);

	_tmp_2_ = fgs_declare(_bbvar_vtabla);

	_tmp_2_ = fgs_declare(_bbvar_vtablename);

	_tmp_2_ = fgs_declare(_bbvar_vvalue);

	_tmp_2_ = fgs_declare(_bbvar_varea);

	_tmp_2_ = fgs_declare(_bbvar_refbynroli);

	_fgs_signal_a(27);
#line 27 "dbfapi.prg"
	par0[0] = u_equ_c(fgsGetVar(_bbvar_tabla0), "CREARDRIVER");
if(!if_u(par0[0])) goto lbnextcase1;
	_fgs_signal_a(28);
#line 28 "dbfapi.prg"
	par0[0] = set_cv("1");
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(29);
#line 29 "dbfapi.prg"
	par0[0] = cre_tmpvar();
	par0[1] = cre_arra(cre_tmpvar(), 0, 1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_camposstru].v, par0[1]);
	_fgs_signal_a(30);
#line 30 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("LINEREADY");
	par1[1] = set_cv("C");
	par1[2] = set_Iv((int) 1);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(31);
#line 31 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("NROLIN");
	par1[1] = set_cv("N");
	par1[2] = set_Iv((int) 18);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(32);
#line 32 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("NROLINNEXT");
	par1[1] = set_cv("N");
	par1[2] = set_Iv((int) 18);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(33);
#line 33 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("DDLDML");
	par1[1] = set_cv("C");
	par1[2] = set_Iv((int) 3);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(34);
#line 34 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("ENTITY");
	par1[1] = set_cv("C");
	par1[2] = set_Iv((int) 15);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(35);
#line 35 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("OP");
	par1[1] = set_cv("C");
	par1[2] = set_Iv((int) 15);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(36);
#line 36 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("DONE");
	par1[1] = set_cv("C");
	par1[2] = set_Iv((int) 1);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(37);
#line 37 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("NAME");
	par1[1] = set_cv("C");
	par1[2] = set_Iv((int) 15);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(38);
#line 38 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("TYPE");
	par1[1] = set_cv("C");
	par1[2] = set_Iv((int) 15);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(39);
#line 39 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("VALUEC");
	par1[1] = set_cv("C");
	par1[2] = set_Iv((int) 255);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(40);
#line 40 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("VALUEC2");
	par1[1] = set_cv("C");
	par1[2] = set_Iv((int) 255);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(41);
#line 41 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("VALUED");
	par1[1] = set_cv("D");
	par1[2] = set_Iv((int) 8);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(42);
#line 42 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("VALUEN");
	par1[1] = set_cv("N");
	par1[2] = set_Iv((int) 18);
	par1[3] = set_Iv((int) 5);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(43);
#line 43 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("VALUEN2");
	par1[1] = set_cv("N");
	par1[2] = set_Iv((int) 18);
	par1[3] = set_Iv((int) 5);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(44);
#line 44 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = set_cv("GORN");
	par1[1] = set_cv("N");
	par1[2] = set_Iv((int) 18);
	par1[3] = set_Iv((int) 0);
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(46);
#line 46 "dbfapi.prg"
	par0[0] = mk_var_cp(fgsGetVar(_bbvar_tabla1));
	par0[1] = fgsGetVar(_bbvar_camposstru);
	par0[2] = _bb_dbcreate(2, &par0[0]);
	_fgs_signal_a(47);
#line 47 "dbfapi.prg"
	goto _adios;
lbreturn2:;

	goto lbendcase0;
lbnextcase1:;
	fn_stk.lin_no = 49;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_tabla0), "CARGARDRIVER");
if(!if_u(par0[0])) goto lbnextcase3;
	_fgs_signal_a(50);
#line 50 "dbfapi.prg"
	par0[0] = set_cv("1");
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(51);
#line 51 "dbfapi.prg"
	par0[0] = mk_var_cp(FALSE_VAR);
	par0[1] = cre_tmpvar();
	par0[2] = mk_var_cp(fgsGetVar(_bbvar_tabla1));
	par0[3] = cre_tmpvar();
lbor4:;
if(0) {
	par1[1] = TRUE_VAR;
	par1[0] = par1[1];
} else {
	par1[2] = fgsGetVar(_bbvar_nil);
	par1[0] = par1[2];
}
	par0[4] = par1[0];
	par0[5] = mk_var_cp(FALSE_VAR);
	par0[6] = _bb_dbusearea(6, &par0[0]);
	_fgs_signal_a(53);
#line 53 "dbfapi.prg"
	par0[0] = u_equ_c(fgsGetVar(_bbvar_pcreate6), "CREATE");
if(!if_u(par0[0])) goto lbnextcase6;
	_fgs_signal_a(54);
#line 54 "dbfapi.prg"
	par0[0] = mk_var_cp(FALSE_VAR);
	par0[1] = mk_var_cp(FALSE_VAR);
	par0[2] = _bb_dbappend(2, &par0[0]);

	goto lbendcase5;
lbnextcase6:;
	fn_stk.lin_no = 55;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_pgo7), "GO");
if(!if_u(par0[0])) goto lbnextcase7;
	_fgs_signal_a(56);
#line 56 "dbfapi.prg"
	par1[0] = mk_var_cp(fgsGetVar(_bbvar_pgorn8));
	par1[1] = _bb_val(1, &par1[0]);
	par0[0] = par1[1];
	par0[1] = _bb_dbgoto(1, &par0[0]);

	goto lbendcase5;
lbnextcase7:;
	fn_stk.lin_no = 57;

	lbendcase5:;
	_fgs_signal_a(59);
#line 59 "dbfapi.prg"
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ptype4), "C");
if(!if_u(par0[0])) goto lbnextcase9;
	_fgs_signal_a(60);
#line 60 "dbfapi.prg"
	par0[0] = cpy_var  (fgsGetCField(fgsVMxC(mv_names[_bbvar_pname3].v, 1)), fgsGetVar(_bbvar_pvalue5));

	goto lbendcase8;
lbnextcase9:;
	fn_stk.lin_no = 61;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ptype4), "N");
if(!if_u(par0[0])) goto lbnextcase10;
	_fgs_signal_a(62);
#line 62 "dbfapi.prg"
	par0[0] = mk_var_cp(fgsGetVar(_bbvar_pvalue5));
	par0[1] = _bb_val(1, &par0[0]);
	par0[2] = cpy_var  (fgsGetCField(fgsVMxC(mv_names[_bbvar_pname3].v, 1)), par0[1]);

	goto lbendcase8;
lbnextcase10:;
	fn_stk.lin_no = 63;

	lbendcase8:;
	_fgs_signal_a(64);
#line 64 "dbfapi.prg"
	goto _adios;
lbreturn11:;

	goto lbendcase0;
lbnextcase3:;
	fn_stk.lin_no = 65;

	lbendcase0:;
	_fgs_signal_a(66);
#line 66 "dbfapi.prg"
	par0[0] = set_cv("1");
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(67);
#line 67 "dbfapi.prg"
	par0[0] = mk_var_cp(FALSE_VAR);
	par0[1] = cre_tmpvar();
	par0[2] = mk_var_cp(fgsGetVar(_bbvar_tabla0));
	par0[3] = cre_tmpvar();
goto lbor12;
lbor12:;
if(1) {
	par1[1] = TRUE_VAR;
	par1[0] = par1[1];
} else {
	par1[2] = fgsGetVar(_bbvar_nil);
	par1[0] = par1[2];
}
	par0[4] = par1[0];
	par0[5] = mk_var_cp(FALSE_VAR);
	par0[6] = _bb_dbusearea(6, &par0[0]);
	_fgs_signal_a(68);
#line 68 "dbfapi.prg"
	par0[0] = set_Ivar (mv_names[_bbvar_paso].v, (int) 1);
	_fgs_signal_a(69);
#line 69 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_paso);
	par0[1] = _bb_dbgoto(1, &par0[0]);
	_fgs_signal_a(70);
#line 70 "dbfapi.prg"
	par0[0] = set_lvar (mv_names[_bbvar_terminar].v, 0);
	_fgs_signal_a(71);
#line 71 "dbfapi.prg"
	par0[0] = set_Ivar (mv_names[_bbvar_refby].v, (int) 0);
	_fgs_signal_a(72);
#line 72 "dbfapi.prg"
	par0[0] = set_Ivar (mv_names[_bbvar_varea].v, (int) 2);
	_fgs_signal_a(73);
#line 73 "dbfapi.prg"
	while(1) {
	del_tmpvars(fn_stk.tmv_now);
		fn_stk.lin_no = 73;
	par0[0] = not_u(fgsGetVar(_bbvar_terminar));
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband13;
	par0[2] = _bb_eof(0, 0);
	par0[3] = not_u(par0[2]);
	par0[1] = par0[3];
lband13:;
		if(!if_u(par0[1])) break;
	_fgs_signal_a(74);
#line 74 "dbfapi.prg"
	while(1) {
	del_tmpvars(fn_stk.tmv_now);
		fn_stk.lin_no = 74;
	par0[0] = u_neq_c(fgsGetVar(_bbvar_lineready), "T");
		if(!if_u(par0[0])) break;
	_fgs_signal_a(75);
#line 75 "dbfapi.prg"
	par0[0] = set_nv(0.5, 1);
	par0[1] = _bb_sleep(1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_pauseres].v, par0[1]);
	}

del_tmpvars(fn_stk.tmv_now);

	_fgs_signal_a(78);
#line 78 "dbfapi.prg"
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DML");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband15;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "FIELD");
	par0[1] = par0[2];
lband15:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband16;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "C");
	par0[3] = par0[4];
lband16:;
if(!if_u(par0[3])) goto lbnextcase17;
	_fgs_signal_a(79);
#line 79 "dbfapi.prg"
	par0[0] = n_equ_u(0.0, fgsGetVar(_bbvar_refby));
if(!if_u(par0[0])) goto lbelse18;
	_fgs_signal_a(80);
#line 80 "dbfapi.prg"
	par0[0] = mk_var_cp(FALSE_VAR);
	par0[1] = mk_var_cp(FALSE_VAR);
	par0[2] = _bb_dbappend(2, &par0[0]);

	goto lbendif18;
lbelse18:;
	fn_stk.lin_no = 81;


	lbendif18:;
	_fgs_signal_a(82);
#line 82 "dbfapi.prg"
	par0[0] = cpy_var  (fgsGetCField(fgsVMxC(mv_names[_bbvar_nombre].v, 1)), fgsGetVar(_bbvar_valor));

	goto lbendcase14;
lbnextcase17:;
	fn_stk.lin_no = 83;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DML");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband19;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "FIELD");
	par0[1] = par0[2];
lband19:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband20;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "R");
	par0[3] = par0[4];
lband20:;
if(!if_u(par0[3])) goto lbnextcase21;
	_fgs_signal_a(84);
#line 84 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vname].v, fgsGetVar(_bbvar_name));
	_fgs_signal_a(85);
#line 85 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(86);
#line 86 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, exp_eval(fgs_chararg(fgsGetVar(_bbvar_vname), "expression")));
	_fgs_signal_a(87);
#line 87 "dbfapi.prg"
	par0[0] = set_cv("1");
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(89);
#line 89 "dbfapi.prg"
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "C");
if(!if_u(par0[0])) goto lbnextcase23;
	_fgs_signal_a(90);
#line 90 "dbfapi.prg"
	par0[0] = cpy_var  (fgsGetField(_bbvar_valuec), fgsGetVar(_bbvar_vvalue));

	goto lbendcase22;
lbnextcase23:;
	fn_stk.lin_no = 91;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "D");
if(!if_u(par0[0])) goto lbnextcase24;
	_fgs_signal_a(92);
#line 92 "dbfapi.prg"
	par0[0] = cpy_var  (fgsGetField(_bbvar_valued), fgsGetVar(_bbvar_vvalue));

	goto lbendcase22;
lbnextcase24:;
	fn_stk.lin_no = 93;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "N");
if(!if_u(par0[0])) goto lbnextcase25;
	_fgs_signal_a(94);
#line 94 "dbfapi.prg"
	par0[0] = cpy_var  (fgsGetField(_bbvar_valuen), fgsGetVar(_bbvar_vvalue));

	goto lbendcase22;
lbnextcase25:;
	fn_stk.lin_no = 95;

	lbendcase22:;
	_fgs_signal_a(96);
#line 96 "dbfapi.prg"
	par0[0] = set_cvar (fgsGetField(_bbvar_done), "T");
	_fgs_signal_a(97);
#line 97 "dbfapi.prg"
	par0[0] = _bb_dbcommital(0, 0);

	goto lbendcase14;
lbnextcase21:;
	fn_stk.lin_no = 98;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DML");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband26;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "FIELD");
	par0[1] = par0[2];
lband26:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband27;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "U");
	par0[3] = par0[4];
lband27:;
if(!if_u(par0[3])) goto lbnextcase28;
	_fgs_signal_a(99);
#line 99 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vname].v, fgsGetVar(_bbvar_name));
	_fgs_signal_a(101);
#line 101 "dbfapi.prg"
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "C");
if(!if_u(par0[0])) goto lbnextcase30;
	_fgs_signal_a(102);
#line 102 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valuec));

	goto lbendcase29;
lbnextcase30:;
	fn_stk.lin_no = 103;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "D");
if(!if_u(par0[0])) goto lbnextcase31;
	_fgs_signal_a(104);
#line 104 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valued));

	goto lbendcase29;
lbnextcase31:;
	fn_stk.lin_no = 105;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "N");
if(!if_u(par0[0])) goto lbnextcase32;
	_fgs_signal_a(106);
#line 106 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valuen));

	goto lbendcase29;
lbnextcase32:;
	fn_stk.lin_no = 107;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "P");
if(!if_u(par0[0])) goto lbnextcase33;
	_fgs_signal_a(108);
#line 108 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, exp_eval(fgs_chararg(mv_names[_bbvar_pvarname].v, "&pvarname")));

	goto lbendcase29;
lbnextcase33:;
	fn_stk.lin_no = 109;

	lbendcase29:;
	_fgs_signal_a(110);
#line 110 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(111);
#line 111 "dbfapi.prg"
	par0[0] = cpy_var  (fgsGetCField(fgsVMxC(mv_names[_bbvar_vname].v, 1)), fgsGetVar(_bbvar_vvalue));

	goto lbendcase14;
lbnextcase28:;
	fn_stk.lin_no = 112;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DML");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband34;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "FIELD");
	par0[1] = par0[2];
lband34:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband35;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "D");
	par0[3] = par0[4];
lband35:;
if(!if_u(par0[3])) goto lbnextcase36;
	_fgs_signal_a(113);
#line 113 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(114);
#line 114 "dbfapi.prg"
	par0[0] = _bb_dbdelete(0, 0);

	goto lbendcase14;
lbnextcase36:;
	fn_stk.lin_no = 115;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband37;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "INDEX");
	par0[1] = par0[2];
lband37:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband38;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "SET");
	par0[3] = par0[4];
lband38:;
if(!if_u(par0[3])) goto lbnextcase39;
	_fgs_signal_a(116);
#line 116 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valuec));
	_fgs_signal_a(117);
#line 117 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(117);
#line 117 "dbfapi.prg"
if(!1) goto lbelse40;
	_fgs_signal_a(117);
#line 117 "dbfapi.prg"
	par0[0] = _bb_ordlistcle(0, 0);

	goto lbendif40;
lbelse40:;
	fn_stk.lin_no = 118;


	lbendif40:;
	_fgs_signal_a(117);
#line 117 "dbfapi.prg"
	_tmp_2_ = fgs_declare(_bbvar___excl_flg);

	cpy_var(mv_names[_tmp_2_].v, FALSE_VAR);
	_fgs_signal_a(118);
#line 118 "dbfapi.prg"
	par0[0] = mk_var_cp(fgsGetVar(_bbvar_vvalue));
	par0[1] = cre_tmpvar();
	par0[2] = mv_names[_bbvar___excl_flg].v;
	par0[3] = _bb_ordlistadd(3, &par0[0]);

	goto lbendcase14;
lbnextcase39:;
	fn_stk.lin_no = 119;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband41;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "INDEX");
	par0[1] = par0[2];
lband41:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband42;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "CREATE");
	par0[3] = par0[4];
lband42:;
if(!if_u(par0[3])) goto lbnextcase43;
	_fgs_signal_a(120);
#line 120 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	par0[0] = mk_var_cp(fgsGetVar(_bbvar_valuec2));
	par0[1] = mk_var_cp(fgsGetVar(_bbvar_valuec));
	par1[0] = set_bvar(cre_tmpvar(), _bb_cb_1_121_1, 8, 0);
	par0[2] = par1[0];
if(0) {
	par1[2] = TRUE_VAR;
	par1[1] = par1[2];
} else {
	par1[3] = fgsGetVar(_bbvar_nil);
	par1[1] = par1[3];
}
	par0[3] = par1[1];
	par0[4] = _bb_dbcreatein(4, &par0[0]);

	goto lbendcase14;
lbnextcase43:;
	fn_stk.lin_no = 122;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband44;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "INDEX");
	par0[1] = par0[2];
lband44:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband45;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "REINDEX");
	par0[3] = par0[4];
lband45:;
if(!if_u(par0[3])) goto lbnextcase46;
	_fgs_signal_a(123);
#line 123 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(124);
#line 124 "dbfapi.prg"
	par0[0] = _bb_ordlistreb(0, 0);

	goto lbendcase14;
lbnextcase46:;
	fn_stk.lin_no = 125;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband47;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "INDEX");
	par0[1] = par0[2];
lband47:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband48;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "DELETE");
	par0[3] = par0[4];
lband48:;
if(!if_u(par0[3])) goto lbnextcase49;

	goto lbendcase14;
lbnextcase49:;
	fn_stk.lin_no = 126;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband50;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "ORDER");
	par0[1] = par0[2];
lband50:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband51;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "SET");
	par0[3] = par0[4];
lband51:;
if(!if_u(par0[3])) goto lbnextcase52;

	goto lbendcase14;
lbnextcase52:;
	fn_stk.lin_no = 127;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband53;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "ORDER");
	par0[1] = par0[2];
lband53:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband54;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "UNSET");
	par0[3] = par0[4];
lband54:;
if(!if_u(par0[3])) goto lbnextcase55;

	goto lbendcase14;
lbnextcase55:;
	fn_stk.lin_no = 128;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband56;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "ORDER");
	par0[1] = par0[2];
lband56:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband57;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "GET");
	par0[3] = par0[4];
lband57:;
if(!if_u(par0[3])) goto lbnextcase58;

	goto lbendcase14;
lbnextcase58:;
	fn_stk.lin_no = 129;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband59;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband59:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband60;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "SELECTAREA");
	par0[3] = par0[4];
lband60:;
if(!if_u(par0[3])) goto lbnextcase61;
	_fgs_signal_a(130);
#line 130 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_varea].v, fgsGetVar(_bbvar_valuen));

	goto lbendcase14;
lbnextcase61:;
	fn_stk.lin_no = 131;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband62;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband62:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband63;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "SELECTTABLE");
	par0[3] = par0[4];
lband63:;
if(!if_u(par0[3])) goto lbnextcase64;
	_fgs_signal_a(132);
#line 132 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_varea].v, fgsGetVar(_bbvar_valuec));

	goto lbendcase14;
lbnextcase64:;
	fn_stk.lin_no = 133;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband65;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband65:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband66;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "USEEXCLUSIVE");
	par0[3] = par0[4];
lband66:;
if(!if_u(par0[3])) goto lbnextcase67;
	_fgs_signal_a(134);
#line 134 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vtabla].v, fgsGetVar(_bbvar_name));
	_fgs_signal_a(135);
#line 135 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(136);
#line 136 "dbfapi.prg"
	par0[0] = mk_var_cp(FALSE_VAR);
	par0[1] = cre_tmpvar();
	par0[2] = mk_var_cp(fgsGetVar(_bbvar_vtabla));
	par0[3] = cre_tmpvar();
lbor68:;
if(0) {
	par1[1] = TRUE_VAR;
	par1[0] = par1[1];
} else {
	par1[2] = fgsGetVar(_bbvar_nil);
	par1[0] = par1[2];
}
	par0[4] = par1[0];
	par0[5] = mk_var_cp(FALSE_VAR);
	par0[6] = _bb_dbusearea(6, &par0[0]);

	goto lbendcase14;
lbnextcase67:;
	fn_stk.lin_no = 137;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband69;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband69:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband70;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "USESHARED");
	par0[3] = par0[4];
lband70:;
if(!if_u(par0[3])) goto lbnextcase71;
	_fgs_signal_a(138);
#line 138 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vtabla].v, fgsGetVar(_bbvar_name));
	_fgs_signal_a(139);
#line 139 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(140);
#line 140 "dbfapi.prg"
	par0[0] = mk_var_cp(FALSE_VAR);
	par0[1] = cre_tmpvar();
	par0[2] = mk_var_cp(fgsGetVar(_bbvar_vtabla));
	par0[3] = cre_tmpvar();
goto lbor72;
lbor72:;
if(1) {
	par1[1] = TRUE_VAR;
	par1[0] = par1[1];
} else {
	par1[2] = fgsGetVar(_bbvar_nil);
	par1[0] = par1[2];
}
	par0[4] = par1[0];
	par0[5] = mk_var_cp(FALSE_VAR);
	par0[6] = _bb_dbusearea(6, &par0[0]);

	goto lbendcase14;
lbnextcase71:;
	fn_stk.lin_no = 141;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband73;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband73:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband74;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "GO");
	par0[3] = par0[4];
lband74:;
if(!if_u(par0[3])) goto lbnextcase75;
	_fgs_signal_a(142);
#line 142 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vgorn].v, fgsGetVar(_bbvar_gorn));
	_fgs_signal_a(143);
#line 143 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(144);
#line 144 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_vgorn);
	par0[1] = _bb_dbgoto(1, &par0[0]);
	_fgs_signal_a(145);
#line 145 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_paso].v, fgsGetVar(_bbvar_vgorn));

	goto lbendcase14;
lbnextcase75:;
	fn_stk.lin_no = 146;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband76;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband76:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband77;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "SEEK");
	par0[3] = par0[4];
lband77:;
if(!if_u(par0[3])) goto lbnextcase78;
	_fgs_signal_a(148);
#line 148 "dbfapi.prg"
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "C");
if(!if_u(par0[0])) goto lbnextcase80;
	_fgs_signal_a(149);
#line 149 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valuec));

	goto lbendcase79;
lbnextcase80:;
	fn_stk.lin_no = 150;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "D");
if(!if_u(par0[0])) goto lbnextcase81;
	_fgs_signal_a(151);
#line 151 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valued));

	goto lbendcase79;
lbnextcase81:;
	fn_stk.lin_no = 152;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "N");
if(!if_u(par0[0])) goto lbnextcase82;
	_fgs_signal_a(153);
#line 153 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valuen));

	goto lbendcase79;
lbnextcase82:;
	fn_stk.lin_no = 154;

	lbendcase79:;
	_fgs_signal_a(155);
#line 155 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(156);
#line 156 "dbfapi.prg"
	par0[0] = mk_var_cp(fgsGetVar(_bbvar_vvalue));
	par0[1] = _bb_dbseek(1, &par0[0]);

	goto lbendcase14;
lbnextcase78:;
	fn_stk.lin_no = 157;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband83;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband83:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband84;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "SEARCH");
	par0[3] = par0[4];
lband84:;
if(!if_u(par0[3])) goto lbnextcase85;
	_fgs_signal_a(159);
#line 159 "dbfapi.prg"
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "C");
if(!if_u(par0[0])) goto lbnextcase87;
	_fgs_signal_a(160);
#line 160 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valuec));

	goto lbendcase86;
lbnextcase87:;
	fn_stk.lin_no = 161;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "D");
if(!if_u(par0[0])) goto lbnextcase88;
	_fgs_signal_a(162);
#line 162 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valued));

	goto lbendcase86;
lbnextcase88:;
	fn_stk.lin_no = 163;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_type), "N");
if(!if_u(par0[0])) goto lbnextcase89;
	_fgs_signal_a(164);
#line 164 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_vvalue].v, fgsGetVar(_bbvar_valuen));

	goto lbendcase86;
lbnextcase89:;
	fn_stk.lin_no = 165;

	lbendcase86:;
	_fgs_signal_a(166);
#line 166 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	par1[0] = set_bvar(cre_tmpvar(), _bb_cb_1_167_1, 8, 0);
	par0[0] = par1[0];
	par0[1] = cre_tmpvar();
	par0[2] = cre_tmpvar();
	par0[3] = cre_tmpvar();
	par0[4] = mk_var_cp(FALSE_VAR);
	par0[5] = _bb___dblocate(5, &par0[0]);

	goto lbendcase14;
lbnextcase85:;
	fn_stk.lin_no = 168;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband90;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband90:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband91;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "EOFP");
	par0[3] = par0[4];
lband91:;
if(!if_u(par0[3])) goto lbnextcase92;
	_fgs_signal_a(169);
#line 169 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(170);
#line 170 "dbfapi.prg"
	par0[0] = _bb_eof(0, 0);
	par0[1] = cpy_var  (mv_names[_bbvar_vvalue].v, par0[0]);
	_fgs_signal_a(171);
#line 171 "dbfapi.prg"
	par0[0] = set_cv("1");
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(172);
#line 172 "dbfapi.prg"
if(!if_u(fgsGetVar(_bbvar_vvalue))) goto lbelse93;
	_fgs_signal_a(173);
#line 173 "dbfapi.prg"
	par0[0] = set_cvar (fgsGetField(_bbvar_valuec), "T");

	goto lbendif93;
lbelse93:;
	fn_stk.lin_no = 174;
	_fgs_signal_a(175);
#line 175 "dbfapi.prg"
	par0[0] = set_cvar (fgsGetField(_bbvar_valuec), "F");

	lbendif93:;
	_fgs_signal_a(177);
#line 177 "dbfapi.prg"
	par0[0] = set_cvar (fgsGetField(_bbvar_done), "T");
	_fgs_signal_a(178);
#line 178 "dbfapi.prg"
	par0[0] = _bb_dbcommital(0, 0);

	goto lbendcase14;
lbnextcase92:;
	fn_stk.lin_no = 179;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband94;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband94:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband95;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "RECNO");
	par0[3] = par0[4];
lband95:;
if(!if_u(par0[3])) goto lbnextcase96;
	_fgs_signal_a(180);
#line 180 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(181);
#line 181 "dbfapi.prg"
	par0[0] = _bb_recno(0, 0);
	par0[1] = cpy_var  (mv_names[_bbvar_vvalue].v, par0[0]);
	_fgs_signal_a(182);
#line 182 "dbfapi.prg"
	par0[0] = set_cv("1");
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(183);
#line 183 "dbfapi.prg"
	par0[0] = cpy_var  (fgsGetField(_bbvar_valuen), fgsGetVar(_bbvar_vvalue));
	_fgs_signal_a(184);
#line 184 "dbfapi.prg"
	par0[0] = set_cvar (fgsGetField(_bbvar_done), "T");
	_fgs_signal_a(185);
#line 185 "dbfapi.prg"
	par0[0] = _bb_dbcommital(0, 0);

	goto lbendcase14;
lbnextcase96:;
	fn_stk.lin_no = 186;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband97;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband97:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband98;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "RECCOUNT");
	par0[3] = par0[4];
lband98:;
if(!if_u(par0[3])) goto lbnextcase99;
	_fgs_signal_a(187);
#line 187 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(188);
#line 188 "dbfapi.prg"
	par0[0] = _bb_reccount(0, 0);
	par0[1] = cpy_var  (mv_names[_bbvar_vvalue].v, par0[0]);
	_fgs_signal_a(189);
#line 189 "dbfapi.prg"
	par0[0] = set_cv("1");
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(190);
#line 190 "dbfapi.prg"
	par0[0] = cpy_var  (fgsGetField(_bbvar_valuen), fgsGetVar(_bbvar_vvalue));
	_fgs_signal_a(191);
#line 191 "dbfapi.prg"
	par0[0] = set_cvar (fgsGetField(_bbvar_done), "T");
	_fgs_signal_a(192);
#line 192 "dbfapi.prg"
	par0[0] = _bb_dbcommital(0, 0);

	goto lbendcase14;
lbnextcase99:;
	fn_stk.lin_no = 193;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband100;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband100:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband101;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "SKIP");
	par0[3] = par0[4];
lband101:;
if(!if_u(par0[3])) goto lbnextcase102;
	_fgs_signal_a(194);
#line 194 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_varea);
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(195);
#line 195 "dbfapi.prg"
	par0[0] = set_Iv((int) 1);
	par0[1] = _bb_dbskip(1, &par0[0]);

	goto lbendcase14;
lbnextcase102:;
	fn_stk.lin_no = 196;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband103;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband103:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband104;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "CREATE");
	par0[3] = par0[4];
lband104:;
if(!if_u(par0[3])) goto lbnextcase105;
	_fgs_signal_a(198);
#line 198 "dbfapi.prg"
	par0[0] = n_equ_u(0.0, fgsGetVar(_bbvar_refline));
if(!if_u(par0[0])) goto lbnextcase107;
	_fgs_signal_a(199);
#line 199 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_name);
	par0[1] = _bb_trim(1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_vtablename].v, par0[1]);
	_fgs_signal_a(200);
#line 200 "dbfapi.prg"
	par0[0] = cre_tmpvar();
	par0[1] = cre_arra(cre_tmpvar(), 0, 1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_camposstru].v, par0[1]);

	goto lbendcase106;
lbnextcase107:;
	fn_stk.lin_no = 201;
	par0[0] = n_lt_u(0.0, fgsGetVar(_bbvar_refline));
if(!if_u(par0[0])) goto lbnextcase108;
	_fgs_signal_a(202);
#line 202 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_camposstru);
	par1[0] = fgsGetVar(_bbvar_valuec);
	par1[1] = fgsGetVar(_bbvar_valuec2);
	par2[0] = fgsGetVar(_bbvar_valuen);
	par2[1] = _bb_int(1, &par2[0]);
	par1[2] = par2[1];
	par2[2] = fgsGetVar(_bbvar_valuen2);
	par2[3] = _bb_int(1, &par2[2]);
	par1[3] = par2[3];
	par1[4] = cre_arra(cre_tmpvar(), 4, 1, &par1[0]);
	par0[1] = par1[4];
	par0[2] = _bb_aadd(2, &par0[0]);
	_fgs_signal_a(203);
#line 203 "dbfapi.prg"
	par0[0] = n_equ_u(0.0, fgsGetVar(_bbvar_nrolinnext));
if(!if_u(par0[0])) goto lbelse109;
	_fgs_signal_a(204);
#line 204 "dbfapi.prg"
	par0[0] = mk_var_cp(fgsGetVar(_bbvar_tabla1));
	par0[1] = fgsGetVar(_bbvar_camposstru);
	par0[2] = _bb_dbcreate(2, &par0[0]);

	goto lbendif109;
lbelse109:;
	fn_stk.lin_no = 205;


	lbendif109:;

	goto lbendcase106;
lbnextcase108:;
	fn_stk.lin_no = 206;

	lbendcase106:;

	goto lbendcase14;
lbnextcase105:;
	fn_stk.lin_no = 207;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "DDL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband110;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_entity), "TABLE");
	par0[1] = par0[2];
lband110:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband111;
	par0[4] = u_equ_c(fgsGetVar(_bbvar_op), "GETFIELDS");
	par0[3] = par0[4];
lband111:;
if(!if_u(par0[3])) goto lbnextcase112;

	goto lbendcase14;
lbnextcase112:;
	fn_stk.lin_no = 208;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "CONTROL");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband113;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_op), "SLEEP");
	par0[1] = par0[2];
lband113:;
if(!if_u(par0[1])) goto lbnextcase114;
	_fgs_signal_a(209);
#line 209 "dbfapi.prg"
	par0[0] = mk_var_cp(fgsGetVar(_bbvar_valuen));
	par0[1] = _bb_sleep(1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_vpauseres].v, par0[1]);

	goto lbendcase14;
lbnextcase114:;
	fn_stk.lin_no = 210;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "CON");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband115;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_op), "CONCAT");
	par0[1] = par0[2];
lband115:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband116;
	par0[4] = n_equ_u(0.0, fgsGetVar(_bbvar_refby));
	par0[3] = par0[4];
lband116:;
if(!if_u(par0[3])) goto lbnextcase117;
	_fgs_signal_a(211);
#line 211 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_pvarname].v, fgsGetVar(_bbvar_name));
	_tmp_2_ = fgs_macro_declare(fgs_chararg(mv_names[_bbvar_pvarname].v,"&pvarname"));

	_fgs_signal_a(213);
#line 213 "dbfapi.prg"
	par0[1] = set_cvar (fgsGetLHSVar(fgs_chararg(mv_names[_bbvar_pvarname].v, "&pvarname")), "");

	goto lbendcase14;
lbnextcase117:;
	fn_stk.lin_no = 214;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "CON");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband118;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_op), "CONCAT");
	par0[1] = par0[2];
lband118:;
	par0[3] = par0[1];
if(!if_u(par0[3])) goto lband119;
	par0[4] = n_lt_u(0.0, fgsGetVar(_bbvar_refby));
	par0[3] = par0[4];
lband119:;
if(!if_u(par0[3])) goto lbnextcase120;
	_fgs_signal_a(215);
#line 215 "dbfapi.prg"
	par0[0] = n_lt_u(0.0, fgsGetVar(_bbvar_valuen));
if(!if_u(par0[0])) goto lbelse121;
	_fgs_signal_a(216);
#line 216 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_valuec);
	par0[1] = set_Iv((int) 1);
	par0[2] = fgsGetVar(_bbvar_valuen);
	par0[3] = _bb_substr(3, &par0[0]);
	par0[4] = u_add_u(exp_eval(fgs_chararg(mv_names[_bbvar_pvarname].v, "&pvarname")), par0[3], 0);
	par0[5] = cpy_var  (fgsGetLHSVar(fgs_chararg(mv_names[_bbvar_pvarname].v, "&pvarname")), par0[4]);

	goto lbendif121;
lbelse121:;
	fn_stk.lin_no = 217;
	_fgs_signal_a(218);
#line 218 "dbfapi.prg"
	par0[0] = u_add_u(exp_eval(fgs_chararg(mv_names[_bbvar_pvarname].v, "&pvarname")), fgsGetVar(_bbvar_valuec), 0);
	par0[1] = cpy_var  (fgsGetLHSVar(fgs_chararg(mv_names[_bbvar_pvarname].v, "&pvarname")), par0[0]);

	lbendif121:;

	goto lbendcase14;
lbnextcase120:;
	fn_stk.lin_no = 220;
	par0[0] = u_equ_c(fgsGetVar(_bbvar_ddldml), "CON");
	par0[1] = par0[0];
if(!if_u(par0[1])) goto lband122;
	par0[2] = u_equ_c(fgsGetVar(_bbvar_op), "QUIT");
	par0[1] = par0[2];
lband122:;
if(!if_u(par0[1])) goto lbnextcase123;
	_fgs_signal_a(221);
#line 221 "dbfapi.prg"
	par0[0] = _bb___quit(0, 0);

	goto lbendcase14;
lbnextcase123:;
	fn_stk.lin_no = 222;
	_fgs_signal_a(223);
#line 223 "dbfapi.prg"
	par0[0] = set_cvar (fgsGetField(_bbvar_valuec), "ERROR, EL COMANDO NO EXISTE.");

	lbendcase14:;
	_fgs_signal_a(225);
#line 225 "dbfapi.prg"
	par0[0] = set_cv("1");
	par0[1] = _bb_dbselectar(1, &par0[0]);
	_fgs_signal_a(226);
#line 226 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_refby].v, fgsGetVar(_bbvar_nrolinnext));
	_fgs_signal_a(227);
#line 227 "dbfapi.prg"
	par0[0] = cpy_var  (mv_names[_bbvar_refbynroli].v, fgsGetVar(_bbvar_nrolin));
	_fgs_signal_a(228);
#line 228 "dbfapi.prg"
	while(1) {
	del_tmpvars(fn_stk.tmv_now);
		fn_stk.lin_no = 228;
	par0[0] = _bb_recno(0, 0);
	par0[1] = _bb_lastrec(0, 0);
	par0[2] = u_equ_u(par0[0], par0[1]);
		if(!if_u(par0[2])) break;
	_fgs_signal_a(229);
#line 229 "dbfapi.prg"
	par0[0] = set_nv(0.5, 1);
	par0[1] = _bb_sleep(1, &par0[0]);
	par0[2] = cpy_var  (mv_names[_bbvar_pauseres].v, par0[1]);
	}

del_tmpvars(fn_stk.tmv_now);

	_fgs_signal_a(231);
#line 231 "dbfapi.prg"
	par0[0] = u_autoinc(mv_names[_bbvar_paso].v);
	_fgs_signal_a(232);
#line 232 "dbfapi.prg"
	par0[0] = fgsGetVar(_bbvar_paso);
	par0[1] = _bb_dbgoto(1, &par0[0]);
	}

del_tmpvars(fn_stk.tmv_now);

	_fgs_signal_a(234);
#line 234 "dbfapi.prg"
_adios:	return fgs_fn_end(&fn_stk, 'U');
}



static f_sym_tab loc_tab[] = {
	{ "dbfapi", _bb_dbfapi },
	{ "", 0 }
};

static g_sym_tab g_loc_tab = { "FSfntab", loc_tab };

static FSvoid refer_to_func()
{ 
    g_sym_tab *ss = &g_loc_tab;
    ss = &ss[1];
}


static struct f_var_tab var_tab[] = {
	{ "valuec", &_bbvar_valuec },
	{ "valued", &_bbvar_valued },
	{ "valuen", &_bbvar_valuen },
	{ "done", &_bbvar_done },
	{ "__excl_flg", &_bbvar___excl_flg },
	{ "tabla0", &_bbvar_tabla0 },
	{ "tabla1", &_bbvar_tabla1 },
	{ "tabla2", &_bbvar_tabla2 },
	{ "pname3", &_bbvar_pname3 },
	{ "ptype4", &_bbvar_ptype4 },
	{ "pvalue5", &_bbvar_pvalue5 },
	{ "pcreate6", &_bbvar_pcreate6 },
	{ "pgo7", &_bbvar_pgo7 },
	{ "pgorn8", &_bbvar_pgorn8 },
	{ "camposstru", &_bbvar_camposstru },
	{ "paso", &_bbvar_paso },
	{ "pauseres", &_bbvar_pauseres },
	{ "pvarname", &_bbvar_pvarname },
	{ "refby", &_bbvar_refby },
	{ "terminar", &_bbvar_terminar },
	{ "vgorn", &_bbvar_vgorn },
	{ "vname", &_bbvar_vname },
	{ "vpauseres", &_bbvar_vpauseres },
	{ "vtabla", &_bbvar_vtabla },
	{ "vtablename", &_bbvar_vtablename },
	{ "vvalue", &_bbvar_vvalue },
	{ "varea", &_bbvar_varea },
	{ "refbynroli", &_bbvar_refbynroli },
	{ "nil", &_bbvar_nil },
	{ "lineready", &_bbvar_lineready },
	{ "ddldml", &_bbvar_ddldml },
	{ "entity", &_bbvar_entity },
	{ "op", &_bbvar_op },
	{ "valor", &_bbvar_valor },
	{ "nombre", &_bbvar_nombre },
	{ "name", &_bbvar_name },
	{ "type", &_bbvar_type },
	{ "valuec2", &_bbvar_valuec2 },
	{ "gorn", &_bbvar_gorn },
	{ "refline", &_bbvar_refline },
	{ "valuen2", &_bbvar_valuen2 },
	{ "nrolinnext", &_bbvar_nrolinnext },
	{ "nrolin", &_bbvar_nrolin },
	{ "", &fgs_fs440 }
};

static struct g_var_tab g_var_tab = { "FSfntab", var_tab };

static FSvoid refer_to()
{ 
    struct g_var_tab *vv = &g_var_tab;
    vv = &vv[1];
}

static FSvoid init_ref_data()
{ 
	refer_to_func();
	refer_to();
}

