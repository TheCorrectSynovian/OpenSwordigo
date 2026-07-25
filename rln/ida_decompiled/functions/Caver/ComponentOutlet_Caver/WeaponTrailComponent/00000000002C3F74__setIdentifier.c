/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C3F74
 * Mangled: _ZN5Caver15ComponentOutletINS_20WeaponTrailComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::WeaponTrailComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002C3F74 string=0x00000000002C3F78 "\t\t@"
 *   insn=0x00000000002C3F78 string=0x00000000002C3F7C "?"
 *   insn=0x00000000002C3F7C string=0x00000000002C3F80 " "
 *   insn=0x00000000002C3F90 string=0x00000000002C3F94 "@"
 *   insn=0x00000000002C3F94 string=0x00000000002C3F98 ""
 *   insn=0x00000000002C3F98 string=0x00000000002C3F9C ""
 *   insn=0x00000000002C3F9C string=0x00000000002C3FA0 "@"
 *   insn=0x00000000002C3FA0 string=0x00000000002C3FA8 ""
 *   insn=0x00000000002C3FAC string=0x00000000002C3FB0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::WeaponTrailComponent>::setIdentifier(__int64 result, int a2)
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

