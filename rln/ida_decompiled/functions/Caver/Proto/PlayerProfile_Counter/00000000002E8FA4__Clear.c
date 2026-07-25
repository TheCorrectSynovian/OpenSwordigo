/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8FA4
 * Mangled: _ZN5Caver5Proto21PlayerProfile_Counter5ClearEv
 * Demangled: Caver::Proto::PlayerProfile_Counter::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x00000000002E8FB0 string=0x00000000002E8FB4 "hr@9"
 *   insn=0x00000000002E8FB8 string=0x00000000002E8FBC "h"
 *   insn=0x00000000002E8FC0 string=0x00000000002E8FC4 "`\n@"
 *   insn=0x00000000002E8FC4 string=0x00000000002E8FC8 ""
 *   insn=0x00000000002E8FD0 string=0x00000000002E8FD4 ""
 *   insn=0x00000000002E8FE0 string=0x00000000002E8FE4 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile_Counter::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 28) )
  {
    if ( (*(_BYTE *)(this + 28) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::PlayerProfile_Counter::_default_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_DWORD *)(v1 + 24) = 0;
  }
  *(_DWORD *)(v1 + 28) = 0;
  return this;
}

