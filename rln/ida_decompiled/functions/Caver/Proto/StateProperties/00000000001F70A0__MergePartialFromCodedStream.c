/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F70A0
 * Mangled: ._ZN5Caver5Proto15StateProperties27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 2
 *   0x00000000002EF658  Caver::Proto::GameState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002F1EE8  Caver::Proto::LevelState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002EC264  Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F70A8 string=0x00000000001F70AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::StateProperties::MergePartialFromCodedStream(
        Caver::Proto::StateProperties *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto15StateProperties27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(
           this,
           a2);
}

