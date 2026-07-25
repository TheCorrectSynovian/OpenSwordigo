/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C428C
 * Mangled: _ZN5Caver15ComponentOutletINS_19WeaponGlowComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::WeaponGlowComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002C428C string=0x00000000002C4290 "\t\t@"
 *   insn=0x00000000002C4290 string=0x00000000002C4294 "?"
 *   insn=0x00000000002C4294 string=0x00000000002C4298 " "
 *   insn=0x00000000002C42A8 string=0x00000000002C42AC "@"
 *   insn=0x00000000002C42AC string=0x00000000002C42B0 ""
 *   insn=0x00000000002C42B0 string=0x00000000002C42B4 ""
 *   insn=0x00000000002C42B4 string=0x00000000002C42B8 "@"
 *   insn=0x00000000002C42B8 string=0x00000000002C42C0 ""
 *   insn=0x00000000002C42C4 string=0x00000000002C42C8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::WeaponGlowComponent>::setIdentifier(__int64 result, int a2)
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

