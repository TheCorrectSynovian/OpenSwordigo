/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292B5C
 * Mangled: _ZN5Caver15AttackComponentD2Ev
 * Demangled: Caver::AttackComponent::~AttackComponent()
 *
 * Callers: 1
 *   0x0000000000202120  Caver::AttackComponent::~AttackComponent()
 *
 * Callees: 7
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x0000000000202120  Caver::AttackComponent::~AttackComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000292DEC  Caver::AttackComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 95
 *   insn=0x0000000000292B68 string=0x0000000000292B6C "m@"
 *   insn=0x0000000000292B70 string=0x0000000000292B74 "`~@"
 *   insn=0x0000000000292B74 string=0x0000000000292B78 "\n"
 *   insn=0x0000000000292B78 string=0x0000000000292B7C "\tA"
 *   insn=0x0000000000292B7C string=0x0000000000292B80 "@"
 *   insn=0x0000000000292B80 string=0x0000000000292B84 ""
 *   insn=0x0000000000292B88 string=0x0000000000292B8C "i"
 *   insn=0x0000000000292B8C string=0x0000000000292B90 "`"
 *   insn=0x0000000000292B94 string=0x0000000000292B98 "@"
 *   insn=0x0000000000292B94 string=0x0000000000292BB4 "`B"
 *   insn=0x0000000000292B98 string=0x0000000000292B9C ""
 *   insn=0x0000000000292B9C string=0x0000000000292BA0 ""
 *   insn=0x0000000000292BA4 string=0x0000000000292BA8 ""
 *   insn=0x0000000000292BA8 string=0x0000000000292BAC ""
 *   insn=0x0000000000292BBC string=0x0000000000292BC0 "`f@"
 *   insn=0x0000000000292BC0 string=0x0000000000292BC4 ")E"
 *   insn=0x0000000000292BC4 string=0x0000000000292BC8 "A"
 *   insn=0x0000000000292BC8 string=0x0000000000292BCC "h^"
 *   insn=0x0000000000292BD0 string=0x0000000000292BD4 "@"
 *   insn=0x0000000000292BD4 string=0x0000000000292BD8 ""
 *   insn=0x0000000000292BD8 string=0x0000000000292BDC ""
 *   insn=0x0000000000292BE0 string=0x0000000000292BE4 ""
 *   insn=0x0000000000292BE4 string=0x0000000000292BE8 ""
 *   insn=0x0000000000292BF0 string=0x0000000000292BF4 "`Z@"
 *   insn=0x0000000000292BF4 string=0x0000000000292BF8 ""
 *   insn=0x0000000000292BF8 string=0x0000000000292BFC "A"
 *   insn=0x0000000000292BFC string=0x0000000000292C00 "hR"
 *   insn=0x0000000000292C04 string=0x0000000000292C08 "@"
 *   insn=0x0000000000292C08 string=0x0000000000292C0C ""
 *   insn=0x0000000000292C0C string=0x0000000000292C10 ""
 *   insn=0x0000000000292C14 string=0x0000000000292C18 ""
 *   insn=0x0000000000292C18 string=0x0000000000292C1C ""
 *   insn=0x0000000000292C24 string=0x0000000000292C28 "`N@"
 *   insn=0x0000000000292C28 string=0x0000000000292C2C ""
 *   insn=0x0000000000292C2C string=0x0000000000292C30 "A"
 *   insn=0x0000000000292C30 string=0x0000000000292C34 "hF"
 *   insn=0x0000000000292C38 string=0x0000000000292C3C "@"
 *   insn=0x0000000000292C3C string=0x0000000000292C40 ""
 *   insn=0x0000000000292C40 string=0x0000000000292C44 ""
 *   insn=0x0000000000292C48 string=0x0000000000292C4C ""
 *   insn=0x0000000000292C4C string=0x0000000000292C50 ""
 *   insn=0x0000000000292C58 string=0x0000000000292C5C "`B@"
 *   insn=0x0000000000292C5C string=0x0000000000292C60 ""
 *   insn=0x0000000000292C60 string=0x0000000000292C64 "A"
 *   insn=0x0000000000292C64 string=0x0000000000292C68 "h:"
 *   insn=0x0000000000292C6C string=0x0000000000292C70 "@"
 *   insn=0x0000000000292C70 string=0x0000000000292C74 ""
 *   insn=0x0000000000292C74 string=0x0000000000292C78 ""
 *   insn=0x0000000000292C7C string=0x0000000000292C80 ""
 *   insn=0x0000000000292C80 string=0x0000000000292C84 ""
 *   insn=0x0000000000292C98 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000292C9C string=0x0000000000292CA0 "@"
 *   insn=0x0000000000292CA4 string=0x0000000000292CA8 "1"
 *   insn=0x0000000000292CAC string=0x0000000000292CB0 """
 *   insn=0x0000000000292CBC string=0x0000000000292CC0 "`B"
 *   insn=0x0000000000292CD0 string=0x0000000000292CD4 "`f@"
 *   insn=0x0000000000292CD4 string=0x0000000000292CD8 ")E"
 *   insn=0x0000000000292CD8 string=0x0000000000292CDC "A"
 *   insn=0x0000000000292CDC string=0x0000000000292CE0 "h^"
 *   insn=0x0000000000292CE4 string=0x0000000000292CE8 "@"
 *   insn=0x0000000000292CE8 string=0x0000000000292CEC ""
 *   insn=0x0000000000292CEC string=0x0000000000292CF0 ""
 *   insn=0x0000000000292CF4 string=0x0000000000292CF8 ""
 *   insn=0x0000000000292CF8 string=0x0000000000292CFC ""
 *   insn=0x0000000000292D04 string=0x0000000000292D08 "`Z@"
 *   insn=0x0000000000292D08 string=0x0000000000292D0C ""
 *   insn=0x0000000000292D0C string=0x0000000000292D10 "A"
 *   insn=0x0000000000292D10 string=0x0000000000292D14 "hR"
 *   insn=0x0000000000292D18 string=0x0000000000292D1C "@"
 *   insn=0x0000000000292D1C string=0x0000000000292D20 ""
 *   insn=0x0000000000292D20 string=0x0000000000292D24 ""
 *   insn=0x0000000000292D28 string=0x0000000000292D2C ""
 *   insn=0x0000000000292D2C string=0x0000000000292D30 ""
 *   insn=0x0000000000292D38 string=0x0000000000292D3C "`N@"
 *   insn=0x0000000000292D3C string=0x0000000000292D40 ""
 *   insn=0x0000000000292D40 string=0x0000000000292D44 "A"
 *   insn=0x0000000000292D44 string=0x0000000000292D48 "hF"
 *   insn=0x0000000000292D4C string=0x0000000000292D50 "@"
 *   insn=0x0000000000292D50 string=0x0000000000292D54 ""
 *   insn=0x0000000000292D54 string=0x0000000000292D58 ""
 *   insn=0x0000000000292D5C string=0x0000000000292D60 ""
 *   insn=0x0000000000292D60 string=0x0000000000292D64 ""
 *   insn=0x0000000000292D6C string=0x0000000000292D70 "`B@"
 *   insn=0x0000000000292D70 string=0x0000000000292D74 ""
 *   insn=0x0000000000292D74 string=0x0000000000292D78 "A"
 *   insn=0x0000000000292D78 string=0x0000000000292D7C "h:"
 *   insn=0x0000000000292D80 string=0x0000000000292D84 "@"
 *   insn=0x0000000000292D84 string=0x0000000000292D88 ""
 *   insn=0x0000000000292D88 string=0x0000000000292D8C ""
 *   insn=0x0000000000292D90 string=0x0000000000292D94 ""
 *   insn=0x0000000000292D94 string=0x0000000000292D98 ""
 *   insn=0x0000000000292DAC string=0x0000000000292DB0 "g"
 *   insn=0x0000000000292DD0 string=0x0000000000292DD4 "7"
 *   insn=0x0000000000292DD4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000292DDC string=0x0000000000292DE0 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AttackComponent::~AttackComponent(Caver::AttackComponent *this)
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

  v2 = (_DWORD *)*((_QWORD *)this + 31);
  *(_QWORD *)&v3 = &off_6C1528;
  *((_QWORD *)&v3 + 1) = &off_6C1568;
  *(_QWORD *)this = off_6C1410;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::Program::~Program((Caver::AttackComponent *)((char *)this + 208));
  v5 = (_DWORD *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 23) = off_6BE248;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 20) = &off_6BEDF8;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 17) = &off_6BAE78;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = &off_6BDF68;
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  Caver::Component::~Component(this);
}

