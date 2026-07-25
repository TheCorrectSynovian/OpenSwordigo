/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025A680
 * Mangled: _ZN5Caver15ComponentOutletINS_27CharAnimControllerComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::CharAnimControllerComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000025A680 string=0x000000000025A684 "\t\t@"
 *   insn=0x000000000025A684 string=0x000000000025A688 "?"
 *   insn=0x000000000025A688 string=0x000000000025A68C " "
 *   insn=0x000000000025A69C string=0x000000000025A6A0 "@"
 *   insn=0x000000000025A6A0 string=0x000000000025A6A4 ""
 *   insn=0x000000000025A6A4 string=0x000000000025A6A8 ""
 *   insn=0x000000000025A6A8 string=0x000000000025A6AC "@"
 *   insn=0x000000000025A6AC string=0x000000000025A6B4 ""
 *   insn=0x000000000025A6B8 string=0x000000000025A6BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::CharAnimControllerComponent>::setIdentifier(__int64 result, int a2)
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

