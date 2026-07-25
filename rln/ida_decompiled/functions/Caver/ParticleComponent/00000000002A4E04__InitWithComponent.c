/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4E04
 * Mangled: _ZN5Caver17ParticleComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ParticleComponent::InitWithComponent(Caver::ParticleComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 5
 *   insn=0x00000000002A4E10 string=0x00000000002A4E14 "h"@"
 *   insn=0x00000000002A4E18 string=0x00000000002A4E1C "a"
 *   insn=0x00000000002A4E24 string=0x00000000002A4E28 " "
 *   insn=0x00000000002A4E28 string=0x00000000002A4E2C "a"
 *   insn=0x00000000002A4E34 string=0x00000000002A4E38 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleComponent::InitWithComponent(
        Caver::ParticleComponent *this,
        const Caver::ParticleComponent *a2)
{
  __int64 result; // x0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  result = sub_56A6A8((char *)this + 112);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  return result;
}

