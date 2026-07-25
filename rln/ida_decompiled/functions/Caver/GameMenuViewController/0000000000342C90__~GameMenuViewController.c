/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000342C90
 * Mangled: _ZN5Caver22GameMenuViewControllerD2Ev
 * Demangled: Caver::GameMenuViewController::~GameMenuViewController()
 *
 * Callers: 1
 *   0x0000000000202E00  Caver::GameMenuViewController::~GameMenuViewController()
 *
 * Callees: 6
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202E00  Caver::GameMenuViewController::~GameMenuViewController()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000342F7C  Caver::GameMenuViewController::LoadView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 71
 *   insn=0x0000000000342C9C string=0x0000000000342CA0 "("
 *   insn=0x0000000000342CA0 string=0x0000000000342CA4 ""
 *   insn=0x0000000000342CA8 string=0x0000000000342CAC "tb@"
 *   insn=0x0000000000342CAC string=0x0000000000342CB0 "\tA"
 *   insn=0x0000000000342CB0 string=0x0000000000342CB4 "\n"
 *   insn=0x0000000000342CB4 string=0x0000000000342CB8 "i"
 *   insn=0x0000000000342CB8 string=0x0000000000342CBC "@"
 *   insn=0x0000000000342CBC string=0x0000000000342CC0 "\t"
 *   insn=0x0000000000342CC0 string=0x0000000000342CC4 " "
 *   insn=0x0000000000342CC4 string=0x0000000000342CC8 "\ta"
 *   insn=0x0000000000342CC8 string=0x0000000000342CCC "`"
 *   insn=0x0000000000342CCC string=0x0000000000342CD0 " "
 *   insn=0x0000000000342CD0 string=0x0000000000342CD4 "\t"
 *   insn=0x0000000000342CD4 string=0x0000000000342CD8 " "
 *   insn=0x0000000000342CD8 string=0x0000000000342CDC "\t"
 *   insn=0x0000000000342CDC string=0x0000000000342CE0 "`"
 *   insn=0x0000000000342CE0 string=0x0000000000342CE4 " "
 *   insn=0x0000000000342CE4 string=0x0000000000342CE8 "\t"
 *   insn=0x0000000000342CE8 string=0x0000000000342CEC " "
 *   insn=0x0000000000342CEC string=0x0000000000342CF0 "a"
 *   insn=0x0000000000342CF0 string=0x0000000000342CF4 "`"
 *   insn=0x0000000000342CF4 string=0x0000000000342CF8 "h>"
 *   insn=0x0000000000342CF8 string=0x0000000000342CFC "4"
 *   insn=0x0000000000342CFC string=0x0000000000342D40 "tZ@"
 *   insn=0x0000000000342D00 string=0x0000000000342D04 ""
 *   insn=0x0000000000342D10 string=0x0000000000342D14 "\t@"
 *   insn=0x0000000000342D20 string=0x0000000000342D24 ""
 *   insn=0x0000000000342D30 string=0x0000000000342D34 "@"
 *   insn=0x0000000000342D40 string=0x0000000000342D44 "4"
 *   insn=0x0000000000342D44 string=0x0000000000342D88 "tR@"
 *   insn=0x0000000000342D48 string=0x0000000000342D4C ""
 *   insn=0x0000000000342D58 string=0x0000000000342D5C "\t@"
 *   insn=0x0000000000342D68 string=0x0000000000342D6C ""
 *   insn=0x0000000000342D78 string=0x0000000000342D7C "@"
 *   insn=0x0000000000342D88 string=0x0000000000342D8C "4"
 *   insn=0x0000000000342D8C string=0x0000000000342DD0 "tJ@"
 *   insn=0x0000000000342D90 string=0x0000000000342D94 ""
 *   insn=0x0000000000342DA0 string=0x0000000000342DA4 "\t@"
 *   insn=0x0000000000342DB0 string=0x0000000000342DB4 ""
 *   insn=0x0000000000342DC0 string=0x0000000000342DC4 "@"
 *   insn=0x0000000000342DD0 string=0x0000000000342DD4 "4"
 *   insn=0x0000000000342DD8 string=0x0000000000342DDC ""
 *   insn=0x0000000000342DE8 string=0x0000000000342DEC "\t@"
 *   insn=0x0000000000342DF8 string=0x0000000000342DFC ""
 *   insn=0x0000000000342E08 string=0x0000000000342E0C "@"
 *   insn=0x0000000000342E28 string=0x00000000001F6590 "0'"
 *   insn=0x0000000000342E2C string=0x0000000000342E30 "@"
 *   insn=0x0000000000342E34 string=0x0000000000342E38 "uJ@"
 *   insn=0x0000000000342E3C string=0x0000000000342E40 "<"
 *   insn=0x0000000000342E44 string=0x0000000000342E48 "uR@"
 *   insn=0x0000000000342E4C string=0x0000000000342E50 "&"
 *   insn=0x0000000000342E50 string=0x0000000000342EE8 "uJ@"
 *   insn=0x0000000000342E58 string=0x0000000000342E5C "5"
 *   insn=0x0000000000342E5C string=0x0000000000342EA0 "uR@"
 *   insn=0x0000000000342E60 string=0x0000000000342E64 ""
 *   insn=0x0000000000342E70 string=0x0000000000342E74 "\t@"
 *   insn=0x0000000000342E80 string=0x0000000000342E84 ""
 *   insn=0x0000000000342E90 string=0x0000000000342E94 "@"
 *   insn=0x0000000000342EA0 string=0x0000000000342EA4 "5"
 *   insn=0x0000000000342EA8 string=0x0000000000342EAC ""
 *   insn=0x0000000000342EB8 string=0x0000000000342EBC "\t@"
 *   insn=0x0000000000342EC8 string=0x0000000000342ECC ""
 *   insn=0x0000000000342ED8 string=0x0000000000342EDC "@"
 *   insn=0x0000000000342EE8 string=0x0000000000342EEC "5"
 *   insn=0x0000000000342EF0 string=0x0000000000342EF4 ""
 *   insn=0x0000000000342F00 string=0x0000000000342F04 "\t@"
 *   insn=0x0000000000342F10 string=0x0000000000342F14 ""
 *   insn=0x0000000000342F20 string=0x0000000000342F24 "@"
 *   insn=0x0000000000342F38 string=0x0000000000342F3C "b"
 *   insn=0x0000000000342F64 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000342F74 string=0x0000000000342F78 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameMenuViewController::~GameMenuViewController(Caver::GameMenuViewController *this)
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
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 24);
  *(_QWORD *)this = off_6CADD0;
  *(_QWORD *)&v3 = &off_6CAEA0;
  *((_QWORD *)&v3 + 1) = &off_6CAEC0;
  *(_OWORD *)((char *)this + 72) = v3;
  *(_QWORD *)&v3 = off_6CAED8;
  *((_QWORD *)&v3 + 1) = off_6CAEF8;
  *(_OWORD *)((char *)this + 88) = v3;
  *(_QWORD *)&v3 = &off_6CAF28;
  *((_QWORD *)&v3 + 1) = &off_6CAF40;
  *(_OWORD *)((char *)this + 104) = v3;
  *((_QWORD *)this + 15) = &off_6CAF58;
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
  v6 = (_QWORD *)*((_QWORD *)this + 22);
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
  v9 = (_QWORD *)*((_QWORD *)this + 20);
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
  v12 = (_QWORD *)*((_QWORD *)this + 18);
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  Caver::GUIViewController::~GUIViewController(this);
}

