/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025A6C0
 * Mangled: _ZN5Caver15ComponentOutletINS_20SoundEffectComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::SoundEffectComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000025A6C0 string=0x000000000025A6C4 "\t\t@"
 *   insn=0x000000000025A6C4 string=0x000000000025A6C8 "?"
 *   insn=0x000000000025A6C8 string=0x000000000025A6CC " "
 *   insn=0x000000000025A6DC string=0x000000000025A6E0 "@"
 *   insn=0x000000000025A6E0 string=0x000000000025A6E4 ""
 *   insn=0x000000000025A6E4 string=0x000000000025A6E8 ""
 *   insn=0x000000000025A6E8 string=0x000000000025A6EC "@"
 *   insn=0x000000000025A6EC string=0x000000000025A6F4 ""
 *   insn=0x000000000025A6F8 string=0x000000000025A6FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::SoundEffectComponent>::setIdentifier(__int64 result, int a2)
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

