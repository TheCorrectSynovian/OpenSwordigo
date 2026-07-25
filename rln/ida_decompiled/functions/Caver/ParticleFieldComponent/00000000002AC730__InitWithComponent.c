/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC730
 * Mangled: _ZN5Caver22ParticleFieldComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ParticleFieldComponent::InitWithComponent(Caver::ParticleFieldComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x00000000002AC730 string=0x00000000002AC734 ""
 *   insn=0x00000000002AC734 string=0x00000000002AC738 "!"
 *   insn=0x00000000002AC738 string=0x00000000002AC73C "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleFieldComponent::InitWithComponent(
        Caver::ParticleFieldComponent *this,
        const Caver::ParticleFieldComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

