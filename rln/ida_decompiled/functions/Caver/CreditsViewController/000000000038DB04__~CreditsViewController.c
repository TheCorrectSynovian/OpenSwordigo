/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038DB04
 * Mangled: _ZN5Caver21CreditsViewControllerD2Ev
 * Demangled: Caver::CreditsViewController::~CreditsViewController()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000038DC3C  boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(Caver::CreditsView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x000000000038DB14 string=0x000000000038DB18 "t*@"
 *   insn=0x000000000038DB18 string=0x000000000038DB1C "uE"
 *   insn=0x000000000038DB1C string=0x000000000038DB20 "A"
 *   insn=0x000000000038DB20 string=0x000000000038DB24 "h"
 *   insn=0x000000000038DB24 string=0x000000000038DB28 "4"
 *   insn=0x000000000038DB2C string=0x000000000038DB30 ""
 *   insn=0x000000000038DB3C string=0x000000000038DB40 "\t@"
 *   insn=0x000000000038DB4C string=0x000000000038DB50 ""
 *   insn=0x000000000038DB5C string=0x000000000038DB60 "@"
 *   insn=0x000000000038DB78 string=0x00000000001F6590 "0'"
 *   insn=0x000000000038DB88 string=0x000000000038DB8C "N"
 *   insn=0x000000000038DBA4 string=0x000000000038DBA8 "t*@"
 *   insn=0x000000000038DBA8 string=0x000000000038DBAC "uE"
 *   insn=0x000000000038DBAC string=0x000000000038DBB0 "A"
 *   insn=0x000000000038DBB0 string=0x000000000038DBB4 "h"
 *   insn=0x000000000038DBB4 string=0x000000000038DBB8 "4"
 *   insn=0x000000000038DBBC string=0x000000000038DBC0 ""
 *   insn=0x000000000038DBCC string=0x000000000038DBD0 "\t@"
 *   insn=0x000000000038DBDC string=0x000000000038DBE0 ""
 *   insn=0x000000000038DBEC string=0x000000000038DBF0 "@"
 *   insn=0x000000000038DBFC string=0x000000000038DC00 "d"
 *   insn=0x000000000038DC10 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000038DC18 string=0x000000000038DC1C "]"
 *   insn=0x000000000038DC34 string=0x000000000038DC38 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CreditsViewController::~CreditsViewController(Caver::CreditsViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 10);
  *(_QWORD *)this = off_6CDC70;
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
  Caver::GUIViewController::~GUIViewController(this);
}

