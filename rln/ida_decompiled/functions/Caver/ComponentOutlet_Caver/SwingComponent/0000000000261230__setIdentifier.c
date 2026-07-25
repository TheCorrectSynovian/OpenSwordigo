/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261230
 * Mangled: _ZN5Caver15ComponentOutletINS_14SwingComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::SwingComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x0000000000261230 string=0x0000000000261234 "\t\t@"
 *   insn=0x0000000000261234 string=0x0000000000261238 "?"
 *   insn=0x0000000000261238 string=0x000000000026123C " "
 *   insn=0x000000000026124C string=0x0000000000261250 "@"
 *   insn=0x0000000000261250 string=0x0000000000261254 ""
 *   insn=0x0000000000261254 string=0x0000000000261258 ""
 *   insn=0x0000000000261258 string=0x000000000026125C "@"
 *   insn=0x000000000026125C string=0x0000000000261264 ""
 *   insn=0x0000000000261268 string=0x000000000026126C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::SwingComponent>::setIdentifier(__int64 result, int a2)
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

