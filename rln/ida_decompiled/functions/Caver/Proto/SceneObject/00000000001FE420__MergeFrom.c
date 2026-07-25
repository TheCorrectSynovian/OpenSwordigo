/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE420
 * Mangled: ._ZN5Caver5Proto11SceneObject9MergeFromERKS1_
 * Demangled: Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *
 * Callers: 5
 *   0x00000000002FBC9C  Caver::Proto::ObjectTemplate::ObjectTemplate(Caver::Proto::ObjectTemplate const&)
 *   0x00000000002FE148  Caver::Proto::SceneObject::SceneObject(Caver::Proto::SceneObject const&)
 *   0x00000000003000B0  Caver::Proto::SceneObject::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003000B4  Caver::Proto::SceneObject::CopyFrom(Caver::Proto::SceneObject const&)
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *
 * Callees: 1
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE428 string=0x00000000001FE42C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SceneObject::MergeFrom(
        Caver::Proto::SceneObject *this,
        const Caver::Proto::SceneObject *a2)
{
  return _ZN5Caver5Proto11SceneObject9MergeFromERKS1_(this, a2);
}

