/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003482EC
 * Mangled: _ZN5Caver22GameOverViewControllerD2Ev
 * Demangled: Caver::GameOverViewController::~GameOverViewController()
 *
 * Callers: 1
 *   0x00000000001F49E0  Caver::GameOverViewController::~GameOverViewController()
 *
 * Callees: 6
 *   0x00000000001F49E0  Caver::GameOverViewController::~GameOverViewController()
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000034845C  boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>(Caver::GameOverView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x0000000000348300 string=0x0000000000348304 ""
 *   insn=0x0000000000348304 string=0x0000000000348308 "t:@"
 *   insn=0x0000000000348308 string=0x000000000034830C "\tA"
 *   insn=0x000000000034830C string=0x0000000000348310 ""
 *   insn=0x0000000000348310 string=0x0000000000348314 "i"
 *   insn=0x0000000000348314 string=0x0000000000348318 "h&"
 *   insn=0x0000000000348318 string=0x000000000034831C "4"
 *   insn=0x000000000034831C string=0x0000000000348360 "t2@"
 *   insn=0x0000000000348320 string=0x0000000000348324 ""
 *   insn=0x0000000000348330 string=0x0000000000348334 "\t@"
 *   insn=0x0000000000348340 string=0x0000000000348344 ""
 *   insn=0x0000000000348350 string=0x0000000000348354 "@"
 *   insn=0x0000000000348360 string=0x0000000000348364 "4"
 *   insn=0x0000000000348368 string=0x000000000034836C ""
 *   insn=0x0000000000348378 string=0x000000000034837C "\t@"
 *   insn=0x0000000000348388 string=0x000000000034838C ""
 *   insn=0x0000000000348398 string=0x000000000034839C "@"
 *   insn=0x00000000003483B4 string=0x00000000003483B8 "v"
 *   insn=0x00000000003483B8 string=0x00000000001F6590 "0'"
 *   insn=0x00000000003483C8 string=0x00000000003483CC "5"
 *   insn=0x00000000003483D0 string=0x00000000003483D4 ""
 *   insn=0x00000000003483E0 string=0x00000000003483E4 "\t@"
 *   insn=0x00000000003483F0 string=0x00000000003483F4 ""
 *   insn=0x0000000000348400 string=0x0000000000348404 "@"
 *   insn=0x0000000000348410 string=0x0000000000348414 "_"
 *   insn=0x0000000000348418 string=0x000000000034841C "*"
 *   insn=0x0000000000348430 string=0x0000000000348434 "k"
 *   insn=0x0000000000348434 string=0x00000000001F49E0 "P'"
 *   insn=0x0000000000348444 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000348454 string=0x0000000000348458 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameOverViewController::~GameOverViewController(Caver::GameOverViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 14);
  *(_QWORD *)this = off_6CB400;
  *((_QWORD *)this + 9) = &off_6CB470;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v5 )
  {
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
  }
  Caver::GUIViewController::~GUIViewController(this);
}

