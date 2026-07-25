/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B65CC
 * Mangled: _ZN5Caver24PressureTriggerComponent19ImplementsInterfaceEl
 * Demangled: Caver::PressureTriggerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002B661C  Caver::PressureTriggerComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002B65CC string=0x00000000002B65D0 "A"
 *   insn=0x00000000002B65D0 string=0x00000000002B65D4 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::PressureTriggerComponent::ImplementsInterface(
        Caver::PressureTriggerComponent *this,
        _QWORD (*a2)(Caver::PressureTriggerComponent *__hidden this))
{
  return a2 == Caver::PressureTriggerComponent::Interface;
}

