/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003373E8
 * Mangled: _ZN5Caver5Proto14SpellComponent4SwapEPS1_
 * Demangled: Caver::Proto::SpellComponent::Swap(Caver::Proto::SpellComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000003373EC string=0x00000000003373F0 "(@"
 *   insn=0x00000000003373F0 string=0x00000000003373F4 "\t@"
 *   insn=0x00000000003373F4 string=0x00000000003373F8 ""
 *   insn=0x00000000003373F8 string=0x00000000003373FC ")"
 *   insn=0x00000000003373FC string=0x0000000000337400 "("
 *   insn=0x0000000000337400 string=0x0000000000337404 "\t"
 *   insn=0x0000000000337404 string=0x0000000000337408 ""
 *   insn=0x0000000000337408 string=0x000000000033740C ")"
 *   insn=0x000000000033740C string=0x0000000000337410 "(@"
 *   insn=0x0000000000337410 string=0x0000000000337414 "\t@"
 *   insn=0x0000000000337414 string=0x0000000000337418 ""
 *   insn=0x0000000000337418 string=0x000000000033741C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpellComponent::Swap(__int64 this, Caver::Proto::SpellComponent *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::SpellComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

