/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4B94
 * Mangled: _ZN5Caver30ProfileSelectionViewControllerD2Ev
 * Demangled: Caver::ProfileSelectionViewController::~ProfileSelectionViewController()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A4CDC  boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>(Caver::ProfileSelectionView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x00000000003A4B9C string=0x00000000003A4BA0 ""
 *   insn=0x00000000003A4BA4 string=0x00000000003A4BA8 "y@"
 *   insn=0x00000000003A4BA8 string=0x00000000003A4BAC "t2@"
 *   insn=0x00000000003A4BAC string=0x00000000003A4BB0 "\tA"
 *   insn=0x00000000003A4BB0 string=0x00000000003A4BB4 "!"
 *   insn=0x00000000003A4BB4 string=0x00000000003A4BB8 "i"
 *   insn=0x00000000003A4BB8 string=0x00000000003A4BBC "h&"
 *   insn=0x00000000003A4BBC string=0x00000000003A4BC0 "4"
 *   insn=0x00000000003A4BC4 string=0x00000000003A4BC8 ""
 *   insn=0x00000000003A4BD4 string=0x00000000003A4BD8 "\t@"
 *   insn=0x00000000003A4BE4 string=0x00000000003A4BE8 ""
 *   insn=0x00000000003A4BF4 string=0x00000000003A4BF8 "@"
 *   insn=0x00000000003A4C0C string=0x00000000003A4C10 "`F"
 *   insn=0x00000000003A4C10 string=0x00000000001F6590 "0'"
 *   insn=0x00000000003A4C18 string=0x00000000003A4C1C "]F"
 *   insn=0x00000000003A4C20 string=0x00000000003A4C24 "(s"
 *   insn=0x00000000003A4C34 string=0x00000000003A4C38 ""
 *   insn=0x00000000003A4C3C string=0x00000000003A4C40 "y@"
 *   insn=0x00000000003A4C40 string=0x00000000003A4C44 "t2@"
 *   insn=0x00000000003A4C44 string=0x00000000003A4C48 "\tA"
 *   insn=0x00000000003A4C48 string=0x00000000003A4C4C "!"
 *   insn=0x00000000003A4C4C string=0x00000000003A4C50 "i"
 *   insn=0x00000000003A4C50 string=0x00000000003A4C54 "h&"
 *   insn=0x00000000003A4C54 string=0x00000000003A4C58 "4"
 *   insn=0x00000000003A4C5C string=0x00000000003A4C60 ""
 *   insn=0x00000000003A4C6C string=0x00000000003A4C70 "\t@"
 *   insn=0x00000000003A4C7C string=0x00000000003A4C80 ""
 *   insn=0x00000000003A4C8C string=0x00000000003A4C90 "@"
 *   insn=0x00000000003A4C9C string=0x00000000003A4CA0 "<F"
 *   insn=0x00000000003A4CB0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A4CB8 string=0x00000000003A4CBC "5F"
 *   insn=0x00000000003A4CCC string=0x00000000003A4CD0 "xI"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileSelectionViewController::~ProfileSelectionViewController(
        Caver::ProfileSelectionViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 12);
  *(_QWORD *)this = off_6CE6A0;
  *((_QWORD *)this + 9) = &off_6CE718;
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

