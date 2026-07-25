/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F1E2C
 * Mangled: _ZN5Caver5Proto10LevelState5ClearEv
 * Demangled: Caver::Proto::LevelState::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 9
 *   insn=0x00000000002F1E3C string=0x00000000002F1E40 "h"
 *   insn=0x00000000002F1E4C string=0x00000000002F1E50 "`\n@"
 *   insn=0x00000000002F1E50 string=0x00000000002F1E54 ")M@"
 *   insn=0x00000000002F1E5C string=0x00000000002F1E60 ""
 *   insn=0x00000000002F1E70 string=0x00000000002F1E74 "h2@"
 *   insn=0x00000000002F1E7C string=0x00000000002F1E80 "t"
 *   insn=0x00000000002F1E80 string=0x00000000002F1E84 "T"
 *   insn=0x00000000002F1EA4 string=0x00000000002F1EA8 ""
 *   insn=0x00000000002F1ECC string=0x00000000002F1ED0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LevelState::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x21
  _QWORD *v5; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 48);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 48) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::LevelState::_default_level_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 48);
      }
    }
    *(_BYTE *)(v1 + 24) = 0;
    if ( (v2 & 4) != 0 )
    {
      v3 = *(_QWORD *)(v1 + 32);
      if ( v3 )
      {
        if ( *(int *)(v3 + 24) >= 1 )
        {
          v4 = 0;
          do
          {
            v5 = *(_QWORD **)(*(_QWORD *)(v3 + 16) + 8 * v4);
            this = sub_568CB8(v5, 0, *(_QWORD *)(*v5 - 24LL), 0);
            ++v4;
          }
          while ( v4 < *(int *)(v3 + 24) );
        }
        *(_DWORD *)(v3 + 24) = 0;
        *(_DWORD *)(v3 + 72) = 0;
      }
    }
    *(_QWORD *)(v1 + 40) = 0xFFFFFFFFLL;
  }
  *(_DWORD *)(v1 + 48) = 0;
  return this;
}

