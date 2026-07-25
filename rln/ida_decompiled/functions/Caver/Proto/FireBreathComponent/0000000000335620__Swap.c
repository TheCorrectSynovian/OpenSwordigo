/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335620
 * Mangled: _ZN5Caver5Proto19FireBreathComponent4SwapEPS1_
 * Demangled: Caver::Proto::FireBreathComponent::Swap(Caver::Proto::FireBreathComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000335624 string=0x0000000000335628 "("
 *   insn=0x0000000000335628 string=0x000000000033562C "\t"
 *   insn=0x000000000033562C string=0x0000000000335630 ""
 *   insn=0x0000000000335630 string=0x0000000000335634 ")"
 *   insn=0x0000000000335634 string=0x0000000000335638 "("
 *   insn=0x0000000000335638 string=0x000000000033563C "\t"
 *   insn=0x000000000033563C string=0x0000000000335640 ""
 *   insn=0x0000000000335640 string=0x0000000000335644 ")"
 *   insn=0x0000000000335644 string=0x0000000000335648 "("
 *   insn=0x0000000000335648 string=0x000000000033564C "\t"
 *   insn=0x000000000033564C string=0x0000000000335650 ""
 *   insn=0x0000000000335650 string=0x0000000000335654 ")"
 *   insn=0x0000000000335654 string=0x0000000000335658 "( @"
 *   insn=0x0000000000335658 string=0x000000000033565C "\t @"
 *   insn=0x000000000033565C string=0x0000000000335660 " "
 *   insn=0x0000000000335660 string=0x0000000000335664 ") "
 *   insn=0x0000000000335664 string=0x0000000000335668 "(@"
 *   insn=0x0000000000335668 string=0x000000000033566C "\t@"
 *   insn=0x000000000033566C string=0x0000000000335670 ""
 *   insn=0x0000000000335670 string=0x0000000000335674 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireBreathComponent::Swap(__int64 this, Caver::Proto::FireBreathComponent *a2)
{
  int v2; // w9
  int v3; // w9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::FireBreathComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

