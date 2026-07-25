/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032862C
 * Mangled: _ZN5Caver5Proto29BatMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::BatMonsterControllerComponent::Swap(Caver::Proto::BatMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x000000000032862C string=0x0000000000328630 " "
 *   insn=0x0000000000328630 string=0x0000000000328634 "("
 *   insn=0x0000000000328634 string=0x0000000000328638 "\t"
 *   insn=0x0000000000328638 string=0x000000000032863C ""
 *   insn=0x000000000032863C string=0x0000000000328640 ")"
 *   insn=0x0000000000328640 string=0x0000000000328644 "("
 *   insn=0x0000000000328644 string=0x0000000000328648 "\t"
 *   insn=0x0000000000328648 string=0x000000000032864C ""
 *   insn=0x000000000032864C string=0x0000000000328650 ")"
 *   insn=0x0000000000328650 string=0x0000000000328654 "("
 *   insn=0x0000000000328654 string=0x0000000000328658 "\t"
 *   insn=0x0000000000328658 string=0x000000000032865C ""
 *   insn=0x000000000032865C string=0x0000000000328660 ")"
 *   insn=0x0000000000328660 string=0x0000000000328664 "(@"
 *   insn=0x0000000000328664 string=0x0000000000328668 "\t@"
 *   insn=0x0000000000328668 string=0x000000000032866C ""
 *   insn=0x000000000032866C string=0x0000000000328670 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::BatMonsterControllerComponent *__fastcall Caver::Proto::BatMonsterControllerComponent::Swap(
        Caver::Proto::BatMonsterControllerComponent *this,
        Caver::Proto::BatMonsterControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

