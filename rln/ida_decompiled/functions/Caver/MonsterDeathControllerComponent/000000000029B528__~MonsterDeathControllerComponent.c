/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029B528
 * Mangled: _ZN5Caver31MonsterDeathControllerComponentD2Ev
 * Demangled: Caver::MonsterDeathControllerComponent::~MonsterDeathControllerComponent()
 *
 * Callers: 1
 *   0x00000000001FFB80  Caver::MonsterDeathControllerComponent::~MonsterDeathControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB80  Caver::MonsterDeathControllerComponent::~MonsterDeathControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000029B650  Caver::MonsterDeathControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x000000000029B530 string=0x000000000029B534 "h""
 *   insn=0x000000000029B534 string=0x000000000029B538 ""
 *   insn=0x000000000029B53C string=0x000000000029B540 "`^@"
 *   insn=0x000000000029B540 string=0x000000000029B544 "\n"
 *   insn=0x000000000029B544 string=0x000000000029B548 "\tA"
 *   insn=0x000000000029B548 string=0x000000000029B54C "@"
 *   insn=0x000000000029B54C string=0x000000000029B550 ""
 *   insn=0x000000000029B554 string=0x000000000029B558 "i"
 *   insn=0x000000000029B558 string=0x000000000029B55C "`"
 *   insn=0x000000000029B560 string=0x000000000029B564 "@"
 *   insn=0x000000000029B560 string=0x000000000029B580 "h""
 *   insn=0x000000000029B564 string=0x000000000029B568 ""
 *   insn=0x000000000029B568 string=0x000000000029B56C ""
 *   insn=0x000000000029B570 string=0x000000000029B574 ""
 *   insn=0x000000000029B574 string=0x000000000029B578 ""
 *   insn=0x000000000029B580 string=0x000000000029B584 "`B@"
 *   insn=0x000000000029B584 string=0x000000000029B588 "mB"
 *   insn=0x000000000029B588 string=0x000000000029B58C "A"
 *   insn=0x000000000029B58C string=0x000000000029B590 "h:"
 *   insn=0x000000000029B594 string=0x000000000029B598 "@"
 *   insn=0x000000000029B598 string=0x000000000029B59C ""
 *   insn=0x000000000029B59C string=0x000000000029B5A0 ""
 *   insn=0x000000000029B5A4 string=0x000000000029B5A8 ""
 *   insn=0x000000000029B5A8 string=0x000000000029B5AC ""
 *   insn=0x000000000029B5C0 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000029B5D0 string=0x000000000029B5D4 "`B@"
 *   insn=0x000000000029B5D4 string=0x000000000029B5D8 "mB"
 *   insn=0x000000000029B5D8 string=0x000000000029B5DC "A"
 *   insn=0x000000000029B5DC string=0x000000000029B5E0 "h:"
 *   insn=0x000000000029B5E4 string=0x000000000029B5E8 "@"
 *   insn=0x000000000029B5E8 string=0x000000000029B5EC ""
 *   insn=0x000000000029B5EC string=0x000000000029B5F0 ""
 *   insn=0x000000000029B5F4 string=0x000000000029B5F8 ""
 *   insn=0x000000000029B5F8 string=0x000000000029B5FC ""
 *   insn=0x000000000029B610 string=0x000000000029B614 "N"
 *   insn=0x000000000029B624 string=0x000000000029B628 "V"
 *   insn=0x000000000029B638 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029B640 string=0x000000000029B644 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterDeathControllerComponent::~MonsterDeathControllerComponent(
        Caver::MonsterDeathControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 23);
  *(_QWORD *)&v3 = &off_6C2178;
  *((_QWORD *)&v3 + 1) = &off_6C21B8;
  *(_QWORD *)this = off_6C2060;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = off_6C0268;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::Component::~Component(this);
}

