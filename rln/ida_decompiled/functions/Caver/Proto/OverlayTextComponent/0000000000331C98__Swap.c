/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331C98
 * Mangled: _ZN5Caver5Proto20OverlayTextComponent4SwapEPS1_
 * Demangled: Caver::Proto::OverlayTextComponent::Swap(Caver::Proto::OverlayTextComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x0000000000331C98 string=0x0000000000331C9C " "
 *   insn=0x0000000000331C9C string=0x0000000000331CA0 "(@"
 *   insn=0x0000000000331CA0 string=0x0000000000331CA4 "\t@"
 *   insn=0x0000000000331CA4 string=0x0000000000331CA8 ""
 *   insn=0x0000000000331CA8 string=0x0000000000331CAC ")"
 *   insn=0x0000000000331CAC string=0x0000000000331CB0 "("
 *   insn=0x0000000000331CB0 string=0x0000000000331CB4 "\t"
 *   insn=0x0000000000331CB4 string=0x0000000000331CB8 ""
 *   insn=0x0000000000331CB8 string=0x0000000000331CBC ")"
 *   insn=0x0000000000331CBC string=0x0000000000331CC0 "("
 *   insn=0x0000000000331CC0 string=0x0000000000331CC4 "\t"
 *   insn=0x0000000000331CC4 string=0x0000000000331CC8 ""
 *   insn=0x0000000000331CC8 string=0x0000000000331CCC ")"
 *   insn=0x0000000000331CCC string=0x0000000000331CD0 "("
 *   insn=0x0000000000331CD0 string=0x0000000000331CD4 "\t"
 *   insn=0x0000000000331CD4 string=0x0000000000331CD8 ""
 *   insn=0x0000000000331CD8 string=0x0000000000331CDC ")"
 *   insn=0x0000000000331CDC string=0x0000000000331CE0 "(0@"
 *   insn=0x0000000000331CE0 string=0x0000000000331CE4 "\t0@"
 *   insn=0x0000000000331CE4 string=0x0000000000331CE8 "0"
 *   insn=0x0000000000331CE8 string=0x0000000000331CEC ")0"
 *   insn=0x0000000000331CEC string=0x0000000000331CF0 "(@"
 *   insn=0x0000000000331CF0 string=0x0000000000331CF4 "\t@"
 *   insn=0x0000000000331CF4 string=0x0000000000331CF8 ""
 *   insn=0x0000000000331CF8 string=0x0000000000331CFC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OverlayTextComponent::Swap(__int64 this, Caver::Proto::OverlayTextComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::OverlayTextComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    v4 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v4;
    v5 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

