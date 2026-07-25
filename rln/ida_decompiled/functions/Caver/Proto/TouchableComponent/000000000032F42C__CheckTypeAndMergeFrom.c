/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F42C
 * Mangled: _ZN5Caver5Proto18TouchableComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::TouchableComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4BD0  Caver::Proto::TouchableComponent::MergeFrom(Caver::Proto::TouchableComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000032F42C string=0x00000000001F4BD0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::TouchableComponent::CheckTypeAndMergeFrom(
        Caver::Proto::TouchableComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::TouchableComponent::MergeFrom();
}

