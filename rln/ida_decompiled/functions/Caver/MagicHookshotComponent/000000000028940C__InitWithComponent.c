/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028940C
 * Mangled: _ZN5Caver22MagicHookshotComponent17InitWithComponentEPKS0_
 * Demangled: Caver::MagicHookshotComponent::InitWithComponent(Caver::MagicHookshotComponent const*)
 *
 * Callers: 1
 *   0x0000000000288D9C  Caver::MagicExplosionComponent::className(void)
 *
 * Callees: 1
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *
 * Referenced strings: 7
 *   insn=0x000000000028941C string=0x0000000000289420 "t"
 *   insn=0x0000000000289420 string=0x0000000000289424 "h"
 *   insn=0x0000000000289420 string=0x00000000001F9DF0 "0'"
 *   insn=0x0000000000289428 string=0x000000000028942C "h"
 *   insn=0x0000000000289430 string=0x0000000000289434 "h"
 *   insn=0x0000000000289438 string=0x000000000028943C "h"
 *   insn=0x0000000000289440 string=0x0000000000289444 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MagicHookshotComponent::InitWithComponent(
        Caver::MagicHookshotComponent *this,
        const Caver::MagicHookshotComponent *a2)
{
  long double result; // q0

  Caver::SpellComponent::InitWithComponent(this, a2);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  result = *(long double *)((char *)a2 + 296);
  *(long double *)((char *)this + 296) = result;
  return result;
}

