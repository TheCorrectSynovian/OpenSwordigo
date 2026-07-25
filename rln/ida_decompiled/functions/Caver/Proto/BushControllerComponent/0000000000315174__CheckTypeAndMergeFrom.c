/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315174
 * Mangled: _ZN5Caver5Proto23BushControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::BushControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4890  Caver::Proto::BushControllerComponent::MergeFrom(Caver::Proto::BushControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000315174 string=0x00000000001F4890 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::BushControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::BushControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::BushControllerComponent::MergeFrom();
}

