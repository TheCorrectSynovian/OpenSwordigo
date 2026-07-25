/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213E34
 * Mangled: _ZN5Caver15ComponentOutletINS_14ModelComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::ModelComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x0000000000213E34 string=0x0000000000213E38 "\t\t@"
 *   insn=0x0000000000213E38 string=0x0000000000213E3C "?"
 *   insn=0x0000000000213E3C string=0x0000000000213E40 " "
 *   insn=0x0000000000213E50 string=0x0000000000213E54 "@"
 *   insn=0x0000000000213E54 string=0x0000000000213E58 ""
 *   insn=0x0000000000213E58 string=0x0000000000213E5C ""
 *   insn=0x0000000000213E5C string=0x0000000000213E60 "@"
 *   insn=0x0000000000213E60 string=0x0000000000213E68 ""
 *   insn=0x0000000000213E6C string=0x0000000000213E70 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::ModelComponent>::setIdentifier(__int64 result, int a2)
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

