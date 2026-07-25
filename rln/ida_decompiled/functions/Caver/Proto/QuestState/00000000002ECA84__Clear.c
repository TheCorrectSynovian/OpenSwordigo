/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECA84
 * Mangled: _ZN5Caver5Proto10QuestState5ClearEv
 * Demangled: Caver::Proto::QuestState::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x00000000002ECA90 string=0x00000000002ECA94 "hr@9"
 *   insn=0x00000000002ECA98 string=0x00000000002ECA9C "h"
 *   insn=0x00000000002ECAA0 string=0x00000000002ECAA4 "`\n@"
 *   insn=0x00000000002ECAA4 string=0x00000000002ECAA8 ""
 *   insn=0x00000000002ECAB0 string=0x00000000002ECAB4 ""
 *   insn=0x00000000002ECAC0 string=0x00000000002ECAC4 "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestState::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 28) )
  {
    if ( (*(_BYTE *)(this + 28) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::QuestState::_default_quest_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_BYTE *)(v1 + 24) = 0;
  }
  *(_DWORD *)(v1 + 28) = 0;
  return this;
}

