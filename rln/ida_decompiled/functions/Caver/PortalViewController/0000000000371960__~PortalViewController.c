/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000371960
 * Mangled: _ZN5Caver20PortalViewControllerD2Ev
 * Demangled: Caver::PortalViewController::~PortalViewController()
 *
 * Callers: 1
 *   0x00000000001FEEC0  Caver::PortalViewController::~PortalViewController()
 *
 * Callees: 6
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEEC0  Caver::PortalViewController::~PortalViewController()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000371AF0  boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>(Caver::PortalView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x0000000000371970 string=0x0000000000371974 ""
 *   insn=0x0000000000371978 string=0x000000000037197C "tF@"
 *   insn=0x000000000037197C string=0x0000000000371980 "\n"
 *   insn=0x0000000000371984 string=0x0000000000371988 "\tA"
 *   insn=0x0000000000371988 string=0x000000000037198C "a"
 *   insn=0x000000000037198C string=0x0000000000371990 "!"
 *   insn=0x0000000000371990 string=0x0000000000371994 "@"
 *   insn=0x0000000000371998 string=0x000000000037199C "`"
 *   insn=0x00000000003719A0 string=0x00000000003719A4 "i"
 *   insn=0x00000000003719A4 string=0x00000000003719A8 "`"
 *   insn=0x00000000003719A8 string=0x00000000003719AC "a"
 *   insn=0x00000000003719AC string=0x00000000003719B0 "4"
 *   insn=0x00000000003719B0 string=0x00000000003719F4 "t>@"
 *   insn=0x00000000003719B4 string=0x00000000003719B8 ""
 *   insn=0x00000000003719C4 string=0x00000000003719C8 "\t@"
 *   insn=0x00000000003719D4 string=0x00000000003719D8 ""
 *   insn=0x00000000003719E4 string=0x00000000003719E8 "@"
 *   insn=0x00000000003719F4 string=0x00000000003719F8 "4"
 *   insn=0x00000000003719FC string=0x0000000000371A00 ""
 *   insn=0x0000000000371A0C string=0x0000000000371A10 "\t@"
 *   insn=0x0000000000371A1C string=0x0000000000371A20 ""
 *   insn=0x0000000000371A2C string=0x0000000000371A30 "@"
 *   insn=0x0000000000371A4C string=0x00000000001F6590 "0'"
 *   insn=0x0000000000371A5C string=0x0000000000371A60 "5"
 *   insn=0x0000000000371A64 string=0x0000000000371A68 ""
 *   insn=0x0000000000371A74 string=0x0000000000371A78 "\t@"
 *   insn=0x0000000000371A84 string=0x0000000000371A88 ""
 *   insn=0x0000000000371A94 string=0x0000000000371A98 "@"
 *   insn=0x0000000000371AB0 string=0x0000000000371AB4 "&r"
 *   insn=0x0000000000371AD8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000371AE8 string=0x0000000000371AEC "v?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalViewController::~PortalViewController(Caver::PortalViewController *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int128 v4; // q1
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 17);
  *(_QWORD *)&v3 = off_6CCAF0;
  *(_QWORD *)&v4 = &off_6CCB30;
  *((_QWORD *)&v3 + 1) = &off_6CCB18;
  *((_QWORD *)&v4 + 1) = &off_6CCB48;
  *(_QWORD *)this = off_6CCA50;
  *(_OWORD *)((char *)this + 72) = v3;
  *(_OWORD *)((char *)this + 88) = v4;
  if ( v2 )
  {
    v5 = v2[1] - 1LL;
    v2[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v6 = v2[2] - 1LL;
      v2[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v7 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  Caver::GUIViewController::~GUIViewController(this);
}

