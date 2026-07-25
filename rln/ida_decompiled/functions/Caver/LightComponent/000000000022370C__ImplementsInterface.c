/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022370C
 * Mangled: _ZN5Caver14LightComponent19ImplementsInterfaceEl
 * Demangled: Caver::LightComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002237C0  Caver::LightComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000022370C string=0x0000000000223710 "MA"
 *   insn=0x0000000000223710 string=0x0000000000223714 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::LightComponent::ImplementsInterface(
        Caver::LightComponent *this,
        _QWORD (*a2)(Caver::LightComponent *__hidden this))
{
  return a2 == Caver::LightComponent::Interface;
}

