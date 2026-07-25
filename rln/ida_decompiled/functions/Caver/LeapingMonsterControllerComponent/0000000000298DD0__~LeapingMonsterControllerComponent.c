/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298DD0
 * Mangled: _ZN5Caver33LeapingMonsterControllerComponentD2Ev
 * Demangled: Caver::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent()
 *
 * Callers: 1
 *   0x00000000001F7A10  Caver::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A10  Caver::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent()
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000298F08  Caver::LeapingMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x0000000000298DD8 string=0x0000000000298DDC "h""
 *   insn=0x0000000000298DDC string=0x0000000000298DE0 "]@"
 *   insn=0x0000000000298DE0 string=0x0000000000298DE4 "i""
 *   insn=0x0000000000298DE8 string=0x0000000000298DEC ")"
 *   insn=0x0000000000298DEC string=0x0000000000298DF0 "`~@"
 *   insn=0x0000000000298DF0 string=0x0000000000298DF4 ""
 *   insn=0x0000000000298DF4 string=0x0000000000298DF8 "\nA"
 *   insn=0x0000000000298DF8 string=0x0000000000298DFC ""
 *   insn=0x0000000000298DFC string=0x0000000000298E00 "`"
 *   insn=0x0000000000298E00 string=0x0000000000298E04 ")A"
 *   insn=0x0000000000298E08 string=0x0000000000298E0C "j"
 *   insn=0x0000000000298E0C string=0x0000000000298E10 "`"
 *   insn=0x0000000000298E10 string=0x0000000000298E14 "iv"
 *   insn=0x0000000000298E18 string=0x0000000000298E1C "@"
 *   insn=0x0000000000298E18 string=0x0000000000298E38 "h""
 *   insn=0x0000000000298E1C string=0x0000000000298E20 ""
 *   insn=0x0000000000298E20 string=0x0000000000298E24 ""
 *   insn=0x0000000000298E28 string=0x0000000000298E2C ""
 *   insn=0x0000000000298E2C string=0x0000000000298E30 ""
 *   insn=0x0000000000298E38 string=0x0000000000298E3C "`r@"
 *   insn=0x0000000000298E3C string=0x0000000000298E40 ""
 *   insn=0x0000000000298E40 string=0x0000000000298E44 "A"
 *   insn=0x0000000000298E44 string=0x0000000000298E48 "hj"
 *   insn=0x0000000000298E4C string=0x0000000000298E50 "@"
 *   insn=0x0000000000298E50 string=0x0000000000298E54 ""
 *   insn=0x0000000000298E54 string=0x0000000000298E58 ""
 *   insn=0x0000000000298E5C string=0x0000000000298E60 ""
 *   insn=0x0000000000298E60 string=0x0000000000298E64 ""
 *   insn=0x0000000000298E88 string=0x0000000000298E8C "`r@"
 *   insn=0x0000000000298E8C string=0x0000000000298E90 ""
 *   insn=0x0000000000298E90 string=0x0000000000298E94 "A"
 *   insn=0x0000000000298E94 string=0x0000000000298E98 "hj"
 *   insn=0x0000000000298E9C string=0x0000000000298EA0 "@"
 *   insn=0x0000000000298EA0 string=0x0000000000298EA4 ""
 *   insn=0x0000000000298EA4 string=0x0000000000298EA8 ""
 *   insn=0x0000000000298EAC string=0x0000000000298EB0 ""
 *   insn=0x0000000000298EB0 string=0x0000000000298EB4 ""
 *   insn=0x0000000000298EC8 string=0x0000000000298ECC " "
 *   insn=0x0000000000298EE0 string=0x00000000001F7A10 "0'"
 *   insn=0x0000000000298EF0 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000298F00 string=0x0000000000298F04 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent(
        Caver::LeapingMonsterControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 31);
  *(_QWORD *)&v3 = &off_6C1DE8;
  *((_QWORD *)&v3 + 1) = &off_6C1E28;
  *(_QWORD *)this = off_6C1CD0;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 29) = &off_6C1E68;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 26) = &off_6BDF68;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
}

