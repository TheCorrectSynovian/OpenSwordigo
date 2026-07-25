/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201C50
 * Mangled: ._ZN5Caver5Proto31ItemDropComponent_ItemDropEntry27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000330774  Caver::Proto::ItemDropComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x000000000032FA94  Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201C58 string=0x0000000000201C5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto31ItemDropComponent_ItemDropEntry27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(
           this,
           a2);
}

