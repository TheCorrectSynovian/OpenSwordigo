/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBE90
 * Mangled: ._ZNK6google8protobuf8internal12ExtensionSet9Extension29SerializeFieldWithCachedSizesEiPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 3
 *   0x00000000004DEAC8  google::protobuf::internal::ExtensionSet::ParseMessageSet(google::protobuf::io::CodedInputStream *,google::protobuf::MessageLite const*)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DF7D0  google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBE98 string=0x00000000001FBE9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(
        google::protobuf::internal::ExtensionSet::Extension *this,
        google::protobuf::internal::WireFormatLite *a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  return _ZNK6google8protobuf8internal12ExtensionSet9Extension29SerializeFieldWithCachedSizesEiPNS0_2io17CodedOutputStreamE(
           this,
           a2,
           a3);
}

