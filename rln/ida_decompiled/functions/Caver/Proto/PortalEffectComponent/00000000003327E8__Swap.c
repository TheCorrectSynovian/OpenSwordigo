/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003327E8
 * Mangled: _ZN5Caver5Proto21PortalEffectComponent4SwapEPS1_
 * Demangled: Caver::Proto::PortalEffectComponent::Swap(Caver::Proto::PortalEffectComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000003327E8 string=0x00000000003327EC " "
 *   insn=0x00000000003327EC string=0x00000000003327F0 "("
 *   insn=0x00000000003327F0 string=0x00000000003327F4 "\t"
 *   insn=0x00000000003327F4 string=0x00000000003327F8 ""
 *   insn=0x00000000003327F8 string=0x00000000003327FC ")"
 *   insn=0x00000000003327FC string=0x0000000000332800 "("
 *   insn=0x0000000000332800 string=0x0000000000332804 "\t"
 *   insn=0x0000000000332804 string=0x0000000000332808 ""
 *   insn=0x0000000000332808 string=0x000000000033280C ")"
 *   insn=0x000000000033280C string=0x0000000000332810 "("
 *   insn=0x0000000000332810 string=0x0000000000332814 "\t"
 *   insn=0x0000000000332814 string=0x0000000000332818 ""
 *   insn=0x0000000000332818 string=0x000000000033281C ")"
 *   insn=0x000000000033281C string=0x0000000000332820 "("
 *   insn=0x0000000000332820 string=0x0000000000332824 "\t"
 *   insn=0x0000000000332824 string=0x0000000000332828 ""
 *   insn=0x0000000000332828 string=0x000000000033282C ")"
 *   insn=0x000000000033282C string=0x0000000000332830 "((@"
 *   insn=0x0000000000332830 string=0x0000000000332834 "\t(@"
 *   insn=0x0000000000332834 string=0x0000000000332838 "("
 *   insn=0x0000000000332838 string=0x000000000033283C ")("
 *   insn=0x000000000033283C string=0x0000000000332840 "(@"
 *   insn=0x0000000000332840 string=0x0000000000332844 "\t@"
 *   insn=0x0000000000332844 string=0x0000000000332848 ""
 *   insn=0x0000000000332848 string=0x000000000033284C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalEffectComponent::Swap(__int64 this, Caver::Proto::PortalEffectComponent *a2)
{
  int v2; // w9
  int v3; // w9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::PortalEffectComponent *)this )
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
    v5 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

