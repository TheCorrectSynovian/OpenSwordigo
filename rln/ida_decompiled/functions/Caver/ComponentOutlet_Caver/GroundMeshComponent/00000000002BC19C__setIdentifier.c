/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BC19C
 * Mangled: _ZN5Caver15ComponentOutletINS_19GroundMeshComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::GroundMeshComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002BC19C string=0x00000000002BC1A0 "\t\t@"
 *   insn=0x00000000002BC1A0 string=0x00000000002BC1A4 "?"
 *   insn=0x00000000002BC1A4 string=0x00000000002BC1A8 " "
 *   insn=0x00000000002BC1B8 string=0x00000000002BC1BC "@"
 *   insn=0x00000000002BC1BC string=0x00000000002BC1C0 ""
 *   insn=0x00000000002BC1C0 string=0x00000000002BC1C4 ""
 *   insn=0x00000000002BC1C4 string=0x00000000002BC1C8 "@"
 *   insn=0x00000000002BC1C8 string=0x00000000002BC1D0 ""
 *   insn=0x00000000002BC1D4 string=0x00000000002BC1D8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::GroundMeshComponent>::setIdentifier(__int64 result, int a2)
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

