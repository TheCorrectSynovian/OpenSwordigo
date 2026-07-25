/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEF00
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite24WriteMessageMaybeToArrayEiRKNS0_11MessageLiteEPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 2
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DF7D0  google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E32A0  google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEF08 string=0x00000000001FEF0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        google::protobuf::internal::WireFormatLite *this,
        int a2,
        const google::protobuf::MessageLite *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  return _ZN6google8protobuf8internal14WireFormatLite24WriteMessageMaybeToArrayEiRKNS0_11MessageLiteEPNS0_2io17CodedOutputStreamE(
           this,
           a2,
           a3,
           a4);
}

