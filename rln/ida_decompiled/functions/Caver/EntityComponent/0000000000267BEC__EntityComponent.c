/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267BEC
 * Mangled: _ZN5Caver15EntityComponentC2Ev
 * Demangled: Caver::EntityComponent::EntityComponent(void)
 *
 * Callers: 2
 *   0x00000000001F4850  Caver::EntityComponent::EntityComponent(void)
 *   0x00000000001FACA0  Caver::EntityComponent::EntityComponent(void)
 *
 * Callees: 5
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FBE10  Caver::PhysicsObjectState::PhysicsObjectState(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x0000000000267C08 string=0x0000000000267C0C ""
 *   insn=0x0000000000267C10 string=0x0000000000267C14 "JIF"
 *   insn=0x0000000000267C18 string=0x0000000000267C1C "a"
 *   insn=0x0000000000267C1C string=0x0000000000267C20 "h"
 *   insn=0x0000000000267C20 string=0x0000000000267C24 "H"
 *   insn=0x0000000000267C2C string=0x0000000000267C30 "?"
 *   insn=0x0000000000267C30 string=0x0000000000267C34 "hr"
 *   insn=0x0000000000267C34 string=0x0000000000267C38 "H"
 *   insn=0x0000000000267C38 string=0x0000000000267C3C "KA"
 *   insn=0x0000000000267C40 string=0x0000000000267C44 "`"
 *   insn=0x0000000000267C44 string=0x0000000000267C48 "k"
 *   insn=0x0000000000267C4C string=0x0000000000267C50 "i~"
 *   insn=0x0000000000267C50 string=0x0000000000267C54 "`"
 *   insn=0x0000000000267C54 string=0x0000000000267C58 "nP"
 *   insn=0x0000000000267C58 string=0x0000000000267C5C ""
 *   insn=0x0000000000267C58 string=0x00000000001FBE10 "0'"
 *   insn=0x0000000000267C60 string=0x0000000000267C64 "h"
 *   insn=0x0000000000267C90 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000267C94 string=0x0000000000267C98 "g"
 *   insn=0x0000000000267CAC string=0x0000000000267CB0 "h"@"
 *   insn=0x0000000000267CB4 string=0x0000000000267CB8 "a"
 *   insn=0x0000000000267CC0 string=0x0000000000267CC4 "y\n"
 *   insn=0x0000000000267CC4 string=0x0000000000267CC8 "hr@"
 *   insn=0x0000000000267CCC string=0x0000000000267CD0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::EntityComponent::EntityComponent(Caver::EntityComponent *this)
{
  __int128 v2; // q0
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v2 = &off_6BE9D8;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)&v2 + 1) = &off_6BEA18;
  *(_QWORD *)this = off_6BE8C0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v2;
  Caver::PhysicsObjectState::PhysicsObjectState((Caver::EntityComponent *)((char *)this + 120));
  result = *(long double *)&xmmword_587F20;
  *((_BYTE *)this + 256) = 0;
  *(_OWORD *)((char *)this + 260) = xmmword_587F20;
  *((_WORD *)this + 138) = 0;
  *((_QWORD *)this + 35) = 0;
  *((_BYTE *)this + 296) = 0;
  return result;
}

