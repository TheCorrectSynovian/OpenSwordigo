/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283E70
 * Mangled: _ZN5Caver18MagicBoltComponent17InitWithComponentEPKS0_
 * Demangled: Caver::MagicBoltComponent::InitWithComponent(Caver::MagicBoltComponent const*)
 *
 * Callers: 1
 *   0x00000000002839E0  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *
 * Callees: 1
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *
 * Referenced strings: 6
 *   insn=0x0000000000283E84 string=0x0000000000283E88 "h"
 *   insn=0x0000000000283E84 string=0x00000000001F9DF0 "0'"
 *   insn=0x0000000000283E8C string=0x0000000000283E90 "h"
 *   insn=0x0000000000283E94 string=0x0000000000283E98 "h"
 *   insn=0x0000000000283E9C string=0x0000000000283EA0 "h""
 *   insn=0x0000000000283EAC string=0x0000000000283EB0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MagicBoltComponent::InitWithComponent(
        Caver::MagicBoltComponent *this,
        const Caver::MagicBoltComponent *a2)
{
  long double result; // q0

  Caver::SpellComponent::InitWithComponent(this, a2);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  result = *(long double *)((char *)a2 + 264);
  *(long double *)((char *)this + 264) = result;
  *((_DWORD *)this + 70) = *((_DWORD *)a2 + 70);
  return result;
}

