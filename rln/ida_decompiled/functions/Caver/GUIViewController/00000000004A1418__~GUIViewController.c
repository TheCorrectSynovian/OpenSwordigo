/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A1418
 * Mangled: _ZN5Caver17GUIViewControllerD2Ev
 * Demangled: Caver::GUIViewController::~GUIViewController()
 *
 * Callers: 1
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *
 * Callees: 5
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004A15D0  Caver::GUIViewController::ViewWillDisappear(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x00000000004A1428 string=0x00000000004A142C "("
 *   insn=0x00000000004A142C string=0x00000000004A1430 "t"
 *   insn=0x00000000004A1430 string=0x00000000004A1434 "!@"
 *   insn=0x00000000004A1434 string=0x00000000004A1438 "A"
 *   insn=0x00000000004A1438 string=0x00000000004A143C "h"
 *   insn=0x00000000004A143C string=0x00000000004A1440 "4"
 *   insn=0x00000000004A1440 string=0x00000000004A1484 "t"
 *   insn=0x00000000004A1444 string=0x00000000004A1448 ""
 *   insn=0x00000000004A1454 string=0x00000000004A1458 "\t@"
 *   insn=0x00000000004A1464 string=0x00000000004A1468 ""
 *   insn=0x00000000004A1474 string=0x00000000004A1478 "@"
 *   insn=0x00000000004A1484 string=0x00000000004A1488 "4"
 *   insn=0x00000000004A1488 string=0x00000000004A14CC "`\n@"
 *   insn=0x00000000004A148C string=0x00000000004A1490 ""
 *   insn=0x00000000004A149C string=0x00000000004A14A0 "\t@"
 *   insn=0x00000000004A14AC string=0x00000000004A14B0 ""
 *   insn=0x00000000004A14BC string=0x00000000004A14C0 "@"
 *   insn=0x00000000004A14D0 string=0x00000000004A14D4 "@"
 *   insn=0x00000000004A14D4 string=0x00000000004A14D8 ""
 *   insn=0x00000000004A14D8 string=0x00000000004A14DC ""
 *   insn=0x00000000004A14E0 string=0x00000000004A14F4 ""
 *   insn=0x00000000004A1504 string=0x00000000004A1508 " "
 *   insn=0x00000000004A150C string=0x00000000004A1510 "`\n@"
 *   insn=0x00000000004A1514 string=0x00000000004A1570 "@"
 *   insn=0x00000000004A1520 string=0x00000000004A1524 "5"
 *   insn=0x00000000004A1524 string=0x00000000004A1568 "`\n@"
 *   insn=0x00000000004A1528 string=0x00000000004A152C ""
 *   insn=0x00000000004A1538 string=0x00000000004A153C "\t@"
 *   insn=0x00000000004A1548 string=0x00000000004A154C ""
 *   insn=0x00000000004A1558 string=0x00000000004A155C "@"
 *   insn=0x00000000004A1570 string=0x00000000004A1574 ""
 *   insn=0x00000000004A1574 string=0x00000000004A1578 ""
 *   insn=0x00000000004A157C string=0x00000000004A1580 ""
 *   insn=0x00000000004A1580 string=0x00000000004A1584 "@"
 *   insn=0x00000000004A1590 string=0x00000000004A1594 "n"
 *   insn=0x00000000004A15A8 string=0x00000000001F6590 "0'"
 *   insn=0x00000000004A15B4 string=0x00000000004A15B8 ">W"
 *   insn=0x00000000004A15B8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A15C0 string=0x00000000004A15C4 ";W"
 *   insn=0x00000000004A15CC string=0x00000000004A15D0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIViewController::~GUIViewController(Caver::GUIViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x0
  __int64 v9; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 7);
  *(_QWORD *)this = off_6D6930;
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
  v5 = (_QWORD *)*((_QWORD *)this + 4);
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
  v8 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    v9 = v8[2] - 1LL;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
  }
}

