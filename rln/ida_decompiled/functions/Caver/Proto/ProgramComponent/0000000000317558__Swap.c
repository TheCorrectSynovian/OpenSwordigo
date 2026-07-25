/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317558
 * Mangled: _ZN5Caver5Proto16ProgramComponent4SwapEPS1_
 * Demangled: Caver::Proto::ProgramComponent::Swap(Caver::Proto::ProgramComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x0000000000317558 string=0x000000000031755C " "
 *   insn=0x000000000031755C string=0x0000000000317560 "(0@9\t0@90"
 *   insn=0x0000000000317560 string=0x0000000000317564 "\t0@90"
 *   insn=0x0000000000317564 string=0x0000000000317568 "0"
 *   insn=0x0000000000317568 string=0x000000000031756C ")0"
 *   insn=0x000000000031756C string=0x0000000000317570 "(4@9\t4@94"
 *   insn=0x0000000000317570 string=0x0000000000317574 "\t4@94"
 *   insn=0x0000000000317574 string=0x0000000000317578 "4"
 *   insn=0x0000000000317578 string=0x000000000031757C ")4"
 *   insn=0x000000000031757C string=0x0000000000317580 "("
 *   insn=0x0000000000317580 string=0x0000000000317584 "\t"
 *   insn=0x0000000000317584 string=0x0000000000317588 ""
 *   insn=0x0000000000317588 string=0x000000000031758C ")"
 *   insn=0x000000000031758C string=0x0000000000317590 "("
 *   insn=0x0000000000317590 string=0x0000000000317594 "\t"
 *   insn=0x0000000000317594 string=0x0000000000317598 ""
 *   insn=0x0000000000317598 string=0x000000000031759C ")"
 *   insn=0x000000000031759C string=0x00000000003175A0 "( @"
 *   insn=0x00000000003175A0 string=0x00000000003175A4 "\t @"
 *   insn=0x00000000003175A4 string=0x00000000003175A8 " "
 *   insn=0x00000000003175A8 string=0x00000000003175AC ") "
 *   insn=0x00000000003175AC string=0x00000000003175B0 "(@"
 *   insn=0x00000000003175B0 string=0x00000000003175B4 "\t@"
 *   insn=0x00000000003175B4 string=0x00000000003175B8 ""
 *   insn=0x00000000003175B8 string=0x00000000003175BC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::Swap(__int64 this, Caver::Proto::ProgramComponent *a2)
{
  char v2; // w9
  char v3; // w9
  int v4; // w9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::ProgramComponent *)this )
  {
    v2 = *(_BYTE *)(this + 12);
    *(_BYTE *)(this + 12) = *((_BYTE *)a2 + 12);
    *((_BYTE *)a2 + 12) = v2;
    v3 = *(_BYTE *)(this + 13);
    *(_BYTE *)(this + 13) = *((_BYTE *)a2 + 13);
    *((_BYTE *)a2 + 13) = v3;
    v4 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v4;
    v5 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

