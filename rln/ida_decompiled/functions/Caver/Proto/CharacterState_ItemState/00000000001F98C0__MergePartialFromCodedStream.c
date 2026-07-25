/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F98C0
 * Mangled: ._ZN5Caver5Proto24CharacterState_ItemState27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::CharacterState_ItemState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002F37F8  Caver::Proto::CharacterState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002F2BE4  Caver::Proto::CharacterState_ItemState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F98C8 string=0x00000000001F98CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::CharacterState_ItemState::MergePartialFromCodedStream(
        Caver::Proto::CharacterState_ItemState *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto24CharacterState_ItemState27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(
           this,
           a2);
}

