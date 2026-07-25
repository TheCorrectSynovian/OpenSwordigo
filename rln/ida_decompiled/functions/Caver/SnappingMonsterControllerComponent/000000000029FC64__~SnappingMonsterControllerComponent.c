/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029FC64
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponentD2Ev
 * Demangled: Caver::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent()
 *
 * Callers: 1
 *   0x00000000001FDAD0  Caver::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FDAD0  Caver::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent()
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000029FEE0  Caver::SnappingMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 99
 *   insn=0x000000000029FC6C string=0x000000000029FC70 "(""
 *   insn=0x000000000029FC70 string=0x000000000029FC74 ""
 *   insn=0x000000000029FC74 string=0x000000000029FC78 ")""
 *   insn=0x000000000029FC7C string=0x000000000029FC80 "))E"
 *   insn=0x000000000029FC80 string=0x000000000029FC84 "`"
 *   insn=0x000000000029FC84 string=0x000000000029FC88 ""
 *   insn=0x000000000029FC88 string=0x000000000029FC8C "\nA"
 *   insn=0x000000000029FC8C string=0x000000000029FC90 ""
 *   insn=0x000000000029FC90 string=0x000000000029FC94 "`"
 *   insn=0x000000000029FC94 string=0x000000000029FC98 ")A"
 *   insn=0x000000000029FC9C string=0x000000000029FCA0 "j"
 *   insn=0x000000000029FCA0 string=0x000000000029FCA4 "`"
 *   insn=0x000000000029FCA4 string=0x000000000029FCA8 "i"
 *   insn=0x000000000029FCAC string=0x000000000029FCB0 "@"
 *   insn=0x000000000029FCAC string=0x000000000029FCCC "(""
 *   insn=0x000000000029FCB0 string=0x000000000029FCB4 ""
 *   insn=0x000000000029FCB4 string=0x000000000029FCB8 ""
 *   insn=0x000000000029FCBC string=0x000000000029FCC0 ""
 *   insn=0x000000000029FCC0 string=0x000000000029FCC4 ""
 *   insn=0x000000000029FCCC string=0x000000000029FCD0 "`"
 *   insn=0x000000000029FCD0 string=0x000000000029FCD4 ""
 *   insn=0x000000000029FCD4 string=0x000000000029FCD8 "A"
 *   insn=0x000000000029FCD8 string=0x000000000029FCDC "h"
 *   insn=0x000000000029FCE0 string=0x000000000029FCE4 "@"
 *   insn=0x000000000029FCE0 string=0x000000000029FD00 "(""
 *   insn=0x000000000029FCE4 string=0x000000000029FCE8 ""
 *   insn=0x000000000029FCE8 string=0x000000000029FCEC ""
 *   insn=0x000000000029FCF0 string=0x000000000029FCF4 ""
 *   insn=0x000000000029FCF4 string=0x000000000029FCF8 ""
 *   insn=0x000000000029FD00 string=0x000000000029FD04 "`"
 *   insn=0x000000000029FD04 string=0x000000000029FD08 "!E"
 *   insn=0x000000000029FD08 string=0x000000000029FD0C "A"
 *   insn=0x000000000029FD0C string=0x000000000029FD10 "h"
 *   insn=0x000000000029FD14 string=0x000000000029FD18 "@"
 *   insn=0x000000000029FD14 string=0x000000000029FD34 "(""
 *   insn=0x000000000029FD18 string=0x000000000029FD1C ""
 *   insn=0x000000000029FD1C string=0x000000000029FD20 ""
 *   insn=0x000000000029FD24 string=0x000000000029FD28 ""
 *   insn=0x000000000029FD28 string=0x000000000029FD2C ""
 *   insn=0x000000000029FD34 string=0x000000000029FD38 "`~@"
 *   insn=0x000000000029FD38 string=0x000000000029FD3C ""
 *   insn=0x000000000029FD40 string=0x000000000029FD44 "tv"
 *   insn=0x000000000029FD48 string=0x000000000029FD4C "@"
 *   insn=0x000000000029FD48 string=0x000000000029FD68 "`r@"
 *   insn=0x000000000029FD4C string=0x000000000029FD50 ""
 *   insn=0x000000000029FD50 string=0x000000000029FD54 ""
 *   insn=0x000000000029FD58 string=0x000000000029FD5C ""
 *   insn=0x000000000029FD5C string=0x000000000029FD60 ""
 *   insn=0x000000000029FD68 string=0x000000000029FD6C "tj"
 *   insn=0x000000000029FD70 string=0x000000000029FD74 "@"
 *   insn=0x000000000029FD74 string=0x000000000029FD78 ""
 *   insn=0x000000000029FD78 string=0x000000000029FD7C ""
 *   insn=0x000000000029FD80 string=0x000000000029FD84 ""
 *   insn=0x000000000029FD84 string=0x000000000029FD88 ""
 *   insn=0x000000000029FDA0 string=0x000000000029FDA4 "<"
 *   insn=0x000000000029FDA8 string=0x000000000029FDAC "-"
 *   insn=0x000000000029FDAC string=0x000000000029FE60 "(""
 *   insn=0x000000000029FDB4 string=0x000000000029FE2C "(""
 *   insn=0x000000000029FDBC string=0x000000000029FDF8 "(""
 *   insn=0x000000000029FDC4 string=0x000000000029FDC8 "`"
 *   insn=0x000000000029FDC8 string=0x000000000029FDCC ""
 *   insn=0x000000000029FDCC string=0x000000000029FDD0 "A"
 *   insn=0x000000000029FDD0 string=0x000000000029FDD4 "h"
 *   insn=0x000000000029FDD8 string=0x000000000029FDDC "@"
 *   insn=0x000000000029FDDC string=0x000000000029FDE0 ""
 *   insn=0x000000000029FDE0 string=0x000000000029FDE4 ""
 *   insn=0x000000000029FDE8 string=0x000000000029FDEC ""
 *   insn=0x000000000029FDEC string=0x000000000029FDF0 ""
 *   insn=0x000000000029FDF8 string=0x000000000029FDFC "`"
 *   insn=0x000000000029FDFC string=0x000000000029FE00 "!E"
 *   insn=0x000000000029FE00 string=0x000000000029FE04 "A"
 *   insn=0x000000000029FE04 string=0x000000000029FE08 "h"
 *   insn=0x000000000029FE0C string=0x000000000029FE10 "@"
 *   insn=0x000000000029FE10 string=0x000000000029FE14 ""
 *   insn=0x000000000029FE14 string=0x000000000029FE18 ""
 *   insn=0x000000000029FE1C string=0x000000000029FE20 ""
 *   insn=0x000000000029FE20 string=0x000000000029FE24 ""
 *   insn=0x000000000029FE2C string=0x000000000029FE30 "`~@"
 *   insn=0x000000000029FE30 string=0x000000000029FE34 ""
 *   insn=0x000000000029FE34 string=0x000000000029FE38 "A"
 *   insn=0x000000000029FE38 string=0x000000000029FE3C "hv"
 *   insn=0x000000000029FE40 string=0x000000000029FE44 "@"
 *   insn=0x000000000029FE44 string=0x000000000029FE48 ""
 *   insn=0x000000000029FE48 string=0x000000000029FE4C ""
 *   insn=0x000000000029FE50 string=0x000000000029FE54 ""
 *   insn=0x000000000029FE54 string=0x000000000029FE58 ""
 *   insn=0x000000000029FE60 string=0x000000000029FE64 "`r@"
 *   insn=0x000000000029FE64 string=0x000000000029FE68 ""
 *   insn=0x000000000029FE68 string=0x000000000029FE6C "A"
 *   insn=0x000000000029FE6C string=0x000000000029FE70 "hj"
 *   insn=0x000000000029FE74 string=0x000000000029FE78 "@"
 *   insn=0x000000000029FE78 string=0x000000000029FE7C ""
 *   insn=0x000000000029FE7C string=0x000000000029FE80 ""
 *   insn=0x000000000029FE84 string=0x000000000029FE88 ""
 *   insn=0x000000000029FE88 string=0x000000000029FE8C ""
 *   insn=0x000000000029FEA0 string=0x000000000029FEA4 "*"
 *   insn=0x000000000029FEB8 string=0x00000000001FDAD0 "0'"
 *   insn=0x000000000029FEC8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029FED8 string=0x000000000029FEDC "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent(
        Caver::SnappingMonsterControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8
  _DWORD *v11; // x0
  int v12; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 40);
  *(_QWORD *)&v3 = &off_6C2898;
  *((_QWORD *)&v3 + 1) = &off_6C28D8;
  *(_QWORD *)this = off_6C2780;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 38) = off_6BE248;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 37);
  *((_QWORD *)this + 35) = &off_6BEDF8;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 32) = &off_6C2938;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 29) = &off_6BDF68;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 26) = &off_6BDF68;
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
}

