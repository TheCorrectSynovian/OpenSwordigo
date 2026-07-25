/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316224
 * Mangled: _ZN5Caver5Proto24PressureTriggerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::PressureTriggerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF2C0  Caver::Proto::PressureTriggerComponent::MergeFrom(Caver::Proto::PressureTriggerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PressureTriggerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::PressureTriggerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::PressureTriggerComponent::MergeFrom();
}

