/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B10D0
 * Mangled: _ZN5Caver19SimpleGlowComponentD0Ev
 * Demangled: Caver::SimpleGlowComponent::~SimpleGlowComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000002B1148  Caver::SimpleGlowComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x00000000002B10DC string=0x00000000002B10E0 "aE"
 *   insn=0x00000000002B10E4 string=0x00000000002B10E8 "`N@"
 *   insn=0x00000000002B10E8 string=0x00000000002B10EC "\n"
 *   insn=0x00000000002B10EC string=0x00000000002B10F0 "\tA"
 *   insn=0x00000000002B10F0 string=0x00000000002B10F4 "@"
 *   insn=0x00000000002B10F4 string=0x00000000002B10F8 ""
 *   insn=0x00000000002B10FC string=0x00000000002B1100 "i"
 *   insn=0x00000000002B1100 string=0x00000000002B1104 "`"
 *   insn=0x00000000002B1104 string=0x00000000002B1108 "@"
 *   insn=0x00000000002B1108 string=0x00000000002B1110 "`F@"
 *   insn=0x00000000002B110C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002B1110 string=0x00000000002B1114 "@"
 *   insn=0x00000000002B1120 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B112C string=0x00000000002B1130 "`"
 *   insn=0x00000000002B1130 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B1138 string=0x00000000002B113C "]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SimpleGlowComponent::~SimpleGlowComponent(Caver::SimpleGlowComponent *this)
{
  void *v2; // x0
  __int128 v3; // q0
  void *v4; // x0

  v2 = (void *)*((_QWORD *)this + 19);
  *(_QWORD *)&v3 = &off_6C4048;
  *((_QWORD *)&v3 + 1) = &off_6C4088;
  *(_QWORD *)this = off_6C3F20;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
    operator delete[](v2);
  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
    operator delete[](v4);
  Caver::Component::~Component(this);
  operator delete(this);
}

