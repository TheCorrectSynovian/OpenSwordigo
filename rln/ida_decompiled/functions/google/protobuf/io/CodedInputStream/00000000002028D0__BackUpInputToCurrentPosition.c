/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002028D0
 * Mangled: ._ZN6google8protobuf2io16CodedInputStream28BackUpInputToCurrentPositionEv
 * Demangled: google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(void)
 *
 * Callers: 2
 *   0x00000000004DE67C  google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *
 * Callees: 1
 *   0x00000000004E3568  google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002028D8 string=0x00000000002028DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(
        google::protobuf::io::CodedInputStream *this)
{
  return _ZN6google8protobuf2io16CodedInputStream28BackUpInputToCurrentPositionEv(this);
}

