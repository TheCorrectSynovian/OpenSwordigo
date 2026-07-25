/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB460
 * Mangled: ._ZN5Caver5Proto13GUIViewLayout27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002E5908  Caver::Proto::GameOptions::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002D6EC8  Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB468 string=0x00000000001FB46C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(
        Caver::Proto::GUIViewLayout *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto13GUIViewLayout27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

