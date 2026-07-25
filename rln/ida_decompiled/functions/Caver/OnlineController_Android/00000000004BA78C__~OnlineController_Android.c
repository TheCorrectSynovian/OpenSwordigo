/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA78C
 * Mangled: _ZN5Caver24OnlineController_AndroidD2Ev
 * Demangled: Caver::OnlineController_Android::~OnlineController_Android()
 *
 * Callers: 1
 *   0x00000000001F6910  Caver::OnlineController_Android::~OnlineController_Android()
 *
 * Callees: 5
 *   0x00000000001F6910  Caver::OnlineController_Android::~OnlineController_Android()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004BA8A4  Caver::OnlineController_Android::AchievementsEnabled(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x00000000004BA798 string=0x00000000004BA79C "h"
 *   insn=0x00000000004BA79C string=0x00000000004BA7A0 ""
 *   insn=0x00000000004BA7A4 string=0x00000000004BA7A8 "A"
 *   insn=0x00000000004BA7A8 string=0x00000000004BA7AC "h"
 *   insn=0x00000000004BA7AC string=0x00000000004BA7B0 "t"
 *   insn=0x00000000004BA7B4 string=0x00000000004BA7B8 "`"
 *   insn=0x00000000004BA7C0 string=0x00000000004BA7C4 "H"
 *   insn=0x00000000004BA7C4 string=0x00000000004BA7C8 ""
 *   insn=0x00000000004BA7C8 string=0x00000000004BA7CC ""
 *   insn=0x00000000004BA7CC string=0x00000000004BA7D0 ""
 *   insn=0x00000000004BA7F0 string=0x00000000004BA7F4 "@"
 *   insn=0x00000000004BA7F4 string=0x00000000004BA7F8 ""
 *   insn=0x00000000004BA7F8 string=0x00000000004BA7FC ""
 *   insn=0x00000000004BA800 string=0x00000000004BA804 ""
 *   insn=0x00000000004BA804 string=0x00000000004BA808 "@"
 *   insn=0x00000000004BA814 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BA838 string=0x00000000004BA83C "("
 *   insn=0x00000000004BA83C string=0x00000000004BA840 "\t\t@"
 *   insn=0x00000000004BA840 string=0x00000000004BA844 ")"
 *   insn=0x00000000004BA844 string=0x00000000004BA848 "\t\t"
 *   insn=0x00000000004BA84C string=0x00000000004BA850 "\t"
 *   insn=0x00000000004BA850 string=0x00000000004BA854 ")@"
 *   insn=0x00000000004BA858 string=0x00000000004BA85C " "
 *   insn=0x00000000004BA878 string=0x00000000004BA87C "%"
 *   insn=0x00000000004BA87C string=0x00000000001F6910 "0'"
 *   insn=0x00000000004BA89C string=0x00000000004BA8A0 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OnlineController_Android::~OnlineController_Android(Caver::OnlineController_Android *this)
{
  char *v1; // x19
  char *v2; // x20
  __int64 v3; // x8
  char *v4; // x21
  void (__fastcall *v5)(char *, char *, __int64); // x8
  _QWORD *v6; // x0
  __int64 v7; // x8

  *(_QWORD *)this = off_6D78F0;
  v1 = (char *)this + 16;
  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 != (char *)this + 16 )
  {
    do
    {
      v3 = *((_QWORD *)v2 + 4);
      v4 = *(char **)v2;
      if ( v3 )
      {
        if ( (v3 & 1) == 0 )
        {
          v5 = *(void (__fastcall **)(char *, char *, __int64))(v3 & 0xFFFFFFFFFFFFFFFELL);
          if ( v5 )
            v5(v2 + 40, v2 + 40, 2);
        }
        *((_QWORD *)v2 + 4) = 0;
      }
      v6 = (_QWORD *)*((_QWORD *)v2 + 3);
      if ( v6 )
      {
        v7 = v6[2] - 1LL;
        v6[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      }
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != v1 );
  }
}

