/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002809C8
 * Mangled: _ZN5Caver24PhysicsPlatformComponent17InitWithComponentEPKS0_
 * Demangled: Caver::PhysicsPlatformComponent::InitWithComponent(Caver::PhysicsPlatformComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x00000000002809D4 string=0x00000000002809D8 "h"@"
 *   insn=0x00000000002809DC string=0x00000000002809E0 "a"
 *   insn=0x00000000002809E8 string=0x00000000002809EC "/"
 *   insn=0x00000000002809EC string=0x00000000002809F0 "`B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::PhysicsPlatformComponent::InitWithComponent(
        Caver::PhysicsPlatformComponent *this,
        const Caver::PhysicsPlatformComponent *a2)
{
  long double result; // q0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  result = *(long double *)((char *)a2 + 148);
  *(long double *)((char *)this + 148) = result;
  return result;
}

