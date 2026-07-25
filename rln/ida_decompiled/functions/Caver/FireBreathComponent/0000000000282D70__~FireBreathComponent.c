/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282D70
 * Mangled: _ZN5Caver19FireBreathComponentD2Ev
 * Demangled: Caver::FireBreathComponent::~FireBreathComponent()
 *
 * Callers: 1
 *   0x00000000001F4120  Caver::FireBreathComponent::~FireBreathComponent()
 *
 * Callees: 7
 *   0x00000000001F4120  Caver::FireBreathComponent::~FireBreathComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000282FD8  Caver::FireBreathComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 95
 *   insn=0x0000000000282D78 string=0x0000000000282D7C "#"
 *   insn=0x0000000000282D7C string=0x0000000000282D80 ""
 *   insn=0x0000000000282D80 string=0x0000000000282D84 "\t#"
 *   insn=0x0000000000282D88 string=0x0000000000282D8C "))E"
 *   insn=0x0000000000282D8C string=0x0000000000282D90 "`v@"
 *   insn=0x0000000000282D90 string=0x0000000000282D94 "!"
 *   insn=0x0000000000282D94 string=0x0000000000282D98 "\nA"
 *   insn=0x0000000000282D98 string=0x0000000000282D9C "!"
 *   insn=0x0000000000282D9C string=0x0000000000282DA0 "`"
 *   insn=0x0000000000282DA0 string=0x0000000000282DA4 ")A"
 *   insn=0x0000000000282DA8 string=0x0000000000282DAC "j"
 *   insn=0x0000000000282DAC string=0x0000000000282DB0 "`"
 *   insn=0x0000000000282DB0 string=0x0000000000282DB4 "in"
 *   insn=0x0000000000282DB8 string=0x0000000000282DBC "@"
 *   insn=0x0000000000282DB8 string=0x0000000000282DD8 "(#"
 *   insn=0x0000000000282DBC string=0x0000000000282DC0 ""
 *   insn=0x0000000000282DC0 string=0x0000000000282DC4 ""
 *   insn=0x0000000000282DC8 string=0x0000000000282DCC ""
 *   insn=0x0000000000282DCC string=0x0000000000282DD0 ""
 *   insn=0x0000000000282DD8 string=0x0000000000282DDC "`j@"
 *   insn=0x0000000000282DDC string=0x0000000000282DE0 "mB"
 *   insn=0x0000000000282DE0 string=0x0000000000282DE4 "A"
 *   insn=0x0000000000282DE4 string=0x0000000000282DE8 "hb"
 *   insn=0x0000000000282DEC string=0x0000000000282DF0 "@"
 *   insn=0x0000000000282DEC string=0x0000000000282E0C "#"
 *   insn=0x0000000000282DF0 string=0x0000000000282DF4 ""
 *   insn=0x0000000000282DF4 string=0x0000000000282DF8 ""
 *   insn=0x0000000000282DFC string=0x0000000000282E00 ""
 *   insn=0x0000000000282E00 string=0x0000000000282E04 ""
 *   insn=0x0000000000282E0C string=0x0000000000282E10 "5D"
 *   insn=0x0000000000282E10 string=0x0000000000282E14 "`B"
 *   insn=0x0000000000282E14 string=0x0000000000282E18 "\n!"
 *   insn=0x0000000000282E18 string=0x0000000000282E1C "\tA"
 *   insn=0x0000000000282E1C string=0x0000000000282E20 "!"
 *   insn=0x0000000000282E20 string=0x0000000000282E24 "@"
 *   insn=0x0000000000282E28 string=0x0000000000282E2C "i"
 *   insn=0x0000000000282E2C string=0x0000000000282E30 "`"
 *   insn=0x0000000000282E30 string=0x0000000000282E34 "O"
 *   insn=0x0000000000282E34 string=0x0000000000282E38 "`:@"
 *   insn=0x0000000000282E3C string=0x0000000000282E40 "@"
 *   insn=0x0000000000282E40 string=0x0000000000282E44 ""
 *   insn=0x0000000000282E44 string=0x0000000000282E48 ""
 *   insn=0x0000000000282E4C string=0x0000000000282E50 ""
 *   insn=0x0000000000282E50 string=0x0000000000282E54 ""
 *   insn=0x0000000000282E68 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000282E6C string=0x0000000000282E70 "G"
 *   insn=0x0000000000282E78 string=0x0000000000282EB4 "#"
 *   insn=0x0000000000282E80 string=0x0000000000282E84 "`j@"
 *   insn=0x0000000000282E84 string=0x0000000000282E88 "mB"
 *   insn=0x0000000000282E88 string=0x0000000000282E8C "A"
 *   insn=0x0000000000282E8C string=0x0000000000282E90 "hb"
 *   insn=0x0000000000282E94 string=0x0000000000282E98 "@"
 *   insn=0x0000000000282E98 string=0x0000000000282E9C ""
 *   insn=0x0000000000282E9C string=0x0000000000282EA0 ""
 *   insn=0x0000000000282EA4 string=0x0000000000282EA8 ""
 *   insn=0x0000000000282EA8 string=0x0000000000282EAC ""
 *   insn=0x0000000000282EB4 string=0x0000000000282EB8 "5D"
 *   insn=0x0000000000282EB8 string=0x0000000000282EBC "`B"
 *   insn=0x0000000000282EBC string=0x0000000000282EC0 "\n!"
 *   insn=0x0000000000282EC0 string=0x0000000000282EC4 "\tA"
 *   insn=0x0000000000282EC4 string=0x0000000000282EC8 "!"
 *   insn=0x0000000000282EC8 string=0x0000000000282ECC "@"
 *   insn=0x0000000000282ED0 string=0x0000000000282ED4 "i"
 *   insn=0x0000000000282ED4 string=0x0000000000282ED8 "`"
 *   insn=0x0000000000282ED8 string=0x0000000000282EDC "%"
 *   insn=0x0000000000282EDC string=0x0000000000282EE0 "`:@"
 *   insn=0x0000000000282EE4 string=0x0000000000282EE8 "@"
 *   insn=0x0000000000282EE8 string=0x0000000000282EEC ""
 *   insn=0x0000000000282EEC string=0x0000000000282EF0 ""
 *   insn=0x0000000000282EF4 string=0x0000000000282EF8 ""
 *   insn=0x0000000000282EF8 string=0x0000000000282EFC ""
 *   insn=0x0000000000282F04 string=0x0000000000282F08 "r"
 *   insn=0x0000000000282F08 string=0x0000000000282F0C """
 *   insn=0x0000000000282F1C string=0x0000000000282F20 "("
 *   insn=0x0000000000282F20 string=0x0000000000282F24 "\t\t@"
 *   insn=0x0000000000282F24 string=0x0000000000282F28 ")"
 *   insn=0x0000000000282F28 string=0x0000000000282F2C "\t\t"
 *   insn=0x0000000000282F30 string=0x0000000000282F34 "\t"
 *   insn=0x0000000000282F34 string=0x0000000000282F38 ")"
 *   insn=0x0000000000282F3C string=0x0000000000282F40 " "
 *   insn=0x0000000000282F44 string=0x0000000000282F48 "b"
 *   insn=0x0000000000282F5C string=0x0000000000282F60 "h:@"
 *   insn=0x0000000000282F64 string=0x0000000000282F68 "("
 *   insn=0x0000000000282F68 string=0x0000000000282F6C "\t\t@"
 *   insn=0x0000000000282F6C string=0x0000000000282F70 ")"
 *   insn=0x0000000000282F70 string=0x0000000000282F74 "\t\t"
 *   insn=0x0000000000282F78 string=0x0000000000282F7C "\t"
 *   insn=0x0000000000282F7C string=0x0000000000282F80 ")"
 *   insn=0x0000000000282F84 string=0x0000000000282F88 " "
 *   insn=0x0000000000282F8C string=0x0000000000282F90 "P"
 *   insn=0x0000000000282F94 string=0x0000000000282F98 "K"
 *   insn=0x0000000000282FAC string=0x0000000000282FB0 "\"
 *   insn=0x0000000000282FB0 string=0x00000000001F4120 "P'"
 *   insn=0x0000000000282FC0 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000282FD0 string=0x0000000000282FD4 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireBreathComponent::~FireBreathComponent(Caver::FireBreathComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  __int128 v7; // q0
  _DWORD *v8; // x0
  int v9; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 29);
  *(_QWORD *)&v3 = &off_6C01E8;
  *((_QWORD *)&v3 + 1) = &off_6C0228;
  *(_QWORD *)this = off_6C00B0;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 27) = off_6BE248;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 24) = off_6C0268;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  *(_QWORD *)&v7 = &off_6C1358;
  *((_QWORD *)&v7 + 1) = &off_6C1398;
  *(_QWORD *)this = off_6C1220;
  *((_OWORD *)this + 1) = v7;
  Caver::Program::~Program((Caver::FireBreathComponent *)((char *)this + 144));
  v8 = (_DWORD *)*((_QWORD *)this + 14);
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  Caver::Component::~Component(this);
}

