/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002837DC
 * Mangled: _ZN5Caver22HookshotTrailComponentD0Ev
 * Demangled: Caver::HookshotTrailComponent::~HookshotTrailComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000283854  Caver::HookshotTrailComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x00000000002837E4 string=0x00000000002837E8 "(#"
 *   insn=0x00000000002837E8 string=0x00000000002837EC ""
 *   insn=0x00000000002837F0 string=0x00000000002837F4 "`N@"
 *   insn=0x00000000002837F4 string=0x00000000002837F8 "\n"
 *   insn=0x00000000002837F8 string=0x00000000002837FC "\tA"
 *   insn=0x00000000002837FC string=0x0000000000283800 "@"
 *   insn=0x0000000000283800 string=0x0000000000283804 ""
 *   insn=0x0000000000283808 string=0x000000000028380C "i"
 *   insn=0x000000000028380C string=0x0000000000283810 "`"
 *   insn=0x0000000000283810 string=0x0000000000283814 "@"
 *   insn=0x0000000000283814 string=0x000000000028381C "`F@"
 *   insn=0x0000000000283818 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000028381C string=0x0000000000283820 "@"
 *   insn=0x0000000000283828 string=0x000000000028382C ")"
 *   insn=0x000000000028382C string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000028383C string=0x00000000001F72B0 "0'"
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
  operator delete(this);
}

