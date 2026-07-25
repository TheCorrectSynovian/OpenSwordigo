/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3B9C
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObject21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GuideTarget_LevelObject::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9840  Caver::Proto::GuideTarget_LevelObject::MergeFrom(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002E3B9C string=0x00000000001F9840 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GuideTarget_LevelObject::CheckTypeAndMergeFrom(
        Caver::Proto::GuideTarget_LevelObject *this,
        const Caver::Proto::GuideTarget_LevelObject *a2)
{
  Caver::Proto::GuideTarget_LevelObject::MergeFrom(this, a2);
}

