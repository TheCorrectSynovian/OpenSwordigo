/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC860
 * Mangled: _ZN5Caver22ParticleFieldComponent19ImplementsInterfaceEl
 * Demangled: Caver::ParticleFieldComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002AC8B0  Caver::ParticleFieldComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002AC860 string=0x00000000002AC864 ""
 *   insn=0x00000000002AC864 string=0x00000000002AC868 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ParticleFieldComponent::ImplementsInterface(
        Caver::ParticleFieldComponent *this,
        _QWORD (*a2)(Caver::ParticleFieldComponent *__hidden this))
{
  return a2 == Caver::ParticleFieldComponent::Interface;
}

