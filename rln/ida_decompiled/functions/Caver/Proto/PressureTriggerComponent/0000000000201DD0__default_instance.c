/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201DD0
 * Mangled: ._ZN5Caver5Proto24PressureTriggerComponent16default_instanceEv
 * Demangled: Caver::Proto::PressureTriggerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002B54AC  Caver::PressureTriggerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9FE8  Caver::Proto::PressureTriggerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201DD8 string=0x0000000000201DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::PressureTriggerComponent::default_instance(
        Caver::Proto::PressureTriggerComponent *this)
{
  return _ZN5Caver5Proto24PressureTriggerComponent16default_instanceEv(this);
}

