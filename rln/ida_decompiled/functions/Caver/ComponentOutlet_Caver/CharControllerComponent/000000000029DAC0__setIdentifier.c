/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029DAC0
 * Mangled: _ZN5Caver15ComponentOutletINS_23CharControllerComponentEE13setIdentifierEi
 * Demangled: Caver::ComponentOutlet<Caver::CharControllerComponent>::setIdentifier(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000029DAC0 string=0x000000000029DAC4 "\t\t@"
 *   insn=0x000000000029DAC4 string=0x000000000029DAC8 "?"
 *   insn=0x000000000029DAC8 string=0x000000000029DACC " "
 *   insn=0x000000000029DADC string=0x000000000029DAE0 "@"
 *   insn=0x000000000029DAE0 string=0x000000000029DAE4 ""
 *   insn=0x000000000029DAE4 string=0x000000000029DAE8 ""
 *   insn=0x000000000029DAE8 string=0x000000000029DAEC "@"
 *   insn=0x000000000029DAEC string=0x000000000029DAF4 ""
 *   insn=0x000000000029DAF8 string=0x000000000029DAFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::CharControllerComponent>::setIdentifier(__int64 result, int a2)
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

