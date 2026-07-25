/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8A90
 * Mangled: ._ZN5Caver5Proto14ObjectTemplate27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ObjectTemplate::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002FD4AC  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002FC144  Caver::Proto::ObjectTemplate::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8A98 string=0x00000000001F8A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ObjectTemplate::MergePartialFromCodedStream(
        Caver::Proto::ObjectTemplate *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto14ObjectTemplate27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

