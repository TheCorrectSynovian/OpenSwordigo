/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052A954
 * Mangled: sub_52A954
 * Demangled: sub_52A954
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000052A954 string=0x000000000052A958 "`"
 *   insn=0x000000000052A958 string=0x000000000052A95C "D"
 *   insn=0x000000000052A95C string=0x000000000052A960 "%"
 *   insn=0x000000000052A96C string=0x000000000052A970 "a"
 *   insn=0x000000000052A974 string=0x000000000052A978 " "
 *   insn=0x000000000052A978 string=0x000000000052A97C "@"
 *   insn=0x000000000052A97C string=0x000000000052A980 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52A954(__int64 result, __int64 a2, __int64 a3)
{
  _QWORD *v3; // x4
  _QWORD *v4; // x5
  _QWORD *v5; // x3

  if ( result != a3 )
  {
    v3 = *(_QWORD **)(a3 + 8);
    v4 = *(_QWORD **)(a2 + 8);
    v5 = *(_QWORD **)(result + 8);
    *v3 = result;
    *v4 = a3;
    *v5 = a2;
    *(_QWORD *)(result + 8) = v3;
    result = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a3 + 8) = result;
    *(_QWORD *)(a2 + 8) = v5;
  }
  return result;
}

