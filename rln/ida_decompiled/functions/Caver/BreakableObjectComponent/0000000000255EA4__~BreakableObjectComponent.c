/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000255EA4
 * Mangled: _ZN5Caver24BreakableObjectComponentD2Ev
 * Demangled: Caver::BreakableObjectComponent::~BreakableObjectComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FAA00  Caver::BreakableObjectComponent::InitWithComponent(Caver::BreakableObjectComponent const*)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 36
 *   insn=0x0000000000255EB0 string=0x0000000000255EB4 "eC"
 *   insn=0x0000000000255EB8 string=0x0000000000255EBC "`"
 *   insn=0x0000000000255EBC string=0x0000000000255EC0 "\n"
 *   insn=0x0000000000255EC0 string=0x0000000000255EC4 "\tA"
 *   insn=0x0000000000255EC4 string=0x0000000000255EC8 ""
 *   insn=0x0000000000255EC8 string=0x0000000000255ECC "@"
 *   insn=0x0000000000255ED0 string=0x0000000000255ED4 "i"
 *   insn=0x0000000000255ED4 string=0x0000000000255ED8 "`"
 *   insn=0x0000000000255ED8 string=0x0000000000255EDC "%"
 *   insn=0x0000000000255EE8 string=0x0000000000255EEC "y"
 *   insn=0x0000000000255EEC string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000255EF4 string=0x0000000000255EF8 "v"
 *   insn=0x0000000000255EFC string=0x0000000000255F00 "q"
 *   insn=0x0000000000255F14 string=0x0000000000255F18 "eC"
 *   insn=0x0000000000255F1C string=0x0000000000255F20 "`"
 *   insn=0x0000000000255F20 string=0x0000000000255F24 "\n"
 *   insn=0x0000000000255F24 string=0x0000000000255F28 "\tA"
 *   insn=0x0000000000255F28 string=0x0000000000255F2C ""
 *   insn=0x0000000000255F2C string=0x0000000000255F30 "@"
 *   insn=0x0000000000255F34 string=0x0000000000255F38 "i"
 *   insn=0x0000000000255F38 string=0x0000000000255F3C "`"
 *   insn=0x0000000000255F44 string=0x0000000000255F48 "b"
 *   insn=0x0000000000255F58 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000255F68 string=0x0000000000255F6C "Y"
 *   insn=0x0000000000255F78 string=0x0000000000255F7C "R"
 *   insn=0x0000000000255F98 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000255FAC string=0x0000000000255FB0 ""
 *   insn=0x0000000000255FB0 string=0x0000000000255FB4 "JeC"
 *   insn=0x0000000000255FBC string=0x0000000000255FC0 "a"
 *   insn=0x0000000000255FC0 string=0x0000000000255FC4 "L"
 *   insn=0x0000000000255FC4 string=0x0000000000255FC8 "KA"
 *   insn=0x0000000000255FCC string=0x0000000000255FD0 "J"
 *   insn=0x0000000000255FD4 string=0x0000000000255FD8 " "
 *   insn=0x0000000000255FD8 string=0x0000000000255FDC "A"
 *   insn=0x000000000025600C string=0x0000000000256010 "|"
 *   insn=0x0000000000256010 string=0x00000000001FAA00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BreakableObjectComponent::~BreakableObjectComponent(Caver::BreakableObjectComponent *this)
{
  __int128 v2; // q0

  *(_QWORD *)&v2 = &off_6BDD48;
  *((_QWORD *)&v2 + 1) = &off_6BDD88;
  *(_QWORD *)this = off_6BDC30;
  *((_OWORD *)this + 1) = v2;
  Caver::Program::~Program((Caver::BreakableObjectComponent *)((char *)this + 128));
  Caver::Component::~Component(this);
}

