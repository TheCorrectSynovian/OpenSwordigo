/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1F90
 * Mangled: _ZN5Caver15ComponentOutletINS_14LightComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::LightComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002A1F90 string=0x00000000002A1F94 "\t\t@"
 *   insn=0x00000000002A1F94 string=0x00000000002A1F98 "?"
 *   insn=0x00000000002A1F98 string=0x00000000002A1F9C " "
 *   insn=0x00000000002A1FAC string=0x00000000002A1FB0 "@"
 *   insn=0x00000000002A1FB0 string=0x00000000002A1FB4 ""
 *   insn=0x00000000002A1FB4 string=0x00000000002A1FB8 ""
 *   insn=0x00000000002A1FB8 string=0x00000000002A1FBC "@"
 *   insn=0x00000000002A1FBC string=0x00000000002A1FC4 ""
 *   insn=0x00000000002A1FC8 string=0x00000000002A1FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::LightComponent>::setIdentifier(__int64 result, int a2)
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

