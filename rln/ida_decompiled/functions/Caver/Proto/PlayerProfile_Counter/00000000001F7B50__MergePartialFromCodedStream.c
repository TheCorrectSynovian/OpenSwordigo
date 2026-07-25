/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7B50
 * Mangled: ._ZN5Caver5Proto21PlayerProfile_Counter27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002EA650  Caver::Proto::PlayerProfile::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002E8FFC  Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7B58 string=0x00000000001F7B5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(
        Caver::Proto::PlayerProfile_Counter *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto21PlayerProfile_Counter27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(
           this,
           a2);
}

