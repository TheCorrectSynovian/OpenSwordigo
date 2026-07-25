/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026FA44
 * Mangled: _ZN5Caver15HealthComponent17InitWithComponentEPKS0_
 * Demangled: Caver::HealthComponent::InitWithComponent(Caver::HealthComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 5
 *   insn=0x000000000026FA50 string=0x000000000026FA54 "h"@"
 *   insn=0x000000000026FA58 string=0x000000000026FA5C "a"
 *   insn=0x000000000026FA68 string=0x000000000026FA6C "`"
 *   insn=0x000000000026FA70 string=0x000000000026FA74 "h"
 *   insn=0x000000000026FA78 string=0x000000000026FA7C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::HealthComponent::InitWithComponent(
        Caver::HealthComponent *this,
        const Caver::HealthComponent *a2)
{
  long double result; // q0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  result = *(long double *)((char *)a2 + 124);
  *(long double *)((char *)this + 124) = result;
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  return result;
}

