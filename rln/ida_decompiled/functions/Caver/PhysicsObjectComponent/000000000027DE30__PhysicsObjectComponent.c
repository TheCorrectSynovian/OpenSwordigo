/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DE30
 * Mangled: _ZN5Caver22PhysicsObjectComponentC2Ev
 * Demangled: Caver::PhysicsObjectComponent::PhysicsObjectComponent(void)
 *
 * Callers: 1
 *   0x0000000000202A70  Caver::PhysicsObjectComponent::PhysicsObjectComponent(void)
 *
 * Callees: 5
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FBE10  Caver::PhysicsObjectState::PhysicsObjectState(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x000000000027DE48 string=0x000000000027DE4C "H#"
 *   insn=0x000000000027DE4C string=0x000000000027DE50 ""
 *   insn=0x000000000027DE50 string=0x000000000027DE54 "J#"
 *   insn=0x000000000027DE54 string=0x000000000027DE58 "J"
 *   insn=0x000000000027DE5C string=0x000000000027DE60 "a"
 *   insn=0x000000000027DE60 string=0x000000000027DE64 "h"
 *   insn=0x000000000027DE64 string=0x000000000027DE68 "H"
 *   insn=0x000000000027DE70 string=0x000000000027DE74 "?"
 *   insn=0x000000000027DE74 string=0x000000000027DE78 "h"
 *   insn=0x000000000027DE78 string=0x000000000027DE7C "H"
 *   insn=0x000000000027DE7C string=0x000000000027DE80 "KA"
 *   insn=0x000000000027DE84 string=0x000000000027DE88 "`"
 *   insn=0x000000000027DE88 string=0x000000000027DE8C "k"
 *   insn=0x000000000027DE90 string=0x000000000027DE94 "i~"
 *   insn=0x000000000027DE94 string=0x000000000027DE98 "`"
 *   insn=0x000000000027DE9C string=0x000000000027DEA0 "H"
 *   insn=0x000000000027DE9C string=0x00000000001FBE10 "0'"
 *   insn=0x000000000027DEA4 string=0x000000000027DEA8 "h2"
 *   insn=0x000000000027DEC8 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000027DECC string=0x000000000027DED0 "}"
 *   insn=0x000000000027DEE4 string=0x000000000027DEE8 "h"@"
 *   insn=0x000000000027DEEC string=0x000000000027DEF0 "a"
 *   insn=0x000000000027DEFC string=0x000000000027DF00 "h"
 *   insn=0x000000000027DF08 string=0x000000000027DF0C "hr@"
 *   insn=0x000000000027DF10 string=0x000000000027DF14 "h"
 *   insn=0x000000000027DF18 string=0x000000000027DF1C "h2"
 *   insn=0x000000000027DF1C string=0x000000000027DF20 ""
 *   insn=0x000000000027DF20 string=0x000000000027DF24 "("
 *   insn=0x000000000027DF24 string=0x000000000027DF28 "h"
 *   insn=0x000000000027DF2C string=0x000000000027DF30 "h"
 *   insn=0x000000000027DF34 string=0x000000000027DF38 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::PhysicsObjectComponent::PhysicsObjectComponent(Caver::PhysicsObjectComponent *this)
{
  __int128 v2; // q0
  double result; // d0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v2 = &off_6BFAB8;
  *((_QWORD *)this + 9) = 0;
  *((_BYTE *)this + 112) = 1;
  *((_QWORD *)&v2 + 1) = &off_6BFAF8;
  *(_QWORD *)this = off_6BF9A0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v2;
  Caver::PhysicsObjectState::PhysicsObjectState((Caver::PhysicsObjectComponent *)((char *)this + 120));
  *(_QWORD *)&result = 1153138688;
  *(_QWORD *)((char *)this + 268) = 1153138688;
  *((_BYTE *)this + 276) = 0;
  return result;
}

