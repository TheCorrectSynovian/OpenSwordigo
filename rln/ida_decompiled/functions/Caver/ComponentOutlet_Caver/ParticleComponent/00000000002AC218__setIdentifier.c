/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC218
 * Mangled: _ZN5Caver15ComponentOutletINS_17ParticleComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::ParticleComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002AC218 string=0x00000000002AC21C "\t\t@"
 *   insn=0x00000000002AC21C string=0x00000000002AC220 "?"
 *   insn=0x00000000002AC220 string=0x00000000002AC224 " "
 *   insn=0x00000000002AC234 string=0x00000000002AC238 "@"
 *   insn=0x00000000002AC238 string=0x00000000002AC23C ""
 *   insn=0x00000000002AC23C string=0x00000000002AC240 ""
 *   insn=0x00000000002AC240 string=0x00000000002AC244 "@"
 *   insn=0x00000000002AC244 string=0x00000000002AC24C ""
 *   insn=0x00000000002AC250 string=0x00000000002AC254 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::ParticleComponent>::setIdentifier(__int64 result, int a2)
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

