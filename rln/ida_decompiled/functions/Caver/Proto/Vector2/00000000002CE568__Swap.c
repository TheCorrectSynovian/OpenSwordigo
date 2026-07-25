/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE568
 * Mangled: _ZN5Caver5Proto7Vector24SwapEPS1_
 * Demangled: Caver::Proto::Vector2::Swap(Caver::Proto::Vector2*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000002CE56C string=0x00000000002CE570 "("
 *   insn=0x00000000002CE570 string=0x00000000002CE574 "\t"
 *   insn=0x00000000002CE574 string=0x00000000002CE578 ""
 *   insn=0x00000000002CE578 string=0x00000000002CE57C ")"
 *   insn=0x00000000002CE57C string=0x00000000002CE580 "("
 *   insn=0x00000000002CE580 string=0x00000000002CE584 "\t"
 *   insn=0x00000000002CE584 string=0x00000000002CE588 ""
 *   insn=0x00000000002CE588 string=0x00000000002CE58C ")"
 *   insn=0x00000000002CE58C string=0x00000000002CE590 "("
 *   insn=0x00000000002CE590 string=0x00000000002CE594 "\t"
 *   insn=0x00000000002CE594 string=0x00000000002CE598 ""
 *   insn=0x00000000002CE598 string=0x00000000002CE59C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector2::Swap(__int64 this, Caver::Proto::Vector2 *a2)
{
  int v2; // w9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::Vector2 *)this )
  {
    v2 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v2;
    v3 = *(_QWORD *)(this + 8);
    *(_QWORD *)(this + 8) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
  }
  return this;
}

