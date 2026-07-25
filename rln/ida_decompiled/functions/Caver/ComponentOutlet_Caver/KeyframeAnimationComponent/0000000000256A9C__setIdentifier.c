/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256A9C
 * Mangled: _ZN5Caver15ComponentOutletINS_26KeyframeAnimationComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::KeyframeAnimationComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x0000000000256A9C string=0x0000000000256AA0 "\t\t@"
 *   insn=0x0000000000256AA0 string=0x0000000000256AA4 "?"
 *   insn=0x0000000000256AA4 string=0x0000000000256AA8 " "
 *   insn=0x0000000000256AB8 string=0x0000000000256ABC "@"
 *   insn=0x0000000000256ABC string=0x0000000000256AC0 ""
 *   insn=0x0000000000256AC0 string=0x0000000000256AC4 ""
 *   insn=0x0000000000256AC4 string=0x0000000000256AC8 "@"
 *   insn=0x0000000000256AC8 string=0x0000000000256AD0 ""
 *   insn=0x0000000000256AD4 string=0x0000000000256AD8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::KeyframeAnimationComponent>::setIdentifier(__int64 result, int a2)
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

