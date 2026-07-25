/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF6E8
 * Mangled: _ZN5Caver19SimpleGlowComponent17InitWithComponentEPKS0_
 * Demangled: Caver::SimpleGlowComponent::InitWithComponent(Caver::SimpleGlowComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002032E0  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *
 * Referenced strings: 4
 *   insn=0x00000000002AF6FC string=0x00000000002AF700 "`B"
 *   insn=0x00000000002AF704 string=0x00000000002AF708 "h"
 *   insn=0x00000000002AF70C string=0x00000000002AF710 "`B"
 *   insn=0x00000000002AF714 string=0x00000000002AF718 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::SimpleGlowComponent::InitWithComponent(
        Caver::SimpleGlowComponent *this,
        const Caver::SimpleGlowComponent *a2)
{
  long double result; // q0

  Caver::GlowComponent::InitWithComponent(this, a2);
  *(_OWORD *)((char *)this + 164) = *(_OWORD *)((char *)a2 + 164);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  result = *(long double *)((char *)a2 + 180);
  *(long double *)((char *)this + 180) = result;
  *(_QWORD *)((char *)this + 204) = *(_QWORD *)((char *)a2 + 204);
  return result;
}

