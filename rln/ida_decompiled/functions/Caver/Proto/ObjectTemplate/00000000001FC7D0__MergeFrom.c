/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC7D0
 * Mangled: ._ZN5Caver5Proto14ObjectTemplate9MergeFromERKS1_
 * Demangled: Caver::Proto::ObjectTemplate::MergeFrom(Caver::Proto::ObjectTemplate const&)
 *
 * Callers: 4
 *   0x00000000002FBC9C  Caver::Proto::ObjectTemplate::ObjectTemplate(Caver::Proto::ObjectTemplate const&)
 *   0x00000000002FC4BC  Caver::Proto::ObjectTemplate::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x00000000002FDE24  google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate> const&)
 *
 * Callees: 1
 *   0x00000000002FBC9C  Caver::Proto::ObjectTemplate::ObjectTemplate(Caver::Proto::ObjectTemplate const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC7D8 string=0x00000000001FC7DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectTemplate::MergeFrom(
        Caver::Proto::ObjectTemplate *this,
        const Caver::Proto::ObjectTemplate *a2)
{
  JUMPOUT(0x2FBCF0);
}

