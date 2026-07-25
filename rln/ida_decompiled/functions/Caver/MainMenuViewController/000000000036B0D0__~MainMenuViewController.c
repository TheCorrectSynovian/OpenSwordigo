/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036B0D0
 * Mangled: _ZN5Caver22MainMenuViewControllerD2Ev
 * Demangled: Caver::MainMenuViewController::~MainMenuViewController()
 *
 * Callers: 1
 *   0x00000000001FAC10  Caver::MainMenuViewController::~MainMenuViewController()
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F78D0  Caver::ProfileManager::RemoveDelegate(Caver::IProfileManagerDelegate *)
 *   0x00000000001FAC10  Caver::MainMenuViewController::~MainMenuViewController()
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x00000000001FB670  Caver::GameOptions::~GameOptions()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 112
 *   insn=0x000000000036B0E4 string=0x000000000036B0E8 "U"
 *   insn=0x000000000036B0E8 string=0x000000000036B0EC "}@"
 *   insn=0x000000000036B0F8 string=0x000000000036B0FC "\n!"
 *   insn=0x000000000036B0FC string=0x000000000036B100 "@"
 *   insn=0x000000000036B100 string=0x000000000036B104 "\n"
 *   insn=0x000000000036B104 string=0x000000000036B108 "@"
 *   insn=0x000000000036B10C string=0x000000000036B110 "\t"
 *   insn=0x000000000036B110 string=0x000000000036B114 "`"
 *   insn=0x000000000036B114 string=0x000000000036B118 " "
 *   insn=0x000000000036B118 string=0x000000000036B11C "\t"
 *   insn=0x000000000036B11C string=0x000000000036B120 " "
 *   insn=0x000000000036B120 string=0x000000000036B124 "\tA"
 *   insn=0x000000000036B124 string=0x000000000036B128 "i"
 *   insn=0x000000000036B128 string=0x000000000036B12C "A"
 *   insn=0x000000000036B130 string=0x000000000036B134 "h6"
 *   insn=0x000000000036B134 string=0x000000000036B138 "F?"
 *   insn=0x000000000036B138 string=0x00000000001FAE50 "0'"
 *   insn=0x000000000036B140 string=0x000000000036B144 "h"
 *   insn=0x000000000036B140 string=0x00000000001F78D0 "0'"
 *   insn=0x000000000036B148 string=0x000000000036B14C ")"
 *   insn=0x000000000036B158 string=0x000000000036B15C "t"
 *   insn=0x000000000036B15C string=0x000000000036B160 "4"
 *   insn=0x000000000036B160 string=0x000000000036B1A4 "tz@"
 *   insn=0x000000000036B164 string=0x000000000036B168 ""
 *   insn=0x000000000036B174 string=0x000000000036B178 "\t@"
 *   insn=0x000000000036B184 string=0x000000000036B188 ""
 *   insn=0x000000000036B194 string=0x000000000036B198 "@"
 *   insn=0x000000000036B1A4 string=0x000000000036B1A8 "4"
 *   insn=0x000000000036B1A8 string=0x000000000036B1EC "tr@"
 *   insn=0x000000000036B1AC string=0x000000000036B1B0 ""
 *   insn=0x000000000036B1BC string=0x000000000036B1C0 "\t@"
 *   insn=0x000000000036B1CC string=0x000000000036B1D0 ""
 *   insn=0x000000000036B1DC string=0x000000000036B1E0 "@"
 *   insn=0x000000000036B1EC string=0x000000000036B1F0 "4"
 *   insn=0x000000000036B1F0 string=0x000000000036B234 "`"
 *   insn=0x000000000036B1F4 string=0x000000000036B1F8 ""
 *   insn=0x000000000036B204 string=0x000000000036B208 "\t@"
 *   insn=0x000000000036B214 string=0x000000000036B218 ""
 *   insn=0x000000000036B224 string=0x000000000036B228 "@"
 *   insn=0x000000000036B238 string=0x000000000036B23C "t>@"
 *   insn=0x000000000036B238 string=0x00000000001FB670 "0'"
 *   insn=0x000000000036B23C string=0x000000000036B240 "4"
 *   insn=0x000000000036B244 string=0x000000000036B248 ""
 *   insn=0x000000000036B254 string=0x000000000036B258 "\t@"
 *   insn=0x000000000036B264 string=0x000000000036B268 ""
 *   insn=0x000000000036B274 string=0x000000000036B278 "@"
 *   insn=0x000000000036B288 string=0x00000000001F6590 "0'"
 *   insn=0x000000000036B294 string=0x000000000036B298 "!"
 *   insn=0x000000000036B2B0 string=0x000000000036B2B4 ")=G"
 *   insn=0x000000000036B2B4 string=0x000000000036B2B8 "!"
 *   insn=0x000000000036B2BC string=0x000000000036B2C0 "\t"
 *   insn=0x000000000036B2BC string=0x000000000036B2D4 "\t"
 *   insn=0x000000000036B2C0 string=0x000000000036B2C4 "*"
 *   insn=0x000000000036B2C4 string=0x000000000036B2C8 "\n"
 *   insn=0x000000000036B2D0 string=0x000000000036B2E0 "?"
 *   insn=0x000000000036B2D4 string=0x000000000036B2D8 "*"
 *   insn=0x000000000036B2D8 string=0x000000000036B2DC "\n"
 *   insn=0x000000000036B2E8 string=0x000000000036B2EC "."
 *   insn=0x000000000036B2EC string=0x000000000036B2F0 "t"
 *   insn=0x000000000036B2FC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036B300 string=0x000000000036B304 "m"
 *   insn=0x000000000036B308 string=0x000000000036B30C "W"
 *   insn=0x000000000036B30C string=0x000000000036B468 "`"
 *   insn=0x000000000036B310 string=0x000000000036B314 "ur@"
 *   insn=0x000000000036B318 string=0x000000000036B31C "S"
 *   insn=0x000000000036B320 string=0x000000000036B324 "uz@"
 *   insn=0x000000000036B328 string=0x000000000036B32C "="
 *   insn=0x000000000036B32C string=0x000000000036B420 "ur@"
 *   insn=0x000000000036B330 string=0x000000000036B334 "u>@"
 *   insn=0x000000000036B338 string=0x000000000036B33C "_"
 *   insn=0x000000000036B344 string=0x000000000036B348 "J"
 *   insn=0x000000000036B34C string=0x000000000036B350 "(a"
 *   insn=0x000000000036B358 string=0x000000000036B390 "u"
 *   insn=0x000000000036B35C string=0x000000000036B360 "J=G"
 *   insn=0x000000000036B360 string=0x000000000036B364 ")!"
 *   insn=0x000000000036B364 string=0x000000000036B368 "\n"
 *   insn=0x000000000036B368 string=0x000000000036B36C "*"
 *   insn=0x000000000036B368 string=0x000000000036B4C8 "*"
 *   insn=0x000000000036B36C string=0x000000000036B370 "K"
 *   insn=0x000000000036B370 string=0x000000000036B374 "+"
 *   insn=0x000000000036B378 string=0x000000000036B37C "_"
 *   insn=0x000000000036B390 string=0x000000000036B394 "5"
 *   insn=0x000000000036B394 string=0x000000000036B3D8 "uz@"
 *   insn=0x000000000036B398 string=0x000000000036B39C ""
 *   insn=0x000000000036B3A8 string=0x000000000036B3AC "\t@"
 *   insn=0x000000000036B3B8 string=0x000000000036B3BC ""
 *   insn=0x000000000036B3C8 string=0x000000000036B3CC "@"
 *   insn=0x000000000036B3D8 string=0x000000000036B3DC "5"
 *   insn=0x000000000036B3E0 string=0x000000000036B3E4 ""
 *   insn=0x000000000036B3F0 string=0x000000000036B3F4 "\t@"
 *   insn=0x000000000036B400 string=0x000000000036B404 ""
 *   insn=0x000000000036B410 string=0x000000000036B414 "@"
 *   insn=0x000000000036B420 string=0x000000000036B424 "5"
 *   insn=0x000000000036B428 string=0x000000000036B42C ""
 *   insn=0x000000000036B438 string=0x000000000036B43C "\t@"
 *   insn=0x000000000036B448 string=0x000000000036B44C ""
 *   insn=0x000000000036B458 string=0x000000000036B45C "@"
 *   insn=0x000000000036B46C string=0x000000000036B470 "u>@"
 *   insn=0x000000000036B470 string=0x000000000036B474 "5"
 *   insn=0x000000000036B478 string=0x000000000036B47C ""
 *   insn=0x000000000036B488 string=0x000000000036B48C "\t@"
 *   insn=0x000000000036B498 string=0x000000000036B49C ""
 *   insn=0x000000000036B4A8 string=0x000000000036B4AC "@"
 *   insn=0x000000000036B4B8 string=0x000000000036B4BC "5,"
 *   insn=0x000000000036B4C8 string=0x000000000036B4CC "K"
 *   insn=0x000000000036B4CC string=0x000000000036B4D0 "+"
 *   insn=0x000000000036B4D0 string=0x000000000036B4D4 "_"
 *   insn=0x000000000036B4D4 string=0x000000000036B4D8 "m"
 *   insn=0x000000000036B4F4 string=0x00000000001FAC10 "0'"
 *   insn=0x000000000036B500 string=0x000000000036B504 "k/"
 *   insn=0x000000000036B504 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036B50C string=0x000000000036B510 "h/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MainMenuViewController::~MainMenuViewController(Caver::MainMenuViewController *this)
{
  __int128 v2; // q0
  __int64 v3; // x8
  void *v4; // x0
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  unsigned int *v17; // x8
  int v18; // w9

  *(_QWORD *)&v2 = &off_6CC6C8;
  *((_QWORD *)&v2 + 1) = off_6CC6E8;
  _ReadStatusReg(TPIDR_EL0);
  *(_OWORD *)((char *)this + 72) = v2;
  *(_QWORD *)&v2 = &off_6CC720;
  *((_QWORD *)&v2 + 1) = &off_6CC738;
  *(_QWORD *)this = off_6CC610;
  *(_OWORD *)((char *)this + 88) = v2;
  *((_QWORD *)this + 13) = &off_6CC750;
  Caver::ProfileManager::sharedManager(this);
  Caver::ProfileManager::RemoveDelegate();
  v3 = *((_QWORD *)this + 36);
  v4 = (void *)(v3 - 24);
  if ( (__int64 *)(v3 - 24) == &qword_6FD2E0 )
    goto LABEL_2;
  v17 = (unsigned int *)(v3 - 8);
  if ( &pthread_create )
  {
    do
      v18 = __ldaxr(v17);
    while ( __stlxr(v18 - 1, v17) );
  }
  else
  {
    v18 = (*v17)--;
  }
  if ( v18 > 0 )
  {
LABEL_2:
    v5 = (_QWORD *)*((_QWORD *)this + 32);
    if ( !v5 )
      goto LABEL_6;
  }
  else
  {
    operator delete(v4);
    v5 = (_QWORD *)*((_QWORD *)this + 32);
    if ( !v5 )
      goto LABEL_6;
  }
  v6 = v5[1] - 1LL;
  v5[1] = v6;
  if ( !v6 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    v7 = v5[2] - 1LL;
    v5[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
  }
LABEL_6:
  v8 = (_QWORD *)*((_QWORD *)this + 30);
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
  v11 = (_QWORD *)*((_QWORD *)this + 28);
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  Caver::GameOptions::~GameOptions((Caver::MainMenuViewController *)((char *)this + 128));
  v14 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v14 )
  {
    v15 = v14[1] - 1LL;
    v14[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  Caver::GUIViewController::~GUIViewController(this);
}

