/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED360
 * Mangled: _ZN5Caver5Proto9QuestText5ClearEv
 * Demangled: Caver::Proto::QuestText::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 11
 *   insn=0x00000000002ED36C string=0x00000000002ED370 "hBA9h"
 *   insn=0x00000000002ED370 string=0x00000000002ED374 "h"
 *   insn=0x00000000002ED374 string=0x00000000002ED3A0 "h"@"
 *   insn=0x00000000002ED378 string=0x00000000002ED37C "`\n@"
 *   insn=0x00000000002ED37C string=0x00000000002ED380 ""
 *   insn=0x00000000002ED388 string=0x00000000002ED38C ""
 *   insn=0x00000000002ED398 string=0x00000000002ED39C "G"
 *   insn=0x00000000002ED3AC string=0x00000000002ED3B0 "h"
 *   insn=0x00000000002ED3BC string=0x00000000002ED3C0 ""
 *   insn=0x00000000002ED3C4 string=0x00000000002ED3C8 "<"
 *   insn=0x00000000002ED3C8 string=0x00000000002ED3CC "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestText::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  _QWORD *v3; // x0

  v1 = this;
  if ( (*(_BYTE *)(this + 80) & 1) != 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( (__int64 *)this != &Caver::Proto::QuestText::_default_quest_name_ )
      this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
  }
  if ( *(int *)(v1 + 32) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD **)(*(_QWORD *)(v1 + 24) + 8 * v2);
      this = sub_568CB8(v3, 0, *(_QWORD *)(*v3 - 24LL), 0);
      ++v2;
    }
    while ( v2 < *(int *)(v1 + 32) );
  }
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 80) = 0;
  return this;
}

