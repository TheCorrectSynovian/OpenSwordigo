/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6668
 * Mangled: _ZN5Caver5Proto10GUIMargins4SwapEPS1_
 * Demangled: Caver::Proto::GUIMargins::Swap(Caver::Proto::GUIMargins*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000002D666C string=0x00000000002D6670 "("
 *   insn=0x00000000002D6670 string=0x00000000002D6674 "\t"
 *   insn=0x00000000002D6674 string=0x00000000002D6678 ""
 *   insn=0x00000000002D6678 string=0x00000000002D667C ")"
 *   insn=0x00000000002D667C string=0x00000000002D6680 "("
 *   insn=0x00000000002D6680 string=0x00000000002D6684 "\t"
 *   insn=0x00000000002D6684 string=0x00000000002D6688 ""
 *   insn=0x00000000002D6688 string=0x00000000002D668C ")"
 *   insn=0x00000000002D668C string=0x00000000002D6690 "("
 *   insn=0x00000000002D6690 string=0x00000000002D6694 "\t"
 *   insn=0x00000000002D6694 string=0x00000000002D6698 ""
 *   insn=0x00000000002D6698 string=0x00000000002D669C ")"
 *   insn=0x00000000002D669C string=0x00000000002D66A0 "("
 *   insn=0x00000000002D66A0 string=0x00000000002D66A4 "\t"
 *   insn=0x00000000002D66A4 string=0x00000000002D66A8 ""
 *   insn=0x00000000002D66A8 string=0x00000000002D66AC ")"
 *   insn=0x00000000002D66AC string=0x00000000002D66B0 "("
 *   insn=0x00000000002D66B0 string=0x00000000002D66B4 "\t"
 *   insn=0x00000000002D66B4 string=0x00000000002D66B8 ""
 *   insn=0x00000000002D66B8 string=0x00000000002D66BC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIMargins::Swap(__int64 this, Caver::Proto::GUIMargins *a2)
{
  int v2; // w9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::GUIMargins *)this )
  {
    v2 = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v2;
    v3 = *(_QWORD *)(this + 8);
    *(_QWORD *)(this + 8) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v3;
  }
  return this;
}

