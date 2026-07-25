/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B1074
 * Mangled: _ZN5Caver19SimpleGlowComponentD2Ev
 * Demangled: Caver::SimpleGlowComponent::~SimpleGlowComponent()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *
 * Referenced strings: 13
 *   insn=0x00000000002B1080 string=0x00000000002B1084 "aE"
 *   insn=0x00000000002B1088 string=0x00000000002B108C "`N@"
 *   insn=0x00000000002B108C string=0x00000000002B1090 "\n"
 *   insn=0x00000000002B1090 string=0x00000000002B1094 "\tA"
 *   insn=0x00000000002B1094 string=0x00000000002B1098 "@"
 *   insn=0x00000000002B1098 string=0x00000000002B109C ""
 *   insn=0x00000000002B10A0 string=0x00000000002B10A4 "i"
 *   insn=0x00000000002B10A4 string=0x00000000002B10A8 "`"
 *   insn=0x00000000002B10A8 string=0x00000000002B10AC "@"
 *   insn=0x00000000002B10AC string=0x00000000002B10B4 "`F@"
 *   insn=0x00000000002B10B0 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002B10B4 string=0x00000000002B10B8 "@"
 *   insn=0x00000000002B10CC string=0x00000000001FA4D0 "0'"
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
}

