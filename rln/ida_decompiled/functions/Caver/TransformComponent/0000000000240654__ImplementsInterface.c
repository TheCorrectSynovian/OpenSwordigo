/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000240654
 * Mangled: _ZN5Caver18TransformComponent19ImplementsInterfaceEl
 * Demangled: Caver::TransformComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000240654 string=0x0000000000240658 ""
 *   insn=0x0000000000240658 string=0x000000000024065C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::TransformComponent::ImplementsInterface(
        Caver::TransformComponent *this,
        _QWORD (*a2)(Caver::TransformComponent *__hidden this))
{
  return a2 == Caver::TransformComponent::Interface;
}

