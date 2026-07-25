/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046DFCC
 * Mangled: _ZN5Caver14SceneGridLayer12RemoveObjectEPNS_14SceneGridEntryE
 * Demangled: Caver::SceneGridLayer::RemoveObject(Caver::SceneGridEntry *)
 *
 * Callers: 1
 *   0x0000000000202E70  Caver::SceneGridLayer::RemoveObject(Caver::SceneGridEntry *)
 *
 * Callees: 1
 *   0x00000000001FE8C0  Caver::SceneGridCell::RemoveEntry(Caver::SceneGridEntry *)
 *
 * Referenced strings: 10
 *   insn=0x000000000046DFE4 string=0x000000000046DFE8 "h"
 *   insn=0x000000000046DFEC string=0x000000000046DFF0 "h"
 *   insn=0x000000000046DFF0 string=0x000000000046DFF4 "hBB"
 *   insn=0x000000000046E01C string=0x000000000046E020 "l"
 *   insn=0x000000000046E030 string=0x000000000046E034 ""
 *   insn=0x000000000046E034 string=0x000000000046E038 " "
 *   insn=0x000000000046E038 string=0x000000000046E03C "!B"
 *   insn=0x000000000046E03C string=0x000000000046E040 "Z"
 *   insn=0x000000000046E040 string=0x000000000046E044 "_"
 *   insn=0x000000000046E054 string=0x000000000046E058 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGridLayer::RemoveObject(__int64 result, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  int v7; // w23
  int v8; // w24
  int v9; // w25
  int v10; // w26
  bool v11; // cc

  v3 = result;
  if ( *(_QWORD *)a2 )
  {
    v4 = *(_QWORD *)(a2 + 36);
    *(_QWORD *)a2 = 0;
    v5 = v4 << 16 >> 48;
    v6 = v4 >> 48;
    if ( (int)v5 <= v4 >> 48 )
    {
      v7 = (__int16)v4;
      v8 = (int)v4 >> 16;
      v9 = (__int16)v4 - 1;
      do
      {
        v10 = v9;
        if ( v7 <= v8 )
        {
          do
          {
            result = Caver::SceneGridCell::RemoveEntry(
                       (Caver::SceneGridCell *)(*(_QWORD *)(v3 + 48) + 16LL * (v10 + (int)v5 * *(_DWORD *)(v3 + 40) + 1)),
                       (Caver::SceneGridEntry *)a2);
            ++v10;
          }
          while ( v10 < v8 );
        }
        v11 = (int)v5 < (int)v6;
        LODWORD(v5) = v5 + 1;
      }
      while ( v11 );
    }
  }
  return result;
}

