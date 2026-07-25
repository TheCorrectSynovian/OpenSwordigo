/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326C10
 * Mangled: _ZN5Caver5Proto33LeapingMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::Swap(Caver::Proto::LeapingMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000326C10 string=0x0000000000326C14 " "
 *   insn=0x0000000000326C14 string=0x0000000000326C18 "("
 *   insn=0x0000000000326C18 string=0x0000000000326C1C "\t"
 *   insn=0x0000000000326C1C string=0x0000000000326C20 ""
 *   insn=0x0000000000326C20 string=0x0000000000326C24 ")"
 *   insn=0x0000000000326C24 string=0x0000000000326C28 "("
 *   insn=0x0000000000326C28 string=0x0000000000326C2C "\t"
 *   insn=0x0000000000326C2C string=0x0000000000326C30 ""
 *   insn=0x0000000000326C30 string=0x0000000000326C34 ")"
 *   insn=0x0000000000326C34 string=0x0000000000326C38 "("
 *   insn=0x0000000000326C38 string=0x0000000000326C3C "\t"
 *   insn=0x0000000000326C3C string=0x0000000000326C40 ""
 *   insn=0x0000000000326C40 string=0x0000000000326C44 ")"
 *   insn=0x0000000000326C44 string=0x0000000000326C48 "(@"
 *   insn=0x0000000000326C48 string=0x0000000000326C4C "\t@"
 *   insn=0x0000000000326C4C string=0x0000000000326C50 ""
 *   insn=0x0000000000326C50 string=0x0000000000326C54 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::LeapingMonsterControllerComponent *__fastcall Caver::Proto::LeapingMonsterControllerComponent::Swap(
        Caver::Proto::LeapingMonsterControllerComponent *this,
        Caver::Proto::LeapingMonsterControllerComponent *a2)
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

