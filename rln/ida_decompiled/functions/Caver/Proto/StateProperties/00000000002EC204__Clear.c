/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC204
 * Mangled: _ZN5Caver5Proto15StateProperties5ClearEv
 * Demangled: Caver::Proto::StateProperties::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 4
 *   insn=0x00000000002EC210 string=0x00000000002EC214 "h"
 *   insn=0x00000000002EC220 string=0x00000000002EC224 "h\n@"
 *   insn=0x00000000002EC230 string=0x00000000002EC234 ""
 *   insn=0x00000000002EC23C string=0x00000000002EC240 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StateProperties::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  _QWORD *v3; // x0

  v1 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD **)(*(_QWORD *)(v1 + 16) + 8 * v2);
      this = sub_568CB8(v3, 0, *(_QWORD *)(*v3 - 24LL), 0);
      ++v2;
    }
    while ( v2 < *(int *)(v1 + 24) );
  }
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 72) = 0;
  return this;
}

