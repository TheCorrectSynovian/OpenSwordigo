/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324468
 * Mangled: _ZN5Caver5Proto33WalkingMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::Swap(Caver::Proto::WalkingMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000032446C string=0x0000000000324470 "("
 *   insn=0x0000000000324470 string=0x0000000000324474 "\t"
 *   insn=0x0000000000324474 string=0x0000000000324478 ""
 *   insn=0x0000000000324478 string=0x000000000032447C ")"
 *   insn=0x000000000032447C string=0x0000000000324480 "("
 *   insn=0x0000000000324480 string=0x0000000000324484 "\t"
 *   insn=0x0000000000324484 string=0x0000000000324488 ""
 *   insn=0x0000000000324488 string=0x000000000032448C ")"
 *   insn=0x000000000032448C string=0x0000000000324490 "(@"
 *   insn=0x0000000000324490 string=0x0000000000324494 "\t@"
 *   insn=0x0000000000324494 string=0x0000000000324498 ""
 *   insn=0x0000000000324498 string=0x000000000032449C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::WalkingMonsterControllerComponent *__fastcall Caver::Proto::WalkingMonsterControllerComponent::Swap(
        Caver::Proto::WalkingMonsterControllerComponent *this,
        Caver::Proto::WalkingMonsterControllerComponent *a2)
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

