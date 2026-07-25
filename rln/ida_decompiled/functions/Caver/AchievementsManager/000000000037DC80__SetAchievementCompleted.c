/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037DC80
 * Mangled: _ZN5Caver19AchievementsManager23SetAchievementCompletedERKN5boost10shared_ptrINS_11AchievementEEEb
 * Demangled: Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *
 * Callers: 1
 *   0x0000000000200DD0  Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000002003A0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *   0x0000000000200780  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find(std::string const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 138
 *   insn=0x000000000037DC94 string=0x000000000037DC98 "X"
 *   insn=0x000000000037DC98 string=0x000000000037DC9C ""
 *   insn=0x000000000037DCB4 string=0x000000000037DDF4 ""
 *   insn=0x000000000037DCB8 string=0x000000000037DCBC "vB"
 *   insn=0x000000000037DCD0 string=0x000000000037DCD4 "W"
 *   insn=0x000000000037DCD8 string=0x000000000037DCDC "(a"
 *   insn=0x000000000037DCE4 string=0x000000000037DCE8 "hb"
 *   insn=0x000000000037DCE4 string=0x000000000037DE1C "*"
 *   insn=0x000000000037DCEC string=0x000000000037DCF0 "`"
 *   insn=0x000000000037DCF0 string=0x000000000037DCF4 "T"
 *   insn=0x000000000037DCF4 string=0x000000000037DCF8 "?"
 *   insn=0x000000000037DCF4 string=0x000000000037DD3C "h"
 *   insn=0x000000000037DD00 string=0x000000000037DD04 "\t"
 *   insn=0x000000000037DD1C string=0x000000000037DD20 "a\n"
 *   insn=0x000000000037DD20 string=0x000000000037DE6C ")"
 *   insn=0x000000000037DD24 string=0x000000000037DD28 "i"
 *   insn=0x000000000037DD28 string=0x000000000037DD2C ""
 *   insn=0x000000000037DD2C string=0x000000000037DD30 "("
 *   insn=0x000000000037DD30 string=0x000000000037DD34 "h"
 *   insn=0x000000000037DD3C string=0x000000000037DD40 "i"
 *   insn=0x000000000037DD40 string=0x000000000037DD44 "?"
 *   insn=0x000000000037DD44 string=0x000000000037DD48 "j"
 *   insn=0x000000000037DD4C string=0x0000000000590856 "achievementpoints"
 *   insn=0x000000000037DD5C string=0x000000000037DD60 "t"
 *   insn=0x000000000037DD7C string=0x000000000037DD80 "|"
 *   insn=0x000000000037DD8C string=0x000000000037DD90 "\t"
 *   insn=0x000000000037DDB0 string=0x000000000037DDB4 ""
 *   insn=0x000000000037DDB0 string=0x00000000001F93B0 "0'"
 *   insn=0x000000000037DDB4 string=0x000000000037DDB8 "q@"
 *   insn=0x000000000037DDD8 string=0x000000000037DE90 ")"
 *   insn=0x000000000037DDE4 string=0x000000000037DDE8 "a"
 *   insn=0x000000000037DDE8 string=0x000000000037DDEC "h"
 *   insn=0x000000000037DDE8 string=0x000000000037DEB4 ")"
 *   insn=0x000000000037DDEC string=0x000000000037DDF0 "h"
 *   insn=0x000000000037DE1C string=0x000000000037DE20 "J=G"
 *   insn=0x000000000037DE20 string=0x000000000037DE24 ")!"
 *   insn=0x000000000037DE28 string=0x000000000037DE2C "*"
 *   insn=0x000000000037DE28 string=0x000000000037DE40 "*"
 *   insn=0x000000000037DE2C string=0x000000000037DE30 "K"
 *   insn=0x000000000037DE30 string=0x000000000037DE34 "+"
 *   insn=0x000000000037DE3C string=0x000000000037DE4C "_"
 *   insn=0x000000000037DE40 string=0x000000000037DE44 "K"
 *   insn=0x000000000037DE44 string=0x000000000037DE48 "+"
 *   insn=0x000000000037DE5C string=0x000000000037DE60 "Q"
 *   insn=0x000000000037DE6C string=0x000000000037DE70 ")=G"
 *   insn=0x000000000037DE70 string=0x000000000037DE74 "!"
 *   insn=0x000000000037DE74 string=0x000000000037DE78 "\t"
 *   insn=0x000000000037DE78 string=0x000000000037DE7C "\t"
 *   insn=0x000000000037DE78 string=0x000000000037DED8 "\t"
 *   insn=0x000000000037DE7C string=0x000000000037DE80 "*"
 *   insn=0x000000000037DE80 string=0x000000000037DE84 "\n"
 *   insn=0x000000000037DE8C string=0x000000000037DEE4 "?"
 *   insn=0x000000000037DE90 string=0x000000000037DE94 ")=G"
 *   insn=0x000000000037DE94 string=0x000000000037DE98 "!"
 *   insn=0x000000000037DE9C string=0x000000000037DEA0 "\t"
 *   insn=0x000000000037DE9C string=0x000000000037DEF8 "\t"
 *   insn=0x000000000037DEA0 string=0x000000000037DEA4 "*"
 *   insn=0x000000000037DEA4 string=0x000000000037DEA8 "\n"
 *   insn=0x000000000037DEB0 string=0x000000000037DF04 "?"
 *   insn=0x000000000037DEB4 string=0x000000000037DEB8 ")=G"
 *   insn=0x000000000037DEB8 string=0x000000000037DEBC "!"
 *   insn=0x000000000037DEC0 string=0x000000000037DEC4 "\t"
 *   insn=0x000000000037DEC0 string=0x000000000037DF18 "\t"
 *   insn=0x000000000037DEC4 string=0x000000000037DEC8 "*"
 *   insn=0x000000000037DEC8 string=0x000000000037DECC "\n"
 *   insn=0x000000000037DED4 string=0x000000000037DF24 "?"
 *   insn=0x000000000037DED8 string=0x000000000037DEDC "*"
 *   insn=0x000000000037DEDC string=0x000000000037DEE0 "\n"
 *   insn=0x000000000037DEEC string=0x000000000037DEF0 "-"
 *   insn=0x000000000037DEF8 string=0x000000000037DEFC "*"
 *   insn=0x000000000037DEFC string=0x000000000037DF00 "\n"
 *   insn=0x000000000037DF0C string=0x000000000037DF10 "%"
 *   insn=0x000000000037DF18 string=0x000000000037DF1C "*"
 *   insn=0x000000000037DF1C string=0x000000000037DF20 "\n"
 *   insn=0x000000000037DF24 string=0x000000000037DF28 ","
 *   insn=0x000000000037DF38 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037DF44 string=0x000000000037DF48 "(a"
 *   insn=0x000000000037DF50 string=0x000000000037DF54 "*"
 *   insn=0x000000000037DF54 string=0x000000000037DF58 "J=G"
 *   insn=0x000000000037DF58 string=0x000000000037DF5C ")!"
 *   insn=0x000000000037DF60 string=0x000000000037DF64 "*"
 *   insn=0x000000000037DF60 string=0x000000000037E0D8 "*"
 *   insn=0x000000000037DF64 string=0x000000000037DF68 "K"
 *   insn=0x000000000037DF68 string=0x000000000037DF6C "+"
 *   insn=0x000000000037DF70 string=0x000000000037DF74 "R"
 *   insn=0x000000000037DF74 string=0x000000000037E0BC "_"
 *   insn=0x000000000037DF7C string=0x000000000037DF80 "(a"
 *   insn=0x000000000037DF88 string=0x000000000037DF8C "*"
 *   insn=0x000000000037DF8C string=0x000000000037DF90 "J=G"
 *   insn=0x000000000037DF90 string=0x000000000037DF94 ")!"
 *   insn=0x000000000037DF98 string=0x000000000037DF9C "*"
 *   insn=0x000000000037DF98 string=0x000000000037DFB0 "*"
 *   insn=0x000000000037DF9C string=0x000000000037DFA0 "K"
 *   insn=0x000000000037DFA0 string=0x000000000037DFA4 "+"
 *   insn=0x000000000037DFAC string=0x000000000037DFBC "_"
 *   insn=0x000000000037DFB0 string=0x000000000037DFB4 "K"
 *   insn=0x000000000037DFB4 string=0x000000000037DFB8 "+"
 *   insn=0x000000000037DFC4 string=0x000000000037DFC8 "%"
 *   insn=0x000000000037DFD0 string=0x000000000037DFD4 "(a"
 *   insn=0x000000000037DFD8 string=0x000000000037DFDC "!"
 *   insn=0x000000000037DFDC string=0x000000000037E020 "*"
 *   insn=0x000000000037DFE8 string=0x000000000037DFEC " "
 *   insn=0x000000000037DFEC string=0x000000000037DFF0 ")"
 *   insn=0x000000000037DFF0 string=0x000000000037DFF4 ")=G"
 *   insn=0x000000000037DFF4 string=0x000000000037DFF8 "!"
 *   insn=0x000000000037DFF8 string=0x000000000037DFFC "i"
 *   insn=0x000000000037DFFC string=0x000000000037E000 "\t"
 *   insn=0x000000000037DFFC string=0x000000000037E068 "\t"
 *   insn=0x000000000037E000 string=0x000000000037E004 "*"
 *   insn=0x000000000037E004 string=0x000000000037E008 "\n"
 *   insn=0x000000000037E00C string=0x000000000037E010 "?"
 *   insn=0x000000000037E018 string=0x000000000037E01C ","
 *   insn=0x000000000037E020 string=0x000000000037E024 "J=G"
 *   insn=0x000000000037E024 string=0x000000000037E028 ")!"
 *   insn=0x000000000037E02C string=0x000000000037E030 "*"
 *   insn=0x000000000037E02C string=0x000000000037E044 "*"
 *   insn=0x000000000037E030 string=0x000000000037E034 "K"
 *   insn=0x000000000037E034 string=0x000000000037E038 "+"
 *   insn=0x000000000037E040 string=0x000000000037E050 "_"
 *   insn=0x000000000037E044 string=0x000000000037E048 "K"
 *   insn=0x000000000037E048 string=0x000000000037E04C "+"
 *   insn=0x000000000037E050 string=0x000000000037E054 "l"
 *   insn=0x000000000037E068 string=0x000000000037E06C "*"
 *   insn=0x000000000037E06C string=0x000000000037E070 "\n"
 *   insn=0x000000000037E070 string=0x000000000037E074 "?"
 *   insn=0x000000000037E074 string=0x000000000037E078 ""
 *   insn=0x000000000037E080 string=0x000000000037E084 "*"
 *   insn=0x000000000037E084 string=0x000000000037E088 "J"
 *   insn=0x000000000037E08C string=0x000000000037E090 "(a"
 *   insn=0x000000000037E098 string=0x000000000037E09C "*"
 *   insn=0x000000000037E09C string=0x000000000037E0A0 "J=G"
 *   insn=0x000000000037E0A0 string=0x000000000037E0A4 ")!"
 *   insn=0x000000000037E0A8 string=0x000000000037E0AC "*"
 *   insn=0x000000000037E0AC string=0x000000000037E0B0 "K"
 *   insn=0x000000000037E0B0 string=0x000000000037E0B4 "+"
 *   insn=0x000000000037E0D8 string=0x000000000037E0DC "K"
 *   insn=0x000000000037E0DC string=0x000000000037E0E0 "+"
 *   insn=0x000000000037E0E0 string=0x000000000037E0E4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AchievementsManager::SetAchievementCompleted(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v6; // x1
  __int64 v7; // x0
  void *v8; // x8
  void *v9; // x0
  __int64 v10; // x20
  char *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x8
  Caver::OnlineController *v14; // x0
  __int64 v15; // x0
  char *v16; // x0
  void *v17; // x0
  unsigned int *v18; // x9
  int v19; // w10
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  unsigned int *v24; // x8
  int v25; // w9
  __int64 v26; // [xsp+8h] [xbp-78h]
  char *v27; // [xsp+10h] [xbp-70h] BYREF
  __int64 v28; // [xsp+20h] [xbp-60h] BYREF
  _QWORD v29[2]; // [xsp+30h] [xbp-50h] BYREF
  _BYTE v30[12]; // [xsp+44h] [xbp-3Ch] BYREF

  *(_QWORD *)&v30[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *a2;
  if ( !v6 )
    return;
  sub_56A528(v29, v6);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find();
  v8 = (void *)(v29[0] - 24LL);
  if ( (__int64 *)(v29[0] - 24LL) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v29[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
    {
      v26 = v7;
      operator delete(v8);
      v7 = v26;
    }
  }
  if ( a1 + 152 != v7 )
  {
    if ( (a3 & 1) == 0 )
      return;
    goto LABEL_8;
  }
  sub_56A528(v29, *a2);
  std::set<std::string>::insert();
  v9 = (void *)(v29[0] - 24LL);
  if ( (__int64 *)(v29[0] - 24LL) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v29[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v9);
  }
  *(_DWORD *)(a1 + 192) += *(_DWORD *)(*a2 + 24LL);
  if ( (a3 & 1) != 0 )
  {
LABEL_8:
    if ( *(_QWORD *)(a1 + 320) < *(int *)(a1 + 192) )
    {
      sub_566BB8((int)&v28, "achievementpoints");
      v10 = *(int *)(a1 + 192);
      v11 = &byte_6FD2F8;
      v27 = &byte_6FD2F8;
      v12 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
      v13 = v12;
      if ( (v10 & 0x80000000) != 0 )
      {
        *(_BYTE *)(v12 - 1) = 45;
        v13 = v12 - 1;
        v11 = v27;
      }
      v14 = (Caver::OnlineController *)sub_569E1C(&v27, 0, *((_QWORD *)v11 - 3), v13, &v30[-v13]);
      v15 = Caver::OnlineController::SharedController(v14);
      (*(void (__fastcall **)(__int64, __int64 *, __int64, char **))(*(_QWORD *)v15 + 224LL))(v15, &v28, v10, &v27);
      v16 = v27 - 24;
      if ( v27 - 24 != (char *)&qword_6FD2E0 )
      {
        v22 = (unsigned int *)(v27 - 8);
        if ( &pthread_create )
        {
          do
            v23 = __ldaxr(v22);
          while ( __stlxr(v23 - 1, v22) );
        }
        else
        {
          v23 = (*v22)--;
        }
        if ( v23 <= 0 )
          operator delete(v16);
      }
      v17 = (void *)(v28 - 24);
      if ( (__int64 *)(v28 - 24) != &qword_6FD2E0 )
      {
        v24 = (unsigned int *)(v28 - 8);
        if ( &pthread_create )
        {
          do
            v25 = __ldaxr(v24);
          while ( __stlxr(v25 - 1, v24) );
        }
        else
        {
          v25 = (*v24)--;
        }
        if ( v25 <= 0 )
          operator delete(v17);
      }
      *(_QWORD *)(a1 + 320) = *(int *)(a1 + 192);
    }
  }
}

