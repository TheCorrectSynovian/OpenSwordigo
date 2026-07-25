/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031CABC
 * Mangled: _ZN5Caver5Proto19PropertiesComponent4SwapEPS1_
 * Demangled: Caver::Proto::PropertiesComponent::Swap(Caver::Proto::PropertiesComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000031CAC0 string=0x000000000031CAC4 "(@"
 *   insn=0x000000000031CAC4 string=0x000000000031CAC8 "\t@"
 *   insn=0x000000000031CAC8 string=0x000000000031CACC ""
 *   insn=0x000000000031CACC string=0x000000000031CAD0 ")"
 *   insn=0x000000000031CAD0 string=0x000000000031CAD4 "("
 *   insn=0x000000000031CAD4 string=0x000000000031CAD8 "\t"
 *   insn=0x000000000031CAD8 string=0x000000000031CADC ""
 *   insn=0x000000000031CADC string=0x000000000031CAE0 ")"
 *   insn=0x000000000031CAE0 string=0x000000000031CAE4 "(@"
 *   insn=0x000000000031CAE4 string=0x000000000031CAE8 "\t@"
 *   insn=0x000000000031CAE8 string=0x000000000031CAEC ""
 *   insn=0x000000000031CAEC string=0x000000000031CAF0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PropertiesComponent::Swap(__int64 this, Caver::Proto::PropertiesComponent *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::PropertiesComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

