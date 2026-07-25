/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026A4A0
 * Mangled: _ZN5Caver15ComponentOutletINS_14ShapeComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::ShapeComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000026A4A0 string=0x000000000026A4A4 "\t\t@"
 *   insn=0x000000000026A4A4 string=0x000000000026A4A8 "?"
 *   insn=0x000000000026A4A8 string=0x000000000026A4AC " "
 *   insn=0x000000000026A4BC string=0x000000000026A4C0 "@"
 *   insn=0x000000000026A4C0 string=0x000000000026A4C4 ""
 *   insn=0x000000000026A4C4 string=0x000000000026A4C8 ""
 *   insn=0x000000000026A4C8 string=0x000000000026A4CC "@"
 *   insn=0x000000000026A4CC string=0x000000000026A4D4 ""
 *   insn=0x000000000026A4D8 string=0x000000000026A4DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::ShapeComponent>::setIdentifier(__int64 result, int a2)
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

