/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311DA0
 * Mangled: _ZN5Caver5Proto28AnimationControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::AnimationControllerComponent::Swap(Caver::Proto::AnimationControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000311DA4 string=0x0000000000311DA8 "("
 *   insn=0x0000000000311DA8 string=0x0000000000311DAC "\t"
 *   insn=0x0000000000311DAC string=0x0000000000311DB0 ""
 *   insn=0x0000000000311DB0 string=0x0000000000311DB4 ")"
 *   insn=0x0000000000311DB4 string=0x0000000000311DB8 "("
 *   insn=0x0000000000311DB8 string=0x0000000000311DBC "\t"
 *   insn=0x0000000000311DBC string=0x0000000000311DC0 ""
 *   insn=0x0000000000311DC0 string=0x0000000000311DC4 ")"
 *   insn=0x0000000000311DC4 string=0x0000000000311DC8 "(P@9\tP@9P"
 *   insn=0x0000000000311DC8 string=0x0000000000311DCC "\tP@9P"
 *   insn=0x0000000000311DCC string=0x0000000000311DD0 "P"
 *   insn=0x0000000000311DD0 string=0x0000000000311DD4 ")P"
 *   insn=0x0000000000311DD4 string=0x0000000000311DD8 "("
 *   insn=0x0000000000311DD8 string=0x0000000000311DDC "\t"
 *   insn=0x0000000000311DDC string=0x0000000000311DE0 ""
 *   insn=0x0000000000311DE0 string=0x0000000000311DE4 ")"
 *   insn=0x0000000000311DE4 string=0x0000000000311DE8 "(@"
 *   insn=0x0000000000311DE8 string=0x0000000000311DEC "\t@"
 *   insn=0x0000000000311DEC string=0x0000000000311DF0 ""
 *   insn=0x0000000000311DF0 string=0x0000000000311DF4 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AnimationControllerComponent::Swap(
        __int64 this,
        Caver::Proto::AnimationControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9

  if ( a2 != (Caver::Proto::AnimationControllerComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 20);
    *(_BYTE *)(this + 20) = *((_BYTE *)a2 + 20);
    *((_BYTE *)a2 + 20) = v3;
    v4 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v4;
    v5 = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

