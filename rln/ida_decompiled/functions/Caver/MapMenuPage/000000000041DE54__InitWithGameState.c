/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041DE54
 * Mangled: _ZN5Caver11MapMenuPage17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEEb
 * Demangled: Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *
 * Callers: 2
 *   0x00000000001F8AF0  Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *
 * Callees: 7
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA6B0  Caver::MapView::SelectNode(boost::shared_ptr<Caver::MapNode> const&)
 *   0x00000000001FB7A0  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *   0x00000000001FD030  Caver::MapMenuPage::UpdateTitle(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 105
 *   insn=0x000000000041DE68 string=0x000000000041DE6C "W"
 *   insn=0x000000000041DE8C string=0x000000000041DE90 "\n"
 *   insn=0x000000000041DE8C string=0x000000000041DE9C "v"
 *   insn=0x000000000041DE90 string=0x000000000041DE94 "J"
 *   insn=0x000000000041DE94 string=0x000000000041DE98 "\n"
 *   insn=0x000000000041DE9C string=0x000000000041DEA0 "i""
 *   insn=0x000000000041DEA0 string=0x000000000041DEA4 "6"
 *   insn=0x000000000041DEA4 string=0x000000000041DEE8 "x"
 *   insn=0x000000000041DEA8 string=0x000000000041DEAC ""
 *   insn=0x000000000041DEBC string=0x000000000041DEC0 "\t@"
 *   insn=0x000000000041DEC8 string=0x000000000041DECC ""
 *   insn=0x000000000041DEDC string=0x000000000041DEE0 "@"
 *   insn=0x000000000041DEEC string=0x000000000041DEF0 "YW"
 *   insn=0x000000000041DEF4 string=0x000000000041DF04 "H"
 *   insn=0x000000000041DEF8 string=0x000000000041DEFC ")"
 *   insn=0x000000000041DF04 string=0x000000000041DF08 "v"
 *   insn=0x000000000041DF04 string=0x000000000041DF4C "V"
 *   insn=0x000000000041DF0C string=0x000000000041DF10 ""
 *   insn=0x000000000041DF10 string=0x000000000041DF14 ""
 *   insn=0x000000000041DF14 string=0x000000000041DF54 ""
 *   insn=0x000000000041DF18 string=0x000000000041DF1C "\t@"
 *   insn=0x000000000041DF28 string=0x000000000041DF2C ""
 *   insn=0x000000000041DF38 string=0x000000000041DF3C "@"
 *   insn=0x000000000041DF54 string=0x000000000041DF58 ""
 *   insn=0x000000000041DF58 string=0x000000000041DF5C ""
 *   insn=0x000000000041DF68 string=0x000000000041DF6C "\t@"
 *   insn=0x000000000041DF74 string=0x000000000041DF78 ""
 *   insn=0x000000000041DF88 string=0x000000000041DF8C "@"
 *   insn=0x000000000041DF94 string=0x000000000041DF98 ""
 *   insn=0x000000000041DF98 string=0x000000000041DF9C "\t"
 *   insn=0x000000000041DFA4 string=0x000000000041DFA8 "\t"
 *   insn=0x000000000041DFA4 string=0x000000000041DFB4 "`"
 *   insn=0x000000000041DFA8 string=0x000000000041DFAC ")"
 *   insn=0x000000000041DFAC string=0x000000000041DFB0 "\t"
 *   insn=0x000000000041DFC8 string=0x000000000041DFCC "u"
 *   insn=0x000000000041DFC8 string=0x00000000001FB7A0 "0'"
 *   insn=0x000000000041DFD0 string=0x000000000041DFD4 "DH"
 *   insn=0x000000000041DFD8 string=0x000000000041DFDC "("
 *   insn=0x000000000041DFE4 string=0x000000000041DFE8 "*W"
 *   insn=0x000000000041DFE8 string=0x00000000001F3C90 "P'"
 *   insn=0x000000000041DFF4 string=0x000000000041DFF8 "`"
 *   insn=0x000000000041DFF8 string=0x000000000041DFFC "i"
 *   insn=0x000000000041DFFC string=0x000000000041E000 ""
 *   insn=0x000000000041E000 string=0x000000000041E004 "!"
 *   insn=0x000000000041E004 string=0x000000000041E008 ""
 *   insn=0x000000000041E014 string=0x000000000041E018 "u"
 *   insn=0x000000000041E024 string=0x000000000041E028 "\t@"
 *   insn=0x000000000041E034 string=0x000000000041E038 ""
 *   insn=0x000000000041E044 string=0x000000000041E048 "@"
 *   insn=0x000000000041E060 string=0x000000000041E06C "`"
 *   insn=0x000000000041E074 string=0x000000000041E078 "\t"
 *   insn=0x000000000041E078 string=0x000000000041E07C ")"
 *   insn=0x000000000041E07C string=0x000000000041E080 "\t"
 *   insn=0x000000000041E088 string=0x00000000001FA6B0 "0'"
 *   insn=0x000000000041E08C string=0x000000000041E090 "4"
 *   insn=0x000000000041E094 string=0x000000000041E098 ""
 *   insn=0x000000000041E0A4 string=0x000000000041E0A8 "\t@"
 *   insn=0x000000000041E0B4 string=0x000000000041E0B8 ""
 *   insn=0x000000000041E0C4 string=0x000000000041E0C8 "@"
 *   insn=0x000000000041E0D8 string=0x000000000041E0DC "("
 *   insn=0x000000000041E0D8 string=0x00000000001FD030 "0'"
 *   insn=0x000000000041E0DC string=0x000000000041E0E0 "`"
 *   insn=0x000000000041E0DC string=0x0000000000583944 "\n"
 *   insn=0x000000000041E0EC string=0x000000000041E0F0 "h"
 *   insn=0x000000000041E0F0 string=0x000000000041E0F4 "-@"
 *   insn=0x000000000041E100 string=0x000000000041E104 "3"
 *   insn=0x000000000041E104 string=0x000000000041E108 "h"
 *   insn=0x000000000041E108 string=0x000000000041E10C ""
 *   insn=0x000000000041E10C string=0x000000000041E110 "h"
 *   insn=0x000000000041E114 string=0x000000000041E118 "h"
 *   insn=0x000000000041E11C string=0x000000000041E120 "\t@"
 *   insn=0x000000000041E124 string=0x000000000041E128 "h\n@"
 *   insn=0x000000000041E128 string=0x000000000041E12C ""
 *   insn=0x000000000041E12C string=0x000000000041E130 "h\n"
 *   insn=0x000000000041E134 string=0x000000000041E138 "h"
 *   insn=0x000000000041E13C string=0x000000000041E140 "@"
 *   insn=0x000000000041E154 string=0x000000000041E170 "X`"
 *   insn=0x000000000041E170 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000041E17C string=0x000000000041E180 ""
 *   insn=0x000000000041E180 string=0x000000000041E184 ""
 *   insn=0x000000000041E18C string=0x000000000041E190 "\t@"
 *   insn=0x000000000041E19C string=0x000000000041E1A0 ""
 *   insn=0x000000000041E1AC string=0x000000000041E1B0 "@"
 *   insn=0x000000000041E1B8 string=0x000000000041E1BC "("
 *   insn=0x000000000041E1C4 string=0x000000000041E1C8 "t"
 *   insn=0x000000000041E1CC string=0x000000000041E1D0 ""
 *   insn=0x000000000041E1DC string=0x000000000041E1E0 "\t@"
 *   insn=0x000000000041E1EC string=0x000000000041E1F0 ""
 *   insn=0x000000000041E1FC string=0x000000000041E200 "@"
 *   insn=0x000000000041E214 string=0x000000000041E218 "4"
 *   insn=0x000000000041E21C string=0x000000000041E220 ""
 *   insn=0x000000000041E22C string=0x000000000041E230 "\t@"
 *   insn=0x000000000041E23C string=0x000000000041E240 ""
 *   insn=0x000000000041E24C string=0x000000000041E250 "@"
 *   insn=0x000000000041E260 string=0x000000000041E264 ":"
 *   insn=0x000000000041E278 string=0x000000000041E27C "U"
 *   insn=0x000000000041E288 string=0x000000000041E28C "t"
 *   insn=0x000000000041E290 string=0x000000000041E294 "DH"
 *   insn=0x000000000041E298 string=0x000000000041E29C "("
 *   insn=0x000000000041E2A4 string=0x000000000041E2A8 "zV"
 *   insn=0x000000000041E2B4 string=0x000000000041E2B8 "`"
 *   insn=0x000000000041E2B8 string=0x000000000041E2BC "i"
 *   insn=0x000000000041E2BC string=0x000000000041E2C0 ""
 *   insn=0x000000000041E2C0 string=0x000000000041E2C4 "!"
 *   insn=0x000000000041E2C4 string=0x000000000041E2C8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapMenuPage::InitWithGameState(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v5; // x8
  __int64 v6; // x9
  char v7; // w24
  _QWORD *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x22
  _QWORD *v13; // x24
  __int64 v14; // x8
  __int64 v16; // x8
  _QWORD *v17; // x8
  __int64 v18; // x21
  void (__fastcall *v19)(__int64, __int64 *); // x22
  _QWORD *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x8
  _QWORD *v23; // x8
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 result; // x0
  __int64 v28; // x8
  __int64 v29; // x8
  _QWORD *v30; // [xsp+58h] [xbp-50h]
  __int64 v31; // [xsp+60h] [xbp-48h] BYREF
  _QWORD *v32; // [xsp+68h] [xbp-40h]
  __int64 v33; // [xsp+70h] [xbp-38h]

  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *a2;
  v5 = a2[1];
  v7 = a3 & 1;
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v8 = *(_QWORD **)(a1 + 264);
  *(_QWORD *)(a1 + 256) = v6;
  *(_QWORD *)(a1 + 264) = v5;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  *(_BYTE *)(a1 + 504) = v7;
  v11 = *(_QWORD *)(*a2 + 368LL);
  v12 = *(_QWORD **)(*a2 + 376LL);
  if ( v12 )
    ++v12[1];
  if ( v11 )
  {
    if ( !v12 )
      goto LABEL_20;
    v13 = v12 + 1;
    if ( !v12[1] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  else
  {
    if ( !v12 )
      goto LABEL_20;
    v13 = v12 + 1;
  }
  if ( (*v13)-- == 1 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    v16 = v12[2] - 1LL;
    v12[2] = v16;
    if ( !v16 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
  }
LABEL_20:
  v17 = *(_QWORD **)(*(_QWORD *)*a2 + 80LL);
  v30 = v17;
  if ( v17 )
    ++v17[1];
  Caver::MapView::Init();
  v18 = *(_QWORD *)(a1 + 456);
  v19 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 248LL);
  Caver::Rectangle::RectangleByOutsetting(&v31, (Caver::Rectangle *)(v18 + 132), 40.0);
  v19(v18, &v31);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 304LL))(
    *(_QWORD *)(a1 + 440),
    *(_QWORD *)(a1 + 456) + 116LL);
  v21 = *(_QWORD *)(*a2 + 368LL);
  v20 = *(_QWORD **)(*a2 + 376LL);
  if ( !v20 )
  {
    if ( !v21 )
      goto LABEL_36;
    v23 = 0;
    goto LABEL_30;
  }
  if ( !v20[1] )
  {
    (*(void (__fastcall **)(_QWORD))(*v20 + 16LL))(*(_QWORD *)(*a2 + 376LL));
    v22 = v20[2] - 1LL;
    v20[2] = v22;
    if ( !v22 )
      (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
  }
  if ( v21 )
  {
    v21 = *(_QWORD *)(*a2 + 368LL);
    v23 = *(_QWORD **)(*a2 + 376LL);
LABEL_30:
    v31 = v21;
    v32 = v23;
    if ( v23 )
      ++v23[1];
    Caver::MapView::SelectNode();
    v24 = v32;
    if ( v32 )
    {
      v25 = v32[1] - 1LL;
      v32[1] = v25;
      if ( !v25 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
        v26 = v24[2] - 1LL;
        v24[2] = v26;
        if ( !v26 )
          (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
      }
    }
  }
LABEL_36:
  result = Caver::MapMenuPage::UpdateTitle((Caver::MapMenuPage *)a1);
  if ( *(float *)(a1 + 140) > 0.01 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  if ( v30 )
  {
    v28 = v30[1] - 1LL;
    v30[1] = v28;
    if ( !v28 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
      v29 = v30[2] - 1LL;
      v30[2] = v29;
      if ( !v29 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
  }
  return result;
}

