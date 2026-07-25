/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322D10
 * Mangled: _ZN5Caver5Proto23ParticleObjectComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ParticleObjectComponent::CopyFrom(Caver::Proto::ParticleObjectComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE660  Caver::Proto::ParticleObjectComponent::MergeFrom(Caver::Proto::ParticleObjectComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000322D24 string=0x0000000000322D28 "@"
 *   insn=0x0000000000322D30 string=0x0000000000322D34 ""
 *   insn=0x0000000000322D48 string=0x0000000000322D4C "En"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleObjectComponent::CopyFrom(
        Caver::Proto::ParticleObjectComponent *this,
        const Caver::Proto::ParticleObjectComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ParticleObjectComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ParticleObjectComponent::MergeFrom();
  }
}

