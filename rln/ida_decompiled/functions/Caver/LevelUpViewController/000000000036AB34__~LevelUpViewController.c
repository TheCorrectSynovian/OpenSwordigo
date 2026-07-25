/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036AB34
 * Mangled: _ZN5Caver21LevelUpViewControllerD2Ev
 * Demangled: Caver::LevelUpViewController::~LevelUpViewController()
 *
 * Callers: 1
 *   0x00000000001F9F10  Caver::LevelUpViewController::~LevelUpViewController()
 *
 * Callees: 6
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9F10  Caver::LevelUpViewController::~LevelUpViewController()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000036ACA4  Caver::MainMenuViewController::MainMenuViewController(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x000000000036AB48 string=0x000000000036AB4C "-@"
 *   insn=0x000000000036AB4C string=0x000000000036AB50 "t:@"
 *   insn=0x000000000036AB50 string=0x000000000036AB54 "\tA"
 *   insn=0x000000000036AB54 string=0x000000000036AB58 ""
 *   insn=0x000000000036AB58 string=0x000000000036AB5C "i"
 *   insn=0x000000000036AB5C string=0x000000000036AB60 "h&"
 *   insn=0x000000000036AB60 string=0x000000000036AB64 "4"
 *   insn=0x000000000036AB64 string=0x000000000036ABA8 "t2@"
 *   insn=0x000000000036AB68 string=0x000000000036AB6C ""
 *   insn=0x000000000036AB78 string=0x000000000036AB7C "\t@"
 *   insn=0x000000000036AB88 string=0x000000000036AB8C ""
 *   insn=0x000000000036AB98 string=0x000000000036AB9C "@"
 *   insn=0x000000000036ABA8 string=0x000000000036ABAC "4"
 *   insn=0x000000000036ABB0 string=0x000000000036ABB4 ""
 *   insn=0x000000000036ABC0 string=0x000000000036ABC4 "\t@"
 *   insn=0x000000000036ABD0 string=0x000000000036ABD4 ""
 *   insn=0x000000000036ABE0 string=0x000000000036ABE4 "@"
 *   insn=0x000000000036ABFC string=0x000000000036AC00 "d."
 *   insn=0x000000000036AC00 string=0x00000000001F6590 "0'"
 *   insn=0x000000000036AC10 string=0x000000000036AC14 "5"
 *   insn=0x000000000036AC18 string=0x000000000036AC1C ""
 *   insn=0x000000000036AC28 string=0x000000000036AC2C "\t@"
 *   insn=0x000000000036AC38 string=0x000000000036AC3C ""
 *   insn=0x000000000036AC48 string=0x000000000036AC4C "@"
 *   insn=0x000000000036AC58 string=0x000000000036AC5C "M."
 *   insn=0x000000000036AC7C string=0x00000000001F9F10 "0'"
 *   insn=0x000000000036AC8C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036AC9C string=0x000000000036ACA0 "\t["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LevelUpViewController::~LevelUpViewController(Caver::LevelUpViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 14);
  *(_QWORD *)this = off_6CC540;
  *((_QWORD *)this + 9) = &off_6CC5B0;
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

