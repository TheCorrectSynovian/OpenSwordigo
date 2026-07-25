/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000367E18
 * Mangled: _ZN5Caver27GuidePurchaseViewControllerD2Ev
 * Demangled: Caver::GuidePurchaseViewController::~GuidePurchaseViewController()
 *
 * Callers: 1
 *   0x00000000001FD8C0  Caver::GuidePurchaseViewController::~GuidePurchaseViewController()
 *
 * Callees: 6
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD8C0  Caver::GuidePurchaseViewController::~GuidePurchaseViewController()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000368034  boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>(Caver::GuidePurchaseView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x0000000000367E28 string=0x0000000000367E2C ""
 *   insn=0x0000000000367E30 string=0x0000000000367E34 "tF@"
 *   insn=0x0000000000367E34 string=0x0000000000367E38 "\n"
 *   insn=0x0000000000367E38 string=0x0000000000367E3C "\tA"
 *   insn=0x0000000000367E3C string=0x0000000000367E40 "@"
 *   insn=0x0000000000367E40 string=0x0000000000367E44 "!"
 *   insn=0x0000000000367E48 string=0x0000000000367E4C "i"
 *   insn=0x0000000000367E4C string=0x0000000000367E50 "`"
 *   insn=0x0000000000367E50 string=0x0000000000367E54 "4"
 *   insn=0x0000000000367E54 string=0x0000000000367E98 "t>@"
 *   insn=0x0000000000367E58 string=0x0000000000367E5C ""
 *   insn=0x0000000000367E68 string=0x0000000000367E6C "\t@"
 *   insn=0x0000000000367E78 string=0x0000000000367E7C ""
 *   insn=0x0000000000367E88 string=0x0000000000367E8C "@"
 *   insn=0x0000000000367E98 string=0x0000000000367E9C "4"
 *   insn=0x0000000000367E9C string=0x0000000000367EE0 "t6@"
 *   insn=0x0000000000367EA0 string=0x0000000000367EA4 ""
 *   insn=0x0000000000367EB0 string=0x0000000000367EB4 "\t@"
 *   insn=0x0000000000367EC0 string=0x0000000000367EC4 ""
 *   insn=0x0000000000367ED0 string=0x0000000000367ED4 "@"
 *   insn=0x0000000000367EE0 string=0x0000000000367EE4 "4"
 *   insn=0x0000000000367EE8 string=0x0000000000367EEC ""
 *   insn=0x0000000000367EF8 string=0x0000000000367EFC "\t@"
 *   insn=0x0000000000367F08 string=0x0000000000367F0C ""
 *   insn=0x0000000000367F18 string=0x0000000000367F1C "@"
 *   insn=0x0000000000367F38 string=0x00000000001F6590 "0'"
 *   insn=0x0000000000367F3C string=0x0000000000367F40 "*"
 *   insn=0x0000000000367F44 string=0x0000000000367F48 "u6@"
 *   insn=0x0000000000367F4C string=0x0000000000367F50 "&"
 *   insn=0x0000000000367F58 string=0x0000000000367F5C "5"
 *   insn=0x0000000000367F5C string=0x0000000000367FA0 "u6@"
 *   insn=0x0000000000367F60 string=0x0000000000367F64 ""
 *   insn=0x0000000000367F70 string=0x0000000000367F74 "\t@"
 *   insn=0x0000000000367F80 string=0x0000000000367F84 ""
 *   insn=0x0000000000367F90 string=0x0000000000367F94 "@"
 *   insn=0x0000000000367FA0 string=0x0000000000367FA4 "5"
 *   insn=0x0000000000367FA8 string=0x0000000000367FAC ""
 *   insn=0x0000000000367FB8 string=0x0000000000367FBC "\t@"
 *   insn=0x0000000000367FC8 string=0x0000000000367FCC ""
 *   insn=0x0000000000367FD8 string=0x0000000000367FDC "@"
 *   insn=0x0000000000367FE8 string=0x0000000000367FEC "i9"
 *   insn=0x0000000000367FF0 string=0x0000000000367FF4 "4f"
 *   insn=0x0000000000368008 string=0x000000000036800C "-V"
 *   insn=0x000000000036800C string=0x00000000001FD8C0 "0'"
 *   insn=0x000000000036801C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036802C string=0x0000000000368030 "%f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GuidePurchaseViewController::~GuidePurchaseViewController(
        Caver::GuidePurchaseViewController *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 17);
  *(_QWORD *)&v3 = off_6CC270;
  *((_QWORD *)&v3 + 1) = &off_6CC298;
  *(_QWORD *)this = off_6CC1E0;
  *(_OWORD *)((char *)this + 72) = v3;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v6 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v9 )
  {
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  Caver::GUIViewController::~GUIViewController(this);
}

