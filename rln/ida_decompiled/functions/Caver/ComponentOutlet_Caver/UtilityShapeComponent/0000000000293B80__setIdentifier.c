/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293B80
 * Mangled: _ZN5Caver15ComponentOutletINS_21UtilityShapeComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::UtilityShapeComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x0000000000293B80 string=0x0000000000293B84 "\t\t@"
 *   insn=0x0000000000293B84 string=0x0000000000293B88 "?"
 *   insn=0x0000000000293B88 string=0x0000000000293B8C " "
 *   insn=0x0000000000293B9C string=0x0000000000293BA0 "@"
 *   insn=0x0000000000293BA0 string=0x0000000000293BA4 ""
 *   insn=0x0000000000293BA4 string=0x0000000000293BA8 ""
 *   insn=0x0000000000293BA8 string=0x0000000000293BAC "@"
 *   insn=0x0000000000293BAC string=0x0000000000293BB4 ""
 *   insn=0x0000000000293BB8 string=0x0000000000293BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::UtilityShapeComponent>::setIdentifier(__int64 result, int a2)
{
  __int64 v2; // x8
  int v3; // w8

  v2 = result;
  if ( *(_DWORD *)(result + 8) != a2 )
  {
    result = *(_QWORD *)(result + 16);
    *(_DWORD *)(v2 + 8) = a2;
    *(_QWORD *)(v2 + 16) = 0;
    if ( result )
    {
      v3 = *(_DWORD *)(result + 8) - 1;
      *(_DWORD *)(result + 8) = v3;
      if ( !v3 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}

