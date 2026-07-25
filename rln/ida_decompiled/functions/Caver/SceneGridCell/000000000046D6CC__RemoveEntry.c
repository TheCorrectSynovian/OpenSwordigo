/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D6CC
 * Mangled: _ZN5Caver13SceneGridCell11RemoveEntryEPNS_14SceneGridEntryE
 * Demangled: Caver::SceneGridCell::RemoveEntry(Caver::SceneGridEntry *)
 *
 * Callers: 1
 *   0x00000000001FE8C0  Caver::SceneGridCell::RemoveEntry(Caver::SceneGridEntry *)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000046D6CC string=0x000000000046D6D0 "H"
 *   insn=0x000000000046D6D4 string=0x000000000046D6D8 "\t"
 *   insn=0x000000000046D6D8 string=0x000000000046D6DC ""
 *   insn=0x000000000046D6E0 string=0x000000000046D6E4 "*"
 *   insn=0x000000000046D6E4 string=0x000000000046D6E8 "k"
 *   insn=0x000000000046D6E8 string=0x000000000046D6EC "m"
 *   insn=0x000000000046D6EC string=0x000000000046D6F0 "l"
 *   insn=0x000000000046D6F8 string=0x000000000046D6FC "J"
 *   insn=0x000000000046D6F8 string=0x000000000046D714 ""
 *   insn=0x000000000046D6FC string=0x000000000046D700 "_"
 *   insn=0x000000000046D700 string=0x000000000046D704 "k!"
 *   insn=0x000000000046D708 string=0x000000000046D70C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGridCell::RemoveEntry(__int64 result, __int64 a2)
{
  int v2; // w10
  int v3; // w8
  int v4; // w9
  __int64 v5; // x12
  int v6; // w10
  __int64 *i; // x11
  __int64 v8; // x13

  v2 = *(_DWORD *)(result + 8);
  v3 = v2 - 1;
  if ( v2 >= 1 )
  {
    v4 = *(_DWORD *)(result + 12);
    v5 = 0;
    v6 = v4 - v2;
    for ( i = (__int64 *)(*(_QWORD *)result + 8LL * v6); ; ++i )
    {
      v8 = *i;
      *i = v5;
      if ( v8 == a2 )
        break;
      ++v6;
      v5 = v8;
      if ( v6 >= v4 )
        return result;
    }
    *(_DWORD *)(result + 8) = v3;
  }
  return result;
}

