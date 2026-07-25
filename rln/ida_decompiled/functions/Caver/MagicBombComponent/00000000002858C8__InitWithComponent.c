/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002858C8
 * Mangled: _ZN5Caver18MagicBombComponent17InitWithComponentEPKS0_
 * Demangled: Caver::MagicBombComponent::InitWithComponent(Caver::MagicBombComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *
 * Referenced strings: 3
 *   insn=0x00000000002858D8 string=0x00000000002858DC "E"
 *   insn=0x00000000002858DC string=0x00000000002858E0 "`6"
 *   insn=0x00000000002858DC string=0x00000000001F9DF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MagicBombComponent::InitWithComponent(
        Caver::MagicBombComponent *this,
        const Caver::MagicBombComponent *a2)
{
  long double result; // q0

  Caver::SpellComponent::InitWithComponent(this, a2);
  result = *((long double *)a2 + 13);
  *((long double *)this + 13) = result;
  return result;
}

