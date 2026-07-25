/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002505B8
 * Mangled: _ZN5Caver24PressureTriggerComponent6CreateEv
 * Demangled: Caver::PressureTriggerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250578  Caver::TouchableComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F91C0  Caver::PressureTriggerComponent::PressureTriggerComponent(void)
 *   0x00000000002505F8  Caver::DoorControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002505C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002505D0 string=0x00000000001F91C0 "0'"
 *   insn=0x00000000002505E8 string=0x00000000002505EC "1"
 *   insn=0x00000000002505EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::PressureTriggerComponent *__fastcall Caver::PressureTriggerComponent::Create(
        Caver::PressureTriggerComponent *this)
{
  Caver::PressureTriggerComponent *v1; // x19

  v1 = (Caver::PressureTriggerComponent *)operator new(0xE0u);
  Caver::PressureTriggerComponent::PressureTriggerComponent(v1);
  return v1;
}

