/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A5C50
 * Mangled: _ZN5Caver17ParticleComponent19ImplementsInterfaceEl
 * Demangled: Caver::ParticleComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002A5C98  Caver::ParticleComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002A5C50 string=0x00000000002A5C54 ""
 *   insn=0x00000000002A5C54 string=0x00000000002A5C58 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ParticleComponent::ImplementsInterface(
        Caver::ParticleComponent *this,
        _QWORD (*a2)(Caver::ParticleComponent *__hidden this))
{
  return a2 == Caver::ParticleComponent::Interface;
}

