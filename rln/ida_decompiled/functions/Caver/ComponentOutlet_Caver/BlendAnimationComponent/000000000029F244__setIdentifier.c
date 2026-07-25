/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029F244
 * Mangled: _ZN5Caver15ComponentOutletINS_23BlendAnimationComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::BlendAnimationComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000029F244 string=0x000000000029F248 "\t\t@"
 *   insn=0x000000000029F248 string=0x000000000029F24C "?"
 *   insn=0x000000000029F24C string=0x000000000029F250 " "
 *   insn=0x000000000029F260 string=0x000000000029F264 "@"
 *   insn=0x000000000029F264 string=0x000000000029F268 ""
 *   insn=0x000000000029F268 string=0x000000000029F26C ""
 *   insn=0x000000000029F26C string=0x000000000029F270 "@"
 *   insn=0x000000000029F270 string=0x000000000029F278 ""
 *   insn=0x000000000029F27C string=0x000000000029F280 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::BlendAnimationComponent>::setIdentifier(__int64 result, int a2)
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

