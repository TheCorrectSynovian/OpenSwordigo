/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E9328
 * Mangled: _ZN5Caver5Proto21PlayerProfile_Counter4SwapEPS1_
 * Demangled: Caver::Proto::PlayerProfile_Counter::Swap(Caver::Proto::PlayerProfile_Counter*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000002E9328 string=0x00000000002E932C " "
 *   insn=0x00000000002E932C string=0x00000000002E9330 "(@"
 *   insn=0x00000000002E9330 string=0x00000000002E9334 "\t@"
 *   insn=0x00000000002E9334 string=0x00000000002E9338 ""
 *   insn=0x00000000002E9338 string=0x00000000002E933C ")"
 *   insn=0x00000000002E933C string=0x00000000002E9340 "("
 *   insn=0x00000000002E9340 string=0x00000000002E9344 "\t"
 *   insn=0x00000000002E9344 string=0x00000000002E9348 ""
 *   insn=0x00000000002E9348 string=0x00000000002E934C ")"
 *   insn=0x00000000002E934C string=0x00000000002E9350 "("
 *   insn=0x00000000002E9350 string=0x00000000002E9354 "\t"
 *   insn=0x00000000002E9354 string=0x00000000002E9358 ""
 *   insn=0x00000000002E9358 string=0x00000000002E935C ")"
 *   insn=0x00000000002E935C string=0x00000000002E9360 "(@"
 *   insn=0x00000000002E9360 string=0x00000000002E9364 "\t@"
 *   insn=0x00000000002E9364 string=0x00000000002E9368 ""
 *   insn=0x00000000002E9368 string=0x00000000002E936C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile_Counter::Swap(__int64 this, Caver::Proto::PlayerProfile_Counter *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::PlayerProfile_Counter *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

