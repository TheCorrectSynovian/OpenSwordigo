/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032351C
 * Mangled: _ZN5Caver5Proto24OrbitControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::OrbitControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5A30  Caver::Proto::OrbitControllerComponent::MergeFrom(Caver::Proto::OrbitControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000032351C string=0x00000000001F5A30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::OrbitControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::OrbitControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::OrbitControllerComponent::MergeFrom();
}

