/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AD204
 * Mangled: _ZN5Caver23ParticleObjectComponent19ImplementsInterfaceEl
 * Demangled: Caver::ParticleObjectComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002AD254  Caver::ParticleObjectComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002AD204 string=0x00000000002AD208 ")G"
 *   insn=0x00000000002AD208 string=0x00000000002AD20C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ParticleObjectComponent::ImplementsInterface(
        Caver::ParticleObjectComponent *this,
        _QWORD (*a2)(Caver::ParticleObjectComponent *__hidden this))
{
  return a2 == Caver::ParticleObjectComponent::Interface;
}

