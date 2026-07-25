/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003116F0
 * Mangled: _ZN5Caver5Proto20SoundEffectComponent4SwapEPS1_
 * Demangled: Caver::Proto::SoundEffectComponent::Swap(Caver::Proto::SoundEffectComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000003116F0 string=0x00000000003116F4 " "
 *   insn=0x00000000003116F4 string=0x00000000003116F8 "(@"
 *   insn=0x00000000003116F8 string=0x00000000003116FC "\t@"
 *   insn=0x00000000003116FC string=0x0000000000311700 ""
 *   insn=0x0000000000311700 string=0x0000000000311704 ")"
 *   insn=0x0000000000311704 string=0x0000000000311708 "("
 *   insn=0x0000000000311708 string=0x000000000031170C "\t"
 *   insn=0x000000000031170C string=0x0000000000311710 ""
 *   insn=0x0000000000311710 string=0x0000000000311714 ")"
 *   insn=0x0000000000311714 string=0x0000000000311718 "("
 *   insn=0x0000000000311718 string=0x000000000031171C "\t"
 *   insn=0x000000000031171C string=0x0000000000311720 ""
 *   insn=0x0000000000311720 string=0x0000000000311724 ")"
 *   insn=0x0000000000311724 string=0x0000000000311728 "(@"
 *   insn=0x0000000000311728 string=0x000000000031172C "\t@"
 *   insn=0x000000000031172C string=0x0000000000311730 ""
 *   insn=0x0000000000311730 string=0x0000000000311734 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffectComponent::Swap(__int64 this, Caver::Proto::SoundEffectComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::SoundEffectComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    v3 = *(_QWORD *)(this + 28);
    *(_QWORD *)(this + 28) = *(_QWORD *)((char *)a2 + 28);
    *(_QWORD *)((char *)a2 + 28) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
  }
  return this;
}

