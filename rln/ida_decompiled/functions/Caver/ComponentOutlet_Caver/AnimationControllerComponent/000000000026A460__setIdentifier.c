/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026A460
 * Mangled: _ZN5Caver15ComponentOutletINS_28AnimationControllerComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::AnimationControllerComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000026A460 string=0x000000000026A464 "\t\t@"
 *   insn=0x000000000026A464 string=0x000000000026A468 "?"
 *   insn=0x000000000026A468 string=0x000000000026A46C " "
 *   insn=0x000000000026A47C string=0x000000000026A480 "@"
 *   insn=0x000000000026A480 string=0x000000000026A484 ""
 *   insn=0x000000000026A484 string=0x000000000026A488 ""
 *   insn=0x000000000026A488 string=0x000000000026A48C "@"
 *   insn=0x000000000026A48C string=0x000000000026A494 ""
 *   insn=0x000000000026A498 string=0x000000000026A49C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::AnimationControllerComponent>::setIdentifier(__int64 result, int a2)
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

