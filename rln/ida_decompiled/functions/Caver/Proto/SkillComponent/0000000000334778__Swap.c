/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334778
 * Mangled: _ZN5Caver5Proto14SkillComponent4SwapEPS1_
 * Demangled: Caver::Proto::SkillComponent::Swap(Caver::Proto::SkillComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x000000000033477C string=0x0000000000334780 "("
 *   insn=0x0000000000334780 string=0x0000000000334784 "\t"
 *   insn=0x0000000000334784 string=0x0000000000334788 ""
 *   insn=0x0000000000334788 string=0x000000000033478C ")"
 *   insn=0x000000000033478C string=0x0000000000334790 "(@"
 *   insn=0x0000000000334790 string=0x0000000000334794 "\t@"
 *   insn=0x0000000000334794 string=0x0000000000334798 ""
 *   insn=0x0000000000334798 string=0x000000000033479C ")"
 *   insn=0x000000000033479C string=0x00000000003347A0 "("
 *   insn=0x00000000003347A0 string=0x00000000003347A4 "\t"
 *   insn=0x00000000003347A4 string=0x00000000003347A8 ""
 *   insn=0x00000000003347A8 string=0x00000000003347AC ")"
 *   insn=0x00000000003347AC string=0x00000000003347B0 "( @"
 *   insn=0x00000000003347B0 string=0x00000000003347B4 "\t @"
 *   insn=0x00000000003347B4 string=0x00000000003347B8 " "
 *   insn=0x00000000003347B8 string=0x00000000003347BC ") "
 *   insn=0x00000000003347BC string=0x00000000003347C0 "(@"
 *   insn=0x00000000003347C0 string=0x00000000003347C4 "\t@"
 *   insn=0x00000000003347C4 string=0x00000000003347C8 ""
 *   insn=0x00000000003347C8 string=0x00000000003347CC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::Swap(__int64 this, Caver::Proto::SkillComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::SkillComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
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

