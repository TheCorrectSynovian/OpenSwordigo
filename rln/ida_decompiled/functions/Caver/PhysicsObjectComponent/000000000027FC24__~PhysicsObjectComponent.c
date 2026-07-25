/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FC24
 * Mangled: _ZN5Caver22PhysicsObjectComponentD2Ev
 * Demangled: Caver::PhysicsObjectComponent::~PhysicsObjectComponent()
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7640  Caver::PhysicsObjectState::~PhysicsObjectState()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FBE10  Caver::PhysicsObjectState::PhysicsObjectState(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 56
 *   insn=0x000000000027FC2C string=0x000000000027FC30 "H#"
 *   insn=0x000000000027FC30 string=0x000000000027FC34 ""
 *   insn=0x000000000027FC38 string=0x000000000027FC3C "`"
 *   insn=0x000000000027FC3C string=0x000000000027FC40 "\n"
 *   insn=0x000000000027FC40 string=0x000000000027FC44 "\tA"
 *   insn=0x000000000027FC44 string=0x000000000027FC48 ""
 *   insn=0x000000000027FC48 string=0x000000000027FC4C "@"
 *   insn=0x000000000027FC50 string=0x000000000027FC54 "i"
 *   insn=0x000000000027FC54 string=0x000000000027FC58 "`"
 *   insn=0x000000000027FC58 string=0x000000000027FC5C "y"
 *   insn=0x000000000027FC5C string=0x00000000001F7640 "0'"
 *   insn=0x000000000027FC6C string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000027FC90 string=0x000000000027FC94 "H#"
 *   insn=0x000000000027FC94 string=0x000000000027FC98 ""
 *   insn=0x000000000027FC9C string=0x000000000027FCA0 "`"
 *   insn=0x000000000027FCA0 string=0x000000000027FCA4 "\n"
 *   insn=0x000000000027FCA4 string=0x000000000027FCA8 "\tA"
 *   insn=0x000000000027FCA8 string=0x000000000027FCAC ""
 *   insn=0x000000000027FCAC string=0x000000000027FCB0 "@"
 *   insn=0x000000000027FCB4 string=0x000000000027FCB8 "i"
 *   insn=0x000000000027FCB8 string=0x000000000027FCBC "`"
 *   insn=0x000000000027FCBC string=0x000000000027FCC0 "`"
 *   insn=0x000000000027FCD4 string=0x000000000027FCD8 "v"
 *   insn=0x000000000027FCD8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000027FCF0 string=0x000000000027FCF4 "o"
 *   insn=0x000000000027FD18 string=0x000000000027FD1C "1"
 *   insn=0x000000000027FD1C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027FD24 string=0x000000000027FD28 "(#"
 *   insn=0x000000000027FD28 string=0x000000000027FD2C ""
 *   insn=0x000000000027FD2C string=0x000000000027FD30 "J#"
 *   insn=0x000000000027FD30 string=0x000000000027FD34 "J"
 *   insn=0x000000000027FD38 string=0x000000000027FD3C "a"
 *   insn=0x000000000027FD40 string=0x000000000027FD44 "H"
 *   insn=0x000000000027FD58 string=0x000000000027FD5C "?"
 *   insn=0x000000000027FD5C string=0x000000000027FD60 "h"
 *   insn=0x000000000027FD60 string=0x000000000027FD64 "H"
 *   insn=0x000000000027FD64 string=0x000000000027FD68 "KA"
 *   insn=0x000000000027FD6C string=0x000000000027FD70 "`"
 *   insn=0x000000000027FD70 string=0x000000000027FD74 "k"
 *   insn=0x000000000027FD78 string=0x000000000027FD7C "i~"
 *   insn=0x000000000027FD7C string=0x000000000027FD80 "`"
 *   insn=0x000000000027FD80 string=0x000000000027FD84 "#"
 *   insn=0x000000000027FD84 string=0x000000000027FD88 "H"
 *   insn=0x000000000027FD84 string=0x00000000001FBE10 "0'"
 *   insn=0x000000000027FD8C string=0x000000000027FD90 "v2"
 *   insn=0x000000000027FDA4 string=0x000000000027FDA8 "h""
 *   insn=0x000000000027FDA8 string=0x000000000027FDAC "?"
 *   insn=0x000000000027FDB8 string=0x000000000027FDBC "h"
 *   insn=0x000000000027FDC0 string=0x000000000027FDC4 "hr"
 *   insn=0x000000000027FDC8 string=0x000000000027FDCC "h"
 *   insn=0x000000000027FDD0 string=0x000000000027FDD4 ""
 *   insn=0x000000000027FDDC string=0x000000000027FDE0 "h"
 *   insn=0x000000000027FDE4 string=0x000000000027FDE8 "h"
 *   insn=0x000000000027FDEC string=0x000000000027FDF0 "h"
 *   insn=0x000000000027FE0C string=0x000000000027FE10 "("
 *   insn=0x000000000027FE18 string=0x000000000027FE1C "L9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PhysicsObjectComponent::~PhysicsObjectComponent(Caver::PhysicsObjectComponent *this)
{
  __int128 v2; // q0

  *(_QWORD *)&v2 = &off_6BFAB8;
  *((_QWORD *)&v2 + 1) = &off_6BFAF8;
  *(_QWORD *)this = off_6BF9A0;
  *((_OWORD *)this + 1) = v2;
  Caver::PhysicsObjectState::~PhysicsObjectState((Caver::PhysicsObjectComponent *)((char *)this + 120));
  Caver::Component::~Component(this);
}

