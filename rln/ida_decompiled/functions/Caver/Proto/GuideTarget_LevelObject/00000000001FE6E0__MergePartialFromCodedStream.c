/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE6E0
 * Mangled: ._ZN5Caver5Proto23GuideTarget_LevelObject27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002E45F8  Caver::Proto::GuideTarget::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002E38E0  Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE6E8 string=0x00000000001FE6EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(
        Caver::Proto::GuideTarget_LevelObject *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto23GuideTarget_LevelObject27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(
           this,
           a2);
}

