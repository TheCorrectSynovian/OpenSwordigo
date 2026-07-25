/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003855E0
 * Mangled: _ZN5Caver33OfflineAchievementsViewControllerD2Ev
 * Demangled: Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController()
 *
 * Callers: 1
 *   0x00000000001F8A00  Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController()
 *
 * Callees: 6
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8A00  Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x00000000003855F0 string=0x00000000003855F4 ""
 *   insn=0x00000000003855F4 string=0x00000000003855F8 "t2@"
 *   insn=0x00000000003855F8 string=0x00000000003855FC "}E"
 *   insn=0x00000000003855FC string=0x0000000000385600 "A"
 *   insn=0x0000000000385600 string=0x0000000000385604 "h"
 *   insn=0x0000000000385604 string=0x0000000000385608 "4"
 *   insn=0x0000000000385608 string=0x000000000038564C "t*@"
 *   insn=0x000000000038560C string=0x0000000000385610 ""
 *   insn=0x000000000038561C string=0x0000000000385620 "\t@"
 *   insn=0x000000000038562C string=0x0000000000385630 ""
 *   insn=0x000000000038563C string=0x0000000000385640 "@"
 *   insn=0x000000000038564C string=0x0000000000385650 "4"
 *   insn=0x0000000000385654 string=0x0000000000385658 ""
 *   insn=0x0000000000385664 string=0x0000000000385668 "\t@"
 *   insn=0x0000000000385674 string=0x0000000000385678 ""
 *   insn=0x0000000000385684 string=0x0000000000385688 "@"
 *   insn=0x00000000003856A4 string=0x00000000001F6590 "0'"
 *   insn=0x00000000003856B4 string=0x00000000003856B8 "5"
 *   insn=0x00000000003856BC string=0x00000000003856C0 ""
 *   insn=0x00000000003856CC string=0x00000000003856D0 "\t@"
 *   insn=0x00000000003856DC string=0x00000000003856E0 ""
 *   insn=0x00000000003856EC string=0x00000000003856F0 "@"
 *   insn=0x0000000000385704 string=0x0000000000385708 "o"
 *   insn=0x0000000000385720 string=0x00000000001F8A00 "0'"
 *   insn=0x0000000000385730 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000385740 string=0x0000000000385744 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController(
        Caver::OfflineAchievementsViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 12);
  *(_QWORD *)this = off_6CD350;
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
  v5 = (_QWORD *)*((_QWORD *)this + 10);
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

