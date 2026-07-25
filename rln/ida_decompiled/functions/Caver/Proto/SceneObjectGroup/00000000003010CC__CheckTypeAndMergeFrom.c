/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003010CC
 * Mangled: _ZN5Caver5Proto16SceneObjectGroup21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SceneObjectGroup::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEB80  Caver::Proto::SceneObjectGroup::MergeFrom(Caver::Proto::SceneObjectGroup const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SceneObjectGroup::CheckTypeAndMergeFrom(
        Caver::Proto::SceneObjectGroup *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SceneObjectGroup::MergeFrom();
}

