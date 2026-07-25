/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002826D4
 * Mangled: _ZN5Caver15ComponentOutletINS_24ParticleEmitterComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::ParticleEmitterComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002826D4 string=0x00000000002826D8 "\t\t@"
 *   insn=0x00000000002826D8 string=0x00000000002826DC "?"
 *   insn=0x00000000002826DC string=0x00000000002826E0 " "
 *   insn=0x00000000002826F0 string=0x00000000002826F4 "@"
 *   insn=0x00000000002826F4 string=0x00000000002826F8 ""
 *   insn=0x00000000002826F8 string=0x00000000002826FC ""
 *   insn=0x00000000002826FC string=0x0000000000282700 "@"
 *   insn=0x0000000000282700 string=0x0000000000282708 ""
 *   insn=0x000000000028270C string=0x0000000000282710 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::ParticleEmitterComponent>::setIdentifier(__int64 result, int a2)
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

