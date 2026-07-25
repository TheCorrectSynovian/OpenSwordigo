/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B4EE4
 * Mangled: _ZN5Caver27ElevatorControllerComponentD2Ev
 * Demangled: Caver::ElevatorControllerComponent::~ElevatorControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002B501C  Caver::ElevatorControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x00000000002B4EF0 string=0x00000000002B4EF4 ""
 *   insn=0x00000000002B4EFC string=0x00000000002B4F00 ")"
 *   insn=0x00000000002B4F00 string=0x00000000002B4F04 "`B@"
 *   insn=0x00000000002B4F04 string=0x00000000002B4F08 ""
 *   insn=0x00000000002B4F08 string=0x00000000002B4F0C "\nA"
 *   insn=0x00000000002B4F0C string=0x00000000002B4F10 ""
 *   insn=0x00000000002B4F10 string=0x00000000002B4F14 "`"
 *   insn=0x00000000002B4F14 string=0x00000000002B4F18 ")A"
 *   insn=0x00000000002B4F1C string=0x00000000002B4F20 "j"
 *   insn=0x00000000002B4F20 string=0x00000000002B4F24 "`"
 *   insn=0x00000000002B4F24 string=0x00000000002B4F28 "i:"
 *   insn=0x00000000002B4F2C string=0x00000000002B4F30 "@"
 *   insn=0x00000000002B4F30 string=0x00000000002B4F34 ""
 *   insn=0x00000000002B4F34 string=0x00000000002B4F38 ""
 *   insn=0x00000000002B4F3C string=0x00000000002B4F40 ""
 *   insn=0x00000000002B4F40 string=0x00000000002B4F44 ""
 *   insn=0x00000000002B4F54 string=0x00000000002B4F58 "^"
 *   insn=0x00000000002B4F58 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B4F60 string=0x00000000002B4F64 "["
 *   insn=0x00000000002B4F68 string=0x00000000002B4F6C "V2"
 *   insn=0x00000000002B4F80 string=0x00000000002B4F84 ""
 *   insn=0x00000000002B4F8C string=0x00000000002B4F90 ")"
 *   insn=0x00000000002B4F90 string=0x00000000002B4F94 "`B@"
 *   insn=0x00000000002B4F94 string=0x00000000002B4F98 ""
 *   insn=0x00000000002B4F98 string=0x00000000002B4F9C "\nA"
 *   insn=0x00000000002B4F9C string=0x00000000002B4FA0 ""
 *   insn=0x00000000002B4FA0 string=0x00000000002B4FA4 "`"
 *   insn=0x00000000002B4FA4 string=0x00000000002B4FA8 ")A"
 *   insn=0x00000000002B4FAC string=0x00000000002B4FB0 "j"
 *   insn=0x00000000002B4FB0 string=0x00000000002B4FB4 "`"
 *   insn=0x00000000002B4FB4 string=0x00000000002B4FB8 "i:"
 *   insn=0x00000000002B4FBC string=0x00000000002B4FC0 "@"
 *   insn=0x00000000002B4FC0 string=0x00000000002B4FC4 ""
 *   insn=0x00000000002B4FC4 string=0x00000000002B4FC8 ""
 *   insn=0x00000000002B4FCC string=0x00000000002B4FD0 ""
 *   insn=0x00000000002B4FD0 string=0x00000000002B4FD4 ""
 *   insn=0x00000000002B4FDC string=0x00000000002B4FE0 "<"
 *   insn=0x00000000002B4FF0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B4FF8 string=0x00000000002B4FFC "5"
 *   insn=0x00000000002B5014 string=0x00000000002B5018 "+2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ElevatorControllerComponent::~ElevatorControllerComponent(
        Caver::ElevatorControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 16);
  *(_QWORD *)&v3 = &off_6C4558;
  *((_QWORD *)&v3 + 1) = &off_6C4598;
  *(_QWORD *)this = off_6C4440;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 14) = off_6C1748;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::Component::~Component(this);
}

