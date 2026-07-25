/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329644
 * Mangled: _ZN5Caver5Proto33GenericMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::Swap(Caver::Proto::GenericMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x0000000000329648 string=0x000000000032964C "("
 *   insn=0x000000000032964C string=0x0000000000329650 "\t"
 *   insn=0x0000000000329650 string=0x0000000000329654 ""
 *   insn=0x0000000000329654 string=0x0000000000329658 ")"
 *   insn=0x0000000000329658 string=0x000000000032965C "("
 *   insn=0x000000000032965C string=0x0000000000329660 "\t"
 *   insn=0x0000000000329660 string=0x0000000000329664 ""
 *   insn=0x0000000000329664 string=0x0000000000329668 ")"
 *   insn=0x0000000000329668 string=0x000000000032966C "(@"
 *   insn=0x000000000032966C string=0x0000000000329670 "\t@"
 *   insn=0x0000000000329670 string=0x0000000000329674 ""
 *   insn=0x0000000000329674 string=0x0000000000329678 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::GenericMonsterControllerComponent *__fastcall Caver::Proto::GenericMonsterControllerComponent::Swap(
        Caver::Proto::GenericMonsterControllerComponent *this,
        Caver::Proto::GenericMonsterControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

