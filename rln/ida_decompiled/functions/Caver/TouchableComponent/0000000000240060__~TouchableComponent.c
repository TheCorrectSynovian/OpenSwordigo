/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000240060
 * Mangled: _ZN5Caver18TouchableComponentD2Ev
 * Demangled: Caver::TouchableComponent::~TouchableComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9AA0  Caver::TouchableComponent::InitWithComponent(Caver::TouchableComponent const*)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x0000000000240068 string=0x000000000024006C "(%"
 *   insn=0x000000000024006C string=0x0000000000240070 "\t@"
 *   insn=0x0000000000240074 string=0x0000000000240078 "`"
 *   insn=0x0000000000240078 string=0x000000000024007C "\n"
 *   insn=0x000000000024007C string=0x0000000000240080 "\tA"
 *   insn=0x0000000000240080 string=0x0000000000240084 ""
 *   insn=0x0000000000240084 string=0x0000000000240088 "@"
 *   insn=0x000000000024008C string=0x0000000000240090 "i"
 *   insn=0x0000000000240090 string=0x0000000000240094 "`"
 *   insn=0x00000000002400A4 string=0x00000000002400A8 "\n"
 *   insn=0x00000000002400A8 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002400B0 string=0x00000000002400B4 ""
 *   insn=0x00000000002400CC string=0x00000000002400D0 "(%"
 *   insn=0x00000000002400D0 string=0x00000000002400D4 "\t@"
 *   insn=0x00000000002400D8 string=0x00000000002400DC "`"
 *   insn=0x00000000002400DC string=0x00000000002400E0 "\n"
 *   insn=0x00000000002400E0 string=0x00000000002400E4 "\tA"
 *   insn=0x00000000002400E4 string=0x00000000002400E8 ""
 *   insn=0x00000000002400E8 string=0x00000000002400EC "@"
 *   insn=0x00000000002400F0 string=0x00000000002400F4 "i"
 *   insn=0x00000000002400F4 string=0x00000000002400F8 "`"
 *   insn=0x0000000000240110 string=0x0000000000240114 "g"
 *   insn=0x0000000000240114 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024012C string=0x0000000000240130 "`"
 *   insn=0x0000000000240150 string=0x0000000000240154 "#"
 *   insn=0x0000000000240154 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000240160 string=0x0000000000240164 "(%"
 *   insn=0x0000000000240164 string=0x0000000000240168 "*%"
 *   insn=0x0000000000240168 string=0x000000000024016C ""
 *   insn=0x000000000024016C string=0x0000000000240170 "J\t@"
 *   insn=0x0000000000240178 string=0x000000000024017C "a"
 *   insn=0x000000000024017C string=0x0000000000240180 "L"
 *   insn=0x0000000000240180 string=0x0000000000240184 "KA"
 *   insn=0x0000000000240188 string=0x000000000024018C "J"
 *   insn=0x0000000000240190 string=0x0000000000240194 " "
 *   insn=0x000000000024019C string=0x00000000002401A0 "A"
 *   insn=0x00000000002401C0 string=0x00000000002401C4 "7"
 *   insn=0x00000000002401C4 string=0x00000000001F9AA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TouchableComponent::~TouchableComponent(Caver::TouchableComponent *this)
{
  __int128 v2; // q0

  *(_QWORD *)&v2 = &off_6BC1D8;
  *((_QWORD *)&v2 + 1) = &off_6BC218;
  *(_QWORD *)this = off_6BC0C0;
  *((_OWORD *)this + 1) = v2;
  Caver::Program::~Program((Caver::TouchableComponent *)((char *)this + 128));
  Caver::Component::~Component(this);
}

