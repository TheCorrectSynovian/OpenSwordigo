/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283780
 * Mangled: _ZN5Caver22HookshotTrailComponentD2Ev
 * Demangled: Caver::HookshotTrailComponent::~HookshotTrailComponent()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *
 * Referenced strings: 15
 *   insn=0x0000000000283788 string=0x000000000028378C "(#"
 *   insn=0x000000000028378C string=0x0000000000283790 ""
 *   insn=0x0000000000283794 string=0x0000000000283798 "`N@"
 *   insn=0x0000000000283798 string=0x000000000028379C "\n"
 *   insn=0x000000000028379C string=0x00000000002837A0 "\tA"
 *   insn=0x00000000002837A0 string=0x00000000002837A4 "@"
 *   insn=0x00000000002837A4 string=0x00000000002837A8 ""
 *   insn=0x00000000002837AC string=0x00000000002837B0 "i"
 *   insn=0x00000000002837B0 string=0x00000000002837B4 "`"
 *   insn=0x00000000002837B4 string=0x00000000002837B8 "@"
 *   insn=0x00000000002837B8 string=0x00000000002837C0 "`F@"
 *   insn=0x00000000002837BC string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002837C0 string=0x00000000002837C4 "@"
 *   insn=0x00000000002837D4 string=0x00000000002837D8 ">"
 *   insn=0x00000000002837D8 string=0x00000000001FA4D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HookshotTrailComponent::~HookshotTrailComponent(Caver::HookshotTrailComponent *this)
{
  void *v2; // x0
  __int128 v3; // q0
  void *v4; // x0

  v2 = (void *)*((_QWORD *)this + 19);
  *(_QWORD *)&v3 = &off_6C03E8;
  *((_QWORD *)&v3 + 1) = &off_6C0428;
  *(_QWORD *)this = off_6C02C0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
    operator delete[](v2);
  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
    operator delete[](v4);
  Caver::Component::~Component(this);
}

