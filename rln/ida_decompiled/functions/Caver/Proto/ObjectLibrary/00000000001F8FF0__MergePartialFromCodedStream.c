/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8FF0
 * Mangled: ._ZN5Caver5Proto13ObjectLibrary27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000301B2C  Caver::Proto::Scene::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002FD4AC  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8FF8 string=0x00000000001F8FFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(
        Caver::Proto::ObjectLibrary *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto13ObjectLibrary27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

