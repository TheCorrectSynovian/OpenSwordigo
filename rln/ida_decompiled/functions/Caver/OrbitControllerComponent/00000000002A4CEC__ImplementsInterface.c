/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4CEC
 * Mangled: _ZN5Caver24OrbitControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::OrbitControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002A4D3C  Caver::OrbitControllerComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002A4CEC string=0x00000000002A4CF0 ""
 *   insn=0x00000000002A4CF0 string=0x00000000002A4CF4 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::OrbitControllerComponent::ImplementsInterface(
        Caver::OrbitControllerComponent *this,
        _QWORD (*a2)(Caver::OrbitControllerComponent *__hidden this))
{
  return a2 == Caver::OrbitControllerComponent::Interface;
}

