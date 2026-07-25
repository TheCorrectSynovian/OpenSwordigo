/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F084
 * Mangled: _ZN5Caver14SkillComponent13HandleMessageEiPv
 * Demangled: Caver::SkillComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000028F084 string=0x000000000028F088 "!"
 *   insn=0x000000000028F088 string=0x000000000028F08C "X@"
 *   insn=0x000000000028F08C string=0x000000000028F090 "h"
 *   insn=0x000000000028F090 string=0x000000000028F09C "`@"
 *   insn=0x000000000028F094 string=0x000000000028F098 "\t"
 *   insn=0x000000000028F09C string=0x000000000028F0A0 "h"
 *   insn=0x000000000028F0A4 string=0x000000000028F0A8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillComponent::HandleMessage(Caver::SkillComponent *this, int a2, void *a3)
{
  __int64 v3; // x8
  __int64 v4; // x8

  if ( a2 == 2 )
  {
    v3 = *((_QWORD *)this + 22);
    if ( v3 )
      *(_BYTE *)(v3 + 232) = 1;
    v4 = *((_QWORD *)this + 24);
    if ( v4 )
      *(_BYTE *)(v4 + 232) = 1;
  }
  return 0;
}

