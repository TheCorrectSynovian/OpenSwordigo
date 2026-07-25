/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECDE4
 * Mangled: _ZN5Caver5Proto10QuestState4SwapEPS1_
 * Demangled: Caver::Proto::QuestState::Swap(Caver::Proto::QuestState*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000002ECDE4 string=0x00000000002ECDE8 " "
 *   insn=0x00000000002ECDE8 string=0x00000000002ECDEC "(@"
 *   insn=0x00000000002ECDEC string=0x00000000002ECDF0 "\t@"
 *   insn=0x00000000002ECDF0 string=0x00000000002ECDF4 ""
 *   insn=0x00000000002ECDF4 string=0x00000000002ECDF8 ")"
 *   insn=0x00000000002ECDF8 string=0x00000000002ECDFC "(`@9\t`@9`"
 *   insn=0x00000000002ECDFC string=0x00000000002ECE00 "\t`@9`"
 *   insn=0x00000000002ECE00 string=0x00000000002ECE04 "`"
 *   insn=0x00000000002ECE04 string=0x00000000002ECE08 ")`"
 *   insn=0x00000000002ECE08 string=0x00000000002ECE0C "("
 *   insn=0x00000000002ECE0C string=0x00000000002ECE10 "\t"
 *   insn=0x00000000002ECE10 string=0x00000000002ECE14 ""
 *   insn=0x00000000002ECE14 string=0x00000000002ECE18 ")"
 *   insn=0x00000000002ECE18 string=0x00000000002ECE1C "(@"
 *   insn=0x00000000002ECE1C string=0x00000000002ECE20 "\t@"
 *   insn=0x00000000002ECE20 string=0x00000000002ECE24 ""
 *   insn=0x00000000002ECE24 string=0x00000000002ECE28 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestState::Swap(__int64 this, Caver::Proto::QuestState *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::QuestState *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LOBYTE(v2) = *(_BYTE *)(this + 24);
    *(_BYTE *)(this + 24) = *((_BYTE *)a2 + 24);
    *((_BYTE *)a2 + 24) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

