/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003000B0
 * Mangled: _ZN5Caver5Proto11SceneObject21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SceneObject::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 1
 *   0x00000000002FEE60  Caver::Proto::SceneObject::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001FE420  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SceneObject::CheckTypeAndMergeFrom(
        Caver::Proto::SceneObject *this,
        const google::protobuf::MessageLite *a2)
{
  return Caver::Proto::SceneObject::MergeFrom(this, a2);
}

