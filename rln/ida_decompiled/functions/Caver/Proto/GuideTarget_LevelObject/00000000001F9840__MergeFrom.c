/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9840
 * Mangled: ._ZN5Caver5Proto23GuideTarget_LevelObject9MergeFromERKS1_
 * Demangled: Caver::Proto::GuideTarget_LevelObject::MergeFrom(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Callers: 4
 *   0x00000000002E3428  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *   0x00000000002E3B9C  Caver::Proto::GuideTarget_LevelObject::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002E3BA0  Caver::Proto::GuideTarget_LevelObject::CopyFrom(Caver::Proto::GuideTarget_LevelObject const&)
 *   0x00000000002E4F00  google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject> const&)
 *
 * Callees: 1
 *   0x00000000002E3428  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9848 string=0x00000000001F984C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GuideTarget_LevelObject::MergeFrom(
        Caver::Proto::GuideTarget_LevelObject *this,
        const Caver::Proto::GuideTarget_LevelObject *a2)
{
  JUMPOUT(0x2E3494);
}

