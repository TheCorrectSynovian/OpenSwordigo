/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F33F0
 * Mangled: ._ZN5Caver5Proto11SceneObject27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 2
 *   0x00000000002FC144  Caver::Proto::ObjectTemplate::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000301B2C  Caver::Proto::Scene::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002FE598  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F33F8 string=0x00000000001F33FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SceneObject::MergePartialFromCodedStream(
        Caver::Proto::SceneObject *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto11SceneObject27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

