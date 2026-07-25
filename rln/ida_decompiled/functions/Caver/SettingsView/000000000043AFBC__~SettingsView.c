/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043AFBC
 * Mangled: _ZN5Caver12SettingsViewD2Ev
 * Demangled: Caver::SettingsView::~SettingsView()
 *
 * Callers: 1
 *   0x00000000001FCF70  Caver::SettingsView::~SettingsView()
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000043B98C  Caver::SettingsView::~SettingsView()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 245
 *   insn=0x000000000043AFD0 string=0x000000000043AFD4 "V"
 *   insn=0x000000000043AFE0 string=0x000000000043AFE4 "h"
 *   insn=0x000000000043AFE4 string=0x000000000043AFE8 "`"
 *   insn=0x000000000043AFE8 string=0x000000000043AFEC "M@"
 *   insn=0x000000000043AFEC string=0x000000000043AFF0 "A"
 *   insn=0x000000000043AFF0 string=0x000000000043AFF4 "h"
 *   insn=0x000000000043AFF8 string=0x000000000043AFFC "@"
 *   insn=0x000000000043AFF8 string=0x000000000043B018 "`"
 *   insn=0x000000000043AFFC string=0x000000000043B000 ""
 *   insn=0x000000000043B000 string=0x000000000043B004 ""
 *   insn=0x000000000043B008 string=0x000000000043B00C ""
 *   insn=0x000000000043B00C string=0x000000000043B010 ""
 *   insn=0x000000000043B01C string=0x000000000043B020 "@"
 *   insn=0x000000000043B01C string=0x000000000043B03C "`"
 *   insn=0x000000000043B020 string=0x000000000043B024 ""
 *   insn=0x000000000043B024 string=0x000000000043B028 ""
 *   insn=0x000000000043B02C string=0x000000000043B030 ""
 *   insn=0x000000000043B030 string=0x000000000043B034 ""
 *   insn=0x000000000043B040 string=0x000000000043B044 "@"
 *   insn=0x000000000043B040 string=0x000000000043B060 "`"
 *   insn=0x000000000043B044 string=0x000000000043B048 ""
 *   insn=0x000000000043B048 string=0x000000000043B04C ""
 *   insn=0x000000000043B050 string=0x000000000043B054 ""
 *   insn=0x000000000043B054 string=0x000000000043B058 ""
 *   insn=0x000000000043B064 string=0x000000000043B068 "@"
 *   insn=0x000000000043B064 string=0x000000000043B084 "t"
 *   insn=0x000000000043B068 string=0x000000000043B06C ""
 *   insn=0x000000000043B06C string=0x000000000043B070 ""
 *   insn=0x000000000043B074 string=0x000000000043B078 ""
 *   insn=0x000000000043B078 string=0x000000000043B07C ""
 *   insn=0x000000000043B084 string=0x000000000043B088 "4"
 *   insn=0x000000000043B088 string=0x000000000043B0CC "t"
 *   insn=0x000000000043B08C string=0x000000000043B090 ""
 *   insn=0x000000000043B09C string=0x000000000043B0A0 "\t@"
 *   insn=0x000000000043B0AC string=0x000000000043B0B0 ""
 *   insn=0x000000000043B0BC string=0x000000000043B0C0 "@"
 *   insn=0x000000000043B0CC string=0x000000000043B0D0 "4"
 *   insn=0x000000000043B0D0 string=0x000000000043B114 "t"
 *   insn=0x000000000043B0D4 string=0x000000000043B0D8 ""
 *   insn=0x000000000043B0E4 string=0x000000000043B0E8 "\t@"
 *   insn=0x000000000043B0F4 string=0x000000000043B0F8 ""
 *   insn=0x000000000043B104 string=0x000000000043B108 "@"
 *   insn=0x000000000043B114 string=0x000000000043B118 "4"
 *   insn=0x000000000043B118 string=0x000000000043B15C "t"
 *   insn=0x000000000043B11C string=0x000000000043B120 ""
 *   insn=0x000000000043B12C string=0x000000000043B130 "\t@"
 *   insn=0x000000000043B13C string=0x000000000043B140 ""
 *   insn=0x000000000043B14C string=0x000000000043B150 "@"
 *   insn=0x000000000043B15C string=0x000000000043B160 "4"
 *   insn=0x000000000043B160 string=0x000000000043B1A4 "t^V"
 *   insn=0x000000000043B164 string=0x000000000043B168 ""
 *   insn=0x000000000043B174 string=0x000000000043B178 "\t@"
 *   insn=0x000000000043B184 string=0x000000000043B188 ""
 *   insn=0x000000000043B194 string=0x000000000043B198 "@"
 *   insn=0x000000000043B1AC string=0x000000000043B208 "t"
 *   insn=0x000000000043B1B0 string=0x000000000043B1B4 "5"
 *   insn=0x000000000043B1B8 string=0x000000000043B1BC ""
 *   insn=0x000000000043B1C8 string=0x000000000043B1CC "\t@"
 *   insn=0x000000000043B1D8 string=0x000000000043B1DC ""
 *   insn=0x000000000043B1E8 string=0x000000000043B1EC "@"
 *   insn=0x000000000043B200 string=0x000000000043B204 "t"
 *   insn=0x000000000043B208 string=0x000000000043B214 "t"
 *   insn=0x000000000043B20C string=0x000000000043B210 "("
 *   insn=0x000000000043B210 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000043B214 string=0x000000000043B218 "4"
 *   insn=0x000000000043B218 string=0x000000000043B25C "t"
 *   insn=0x000000000043B21C string=0x000000000043B220 ""
 *   insn=0x000000000043B22C string=0x000000000043B230 "\t@"
 *   insn=0x000000000043B23C string=0x000000000043B240 ""
 *   insn=0x000000000043B24C string=0x000000000043B250 "@"
 *   insn=0x000000000043B25C string=0x000000000043B260 "4"
 *   insn=0x000000000043B260 string=0x000000000043B2A4 "t"
 *   insn=0x000000000043B264 string=0x000000000043B268 ""
 *   insn=0x000000000043B274 string=0x000000000043B278 "\t@"
 *   insn=0x000000000043B284 string=0x000000000043B288 ""
 *   insn=0x000000000043B294 string=0x000000000043B298 "@"
 *   insn=0x000000000043B2A4 string=0x000000000043B2A8 "4"
 *   insn=0x000000000043B2A8 string=0x000000000043B2EC "t"
 *   insn=0x000000000043B2AC string=0x000000000043B2B0 ""
 *   insn=0x000000000043B2BC string=0x000000000043B2C0 "\t@"
 *   insn=0x000000000043B2CC string=0x000000000043B2D0 ""
 *   insn=0x000000000043B2DC string=0x000000000043B2E0 "@"
 *   insn=0x000000000043B2EC string=0x000000000043B2F0 "4"
 *   insn=0x000000000043B2F0 string=0x000000000043B334 "t"
 *   insn=0x000000000043B2F4 string=0x000000000043B2F8 ""
 *   insn=0x000000000043B304 string=0x000000000043B308 "\t@"
 *   insn=0x000000000043B314 string=0x000000000043B318 ""
 *   insn=0x000000000043B324 string=0x000000000043B328 "@"
 *   insn=0x000000000043B334 string=0x000000000043B338 "4"
 *   insn=0x000000000043B338 string=0x000000000043B37C "t"
 *   insn=0x000000000043B33C string=0x000000000043B340 ""
 *   insn=0x000000000043B34C string=0x000000000043B350 "\t@"
 *   insn=0x000000000043B35C string=0x000000000043B360 ""
 *   insn=0x000000000043B36C string=0x000000000043B370 "@"
 *   insn=0x000000000043B37C string=0x000000000043B380 "4"
 *   insn=0x000000000043B380 string=0x000000000043B3C4 "hz@"
 *   insn=0x000000000043B384 string=0x000000000043B388 ""
 *   insn=0x000000000043B394 string=0x000000000043B398 "\t@"
 *   insn=0x000000000043B3A4 string=0x000000000043B3A8 ""
 *   insn=0x000000000043B3B4 string=0x000000000043B3B8 "@"
 *   insn=0x000000000043B3C4 string=0x000000000043B3C8 "I"
 *   insn=0x000000000043B3C8 string=0x000000000043B3CC "J"
 *   insn=0x000000000043B3CC string=0x000000000043B3D0 ")"
 *   insn=0x000000000043B3D0 string=0x000000000043B3D4 "J"
 *   insn=0x000000000043B3D8 string=0x000000000043B3DC ")A"
 *   insn=0x000000000043B3E0 string=0x000000000043B3E4 "i"
 *   insn=0x000000000043B3E8 string=0x000000000043B41C "I"
 *   insn=0x000000000043B41C string=0x000000000043B420 ")=G"
 *   insn=0x000000000043B420 string=0x000000000043B424 "!"
 *   insn=0x000000000043B428 string=0x000000000043B42C "\t"
 *   insn=0x000000000043B428 string=0x000000000043B440 "\t"
 *   insn=0x000000000043B42C string=0x000000000043B430 "*"
 *   insn=0x000000000043B430 string=0x000000000043B434 "\n"
 *   insn=0x000000000043B43C string=0x000000000043B44C "?"
 *   insn=0x000000000043B440 string=0x000000000043B444 "*"
 *   insn=0x000000000043B444 string=0x000000000043B448 "\n"
 *   insn=0x000000000043B460 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043B464 string=0x000000000043B468 "u"
 *   insn=0x000000000043B468 string=0x000000000043B46C "5"
 *   insn=0x000000000043B46C string=0x000000000043B470 "Z"
 *   insn=0x000000000043B470 string=0x000000000043B5D8 "u"
 *   insn=0x000000000043B474 string=0x000000000043B478 "`"
 *   insn=0x000000000043B47C string=0x000000000043B480 """
 *   insn=0x000000000043B47C string=0x000000000043B4EC "@"
 *   insn=0x000000000043B480 string=0x000000000043B508 "u"
 *   insn=0x000000000043B484 string=0x000000000043B488 "`"
 *   insn=0x000000000043B48C string=0x000000000043B4C8 "@"
 *   insn=0x000000000043B490 string=0x000000000043B4E4 "`"
 *   insn=0x000000000043B498 string=0x000000000043B49C "("
 *   insn=0x000000000043B49C string=0x000000000043B4A0 "\t\t@"
 *   insn=0x000000000043B49C string=0x000000000043B4C0 "`"
 *   insn=0x000000000043B4A0 string=0x000000000043B4A4 ")"
 *   insn=0x000000000043B4A4 string=0x000000000043B4A8 "\t\t"
 *   insn=0x000000000043B4AC string=0x000000000043B4B0 "\t"
 *   insn=0x000000000043B4B0 string=0x000000000043B4B4 ")"
 *   insn=0x000000000043B4B8 string=0x000000000043B4BC " "
 *   insn=0x000000000043B4C8 string=0x000000000043B4CC ""
 *   insn=0x000000000043B4CC string=0x000000000043B4D0 ""
 *   insn=0x000000000043B4D4 string=0x000000000043B4D8 ""
 *   insn=0x000000000043B4D8 string=0x000000000043B4DC ""
 *   insn=0x000000000043B4EC string=0x000000000043B4F0 ""
 *   insn=0x000000000043B4F0 string=0x000000000043B4F4 ""
 *   insn=0x000000000043B4F8 string=0x000000000043B4FC ""
 *   insn=0x000000000043B4FC string=0x000000000043B500 ""
 *   insn=0x000000000043B508 string=0x000000000043B50C "u"
 *   insn=0x000000000043B510 string=0x000000000043B514 ""
 *   insn=0x000000000043B520 string=0x000000000043B524 "\t@"
 *   insn=0x000000000043B530 string=0x000000000043B534 ""
 *   insn=0x000000000043B540 string=0x000000000043B544 "@"
 *   insn=0x000000000043B54C string=0x000000000043B550 """
 *   insn=0x000000000043B558 string=0x000000000043B900 "hz@"
 *   insn=0x000000000043B55C string=0x000000000043B560 "u"
 *   insn=0x000000000043B56C string=0x000000000043B570 "u"
 *   insn=0x000000000043B570 string=0x000000000043B574 "5"
 *   insn=0x000000000043B578 string=0x000000000043B8B8 "u"
 *   insn=0x000000000043B57C string=0x000000000043B580 "u"
 *   insn=0x000000000043B580 string=0x000000000043B584 "u"
 *   insn=0x000000000043B588 string=0x000000000043B870 "u"
 *   insn=0x000000000043B58C string=0x000000000043B590 "u"
 *   insn=0x000000000043B598 string=0x000000000043B828 "u"
 *   insn=0x000000000043B59C string=0x000000000043B5A0 "u"
 *   insn=0x000000000043B5A8 string=0x000000000043B7E0 "u"
 *   insn=0x000000000043B5AC string=0x000000000043B5B0 "@"
 *   insn=0x000000000043B5B0 string=0x000000000043B6B0 "u^V"
 *   insn=0x000000000043B5B4 string=0x000000000043B5B8 "u"
 *   insn=0x000000000043B5BC string=0x000000000043B5C0 "<"
 *   insn=0x000000000043B5C4 string=0x000000000043B5C8 "u"
 *   insn=0x000000000043B5CC string=0x000000000043B5D0 "&"
 *   insn=0x000000000043B5D0 string=0x000000000043B668 "u"
 *   insn=0x000000000043B5D8 string=0x000000000043B5DC "5"
 *   insn=0x000000000043B5DC string=0x000000000043B620 "u"
 *   insn=0x000000000043B5E0 string=0x000000000043B5E4 ""
 *   insn=0x000000000043B5F0 string=0x000000000043B5F4 "\t@"
 *   insn=0x000000000043B600 string=0x000000000043B604 ""
 *   insn=0x000000000043B610 string=0x000000000043B614 "@"
 *   insn=0x000000000043B620 string=0x000000000043B624 "5"
 *   insn=0x000000000043B628 string=0x000000000043B62C ""
 *   insn=0x000000000043B638 string=0x000000000043B63C "\t@"
 *   insn=0x000000000043B648 string=0x000000000043B64C ""
 *   insn=0x000000000043B658 string=0x000000000043B65C "@"
 *   insn=0x000000000043B668 string=0x000000000043B66C "5"
 *   insn=0x000000000043B670 string=0x000000000043B674 ""
 *   insn=0x000000000043B680 string=0x000000000043B684 "\t@"
 *   insn=0x000000000043B690 string=0x000000000043B694 ""
 *   insn=0x000000000043B6A0 string=0x000000000043B6A4 "@"
 *   insn=0x000000000043B6BC string=0x000000000043B6C0 "6"
 *   insn=0x000000000043B6C4 string=0x000000000043B6C8 ""
 *   insn=0x000000000043B6D4 string=0x000000000043B6D8 "\t@"
 *   insn=0x000000000043B6E4 string=0x000000000043B6E8 ""
 *   insn=0x000000000043B6F4 string=0x000000000043B6F8 "@"
 *   insn=0x000000000043B70C string=0x000000000043B710 "u"
 *   insn=0x000000000043B714 string=0x000000000043B750 "u"
 *   insn=0x000000000043B738 string=0x000000000043B73C "h"
 *   insn=0x000000000043B740 string=0x000000000043B744 "h"
 *   insn=0x000000000043B750 string=0x000000000043B754 "5"
 *   insn=0x000000000043B754 string=0x000000000043B798 "u"
 *   insn=0x000000000043B758 string=0x000000000043B75C ""
 *   insn=0x000000000043B768 string=0x000000000043B76C "\t@"
 *   insn=0x000000000043B778 string=0x000000000043B77C ""
 *   insn=0x000000000043B788 string=0x000000000043B78C "@"
 *   insn=0x000000000043B798 string=0x000000000043B79C "5"
 *   insn=0x000000000043B7A0 string=0x000000000043B7A4 ""
 *   insn=0x000000000043B7B0 string=0x000000000043B7B4 "\t@"
 *   insn=0x000000000043B7C0 string=0x000000000043B7C4 ""
 *   insn=0x000000000043B7D0 string=0x000000000043B7D4 "@"
 *   insn=0x000000000043B7E0 string=0x000000000043B7E4 "5"
 *   insn=0x000000000043B7E8 string=0x000000000043B7EC ""
 *   insn=0x000000000043B7F8 string=0x000000000043B7FC "\t@"
 *   insn=0x000000000043B808 string=0x000000000043B80C ""
 *   insn=0x000000000043B818 string=0x000000000043B81C "@"
 *   insn=0x000000000043B828 string=0x000000000043B82C "5"
 *   insn=0x000000000043B830 string=0x000000000043B834 ""
 *   insn=0x000000000043B840 string=0x000000000043B844 "\t@"
 *   insn=0x000000000043B850 string=0x000000000043B854 ""
 *   insn=0x000000000043B860 string=0x000000000043B864 "@"
 *   insn=0x000000000043B870 string=0x000000000043B874 "5"
 *   insn=0x000000000043B878 string=0x000000000043B87C ""
 *   insn=0x000000000043B888 string=0x000000000043B88C "\t@"
 *   insn=0x000000000043B898 string=0x000000000043B89C ""
 *   insn=0x000000000043B8A8 string=0x000000000043B8AC "@"
 *   insn=0x000000000043B8B8 string=0x000000000043B8BC "5"
 *   insn=0x000000000043B8C0 string=0x000000000043B8C4 ""
 *   insn=0x000000000043B8D0 string=0x000000000043B8D4 "\t@"
 *   insn=0x000000000043B8E0 string=0x000000000043B8E4 ""
 *   insn=0x000000000043B8F0 string=0x000000000043B8F4 "@"
 *   insn=0x000000000043B900 string=0x000000000043B904 "I"
 *   insn=0x000000000043B904 string=0x000000000043B908 "J"
 *   insn=0x000000000043B908 string=0x000000000043B90C ")"
 *   insn=0x000000000043B90C string=0x000000000043B910 "J"
 *   insn=0x000000000043B914 string=0x000000000043B918 ")A"
 *   insn=0x000000000043B91C string=0x000000000043B920 "i"
 *   insn=0x000000000043B924 string=0x000000000043B928 "I"
 *   insn=0x000000000043B928 string=0x000000000043B92C ")=G"
 *   insn=0x000000000043B92C string=0x000000000043B930 "!"
 *   insn=0x000000000043B934 string=0x000000000043B938 "\t"
 *   insn=0x000000000043B934 string=0x000000000043B968 "\t"
 *   insn=0x000000000043B938 string=0x000000000043B93C "*"
 *   insn=0x000000000043B93C string=0x000000000043B940 "\n"
 *   insn=0x000000000043B944 string=0x000000000043B948 "?"
 *   insn=0x000000000043B948 string=0x000000000043B94C "l"
 *   insn=0x000000000043B958 string=0x000000000043B95C "5"
 *   insn=0x000000000043B968 string=0x000000000043B96C "*"
 *   insn=0x000000000043B96C string=0x000000000043B970 "\n"
 *   insn=0x000000000043B970 string=0x000000000043B974 "?"
 *   insn=0x000000000043B984 string=0x000000000043B988 "qJ"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SettingsView::~SettingsView(Caver::SettingsView *this)
{
  _DWORD *v2; // x0
  int v3; // w8
  _DWORD *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8
  _DWORD *v8; // x0
  int v9; // w8
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  _QWORD *v23; // x23
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x20
  __int64 v28; // x8
  __int64 v29; // x8
  _QWORD *v30; // x20
  __int64 v31; // x8
  __int64 v32; // x8
  _QWORD *v33; // x20
  __int64 v34; // x8
  __int64 v35; // x8
  _QWORD *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x8
  _QWORD *v39; // x20
  __int64 v40; // x8
  __int64 v41; // x8
  _QWORD *v42; // x20
  __int64 v43; // x8
  __int64 v44; // x8
  __int64 v45; // x8
  void *v46; // x0
  unsigned int *v47; // x8
  int v48; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_DWORD *)*((_QWORD *)this + 59);
  *(_QWORD *)this = off_6D38E0;
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v4 = (_DWORD *)*((_QWORD *)this + 58);
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (_DWORD *)*((_QWORD *)this + 57);
  if ( v6 )
  {
    v7 = v6[2] - 1;
    v6[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v8 = (_DWORD *)*((_QWORD *)this + 56);
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v10 = (_QWORD *)*((_QWORD *)this + 54);
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v13 = (_QWORD *)*((_QWORD *)this + 52);
  if ( v13 )
  {
    v14 = v13[1] - 1LL;
    v13[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  v16 = (_QWORD *)*((_QWORD *)this + 50);
  if ( v16 )
  {
    v17 = v16[1] - 1LL;
    v16[1] = v17;
    if ( !v17 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
      v18 = v16[2] - 1LL;
      v16[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
    }
  }
  v19 = (_QWORD *)*((_QWORD *)this + 48);
  if ( v19 )
  {
    v20 = v19[1] - 1LL;
    v19[1] = v20;
    if ( !v20 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v21 = v19[2] - 1LL;
      v19[2] = v21;
      if ( !v21 )
        (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
    }
  }
  v22 = (_QWORD *)*((_QWORD *)this + 44);
  v23 = (_QWORD *)*((_QWORD *)this + 45);
  if ( v22 != v23 )
  {
    do
    {
      v24 = (_QWORD *)v22[1];
      if ( v24 )
      {
        v25 = v24[1] - 1LL;
        v24[1] = v25;
        if ( !v25 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
          v26 = v24[2] - 1LL;
          v24[2] = v26;
          if ( !v26 )
            (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
        }
      }
      v22 += 2;
    }
    while ( v23 != v22 );
    v22 = (_QWORD *)*((_QWORD *)this + 44);
  }
  if ( v22 )
    operator delete(v22);
  v27 = (_QWORD *)*((_QWORD *)this + 43);
  if ( v27 )
  {
    v28 = v27[1] - 1LL;
    v27[1] = v28;
    if ( !v28 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      v29 = v27[2] - 1LL;
      v27[2] = v29;
      if ( !v29 )
        (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    }
  }
  v30 = (_QWORD *)*((_QWORD *)this + 41);
  if ( v30 )
  {
    v31 = v30[1] - 1LL;
    v30[1] = v31;
    if ( !v31 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
      v32 = v30[2] - 1LL;
      v30[2] = v32;
      if ( !v32 )
        (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
  }
  v33 = (_QWORD *)*((_QWORD *)this + 39);
  if ( v33 )
  {
    v34 = v33[1] - 1LL;
    v33[1] = v34;
    if ( !v34 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
      v35 = v33[2] - 1LL;
      v33[2] = v35;
      if ( !v35 )
        (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
    }
  }
  v36 = (_QWORD *)*((_QWORD *)this + 37);
  if ( v36 )
  {
    v37 = v36[1] - 1LL;
    v36[1] = v37;
    if ( !v37 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
      v38 = v36[2] - 1LL;
      v36[2] = v38;
      if ( !v38 )
        (*(void (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
    }
  }
  v39 = (_QWORD *)*((_QWORD *)this + 35);
  if ( v39 )
  {
    v40 = v39[1] - 1LL;
    v39[1] = v40;
    if ( !v40 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
      v41 = v39[2] - 1LL;
      v39[2] = v41;
      if ( !v41 )
        (*(void (__fastcall **)(_QWORD *))(*v39 + 24LL))(v39);
    }
  }
  v42 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v42 )
  {
    v43 = v42[1] - 1LL;
    v42[1] = v43;
    if ( !v43 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
      v44 = v42[2] - 1LL;
      v42[2] = v44;
      if ( !v44 )
        (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
    }
  }
  v45 = *((_QWORD *)this + 30);
  v46 = (void *)(v45 - 24);
  *(_QWORD *)this = off_6D13B8;
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v47 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v48 = __ldaxr(v47);
      while ( __stlxr(v48 - 1, v47) );
    }
    else
    {
      v48 = (*v47)--;
    }
    if ( v48 <= 0 )
      operator delete(v46);
  }
  Caver::GUIView::~GUIView(this);
}

