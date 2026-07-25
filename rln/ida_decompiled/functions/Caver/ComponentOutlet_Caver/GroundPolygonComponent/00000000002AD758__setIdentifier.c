/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AD758
 * Mangled: _ZN5Caver15ComponentOutletINS_22GroundPolygonComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::GroundPolygonComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002AD758 string=0x00000000002AD75C "\t\t@"
 *   insn=0x00000000002AD75C string=0x00000000002AD760 "?"
 *   insn=0x00000000002AD760 string=0x00000000002AD764 " "
 *   insn=0x00000000002AD774 string=0x00000000002AD778 "@"
 *   insn=0x00000000002AD778 string=0x00000000002AD77C ""
 *   insn=0x00000000002AD77C string=0x00000000002AD780 ""
 *   insn=0x00000000002AD780 string=0x00000000002AD784 "@"
 *   insn=0x00000000002AD784 string=0x00000000002AD78C ""
 *   insn=0x00000000002AD790 string=0x00000000002AD794 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::GroundPolygonComponent>::setIdentifier(__int64 result, int a2)
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

