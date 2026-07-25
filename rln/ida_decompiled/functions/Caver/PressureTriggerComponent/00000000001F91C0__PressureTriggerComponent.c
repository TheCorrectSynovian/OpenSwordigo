/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F91C0
 * Mangled: ._ZN5Caver24PressureTriggerComponentC2Ev
 * Demangled: Caver::PressureTriggerComponent::PressureTriggerComponent(void)
 *
 * Callers: 1
 *   0x00000000002505B8  Caver::PressureTriggerComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002B515C  Caver::PressureTriggerComponent::PressureTriggerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F91C8 string=0x00000000001F91CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PressureTriggerComponent::PressureTriggerComponent(Caver::PressureTriggerComponent *this)
{
  return _ZN5Caver24PressureTriggerComponentC2Ev(this);
}

