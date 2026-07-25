/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282584
 * Mangled: _ZN5Caver19FireBreathComponent17InitWithComponentEPKS0_
 * Demangled: Caver::FireBreathComponent::InitWithComponent(Caver::FireBreathComponent const*)
 *
 * Callers: 1
 *   0x0000000000282208  Caver::FireBreathComponent::FireBreathComponent(void)
 *
 * Callees: 1
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *
 * Referenced strings: 4
 *   insn=0x0000000000282598 string=0x000000000028259C "h"
 *   insn=0x0000000000282598 string=0x00000000001F9DF0 "0'"
 *   insn=0x00000000002825A0 string=0x00000000002825A4 "h"
 *   insn=0x00000000002825A8 string=0x00000000002825AC "`>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::FireBreathComponent::InitWithComponent(
        Caver::FireBreathComponent *this,
        const Caver::FireBreathComponent *a2)
{
  long double result; // q0

  Caver::SpellComponent::InitWithComponent(this, a2);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  result = *((long double *)a2 + 15);
  *((long double *)this + 15) = result;
  return result;
}

