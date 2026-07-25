/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025A700
 * Mangled: _ZN5Caver15ComponentOutletINS_34SwingableWeaponControllerComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::SwingableWeaponControllerComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000025A700 string=0x000000000025A704 "\t\t@"
 *   insn=0x000000000025A704 string=0x000000000025A708 "?"
 *   insn=0x000000000025A708 string=0x000000000025A70C " "
 *   insn=0x000000000025A71C string=0x000000000025A720 "@"
 *   insn=0x000000000025A720 string=0x000000000025A724 ""
 *   insn=0x000000000025A724 string=0x000000000025A728 ""
 *   insn=0x000000000025A728 string=0x000000000025A72C "@"
 *   insn=0x000000000025A72C string=0x000000000025A734 ""
 *   insn=0x000000000025A738 string=0x000000000025A73C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::SwingableWeaponControllerComponent>::setIdentifier(
        __int64 result,
        int a2)
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

