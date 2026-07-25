/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE20
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet10ParseFieldEjPNS0_2io16CodedInputStreamEPKNS0_11MessageLiteE
 * Demangled: google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::MessageLite const*)
 *
 * Callers: 1
 *   0x00000000002FB618  Caver::Proto::Component::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFE28 string=0x00000000001FFE2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::internal::ExtensionSet::ParseField(
        google::protobuf::internal::ExtensionSet *this,
        unsigned int a2,
        google::protobuf::io::CodedInputStream *a3,
        const google::protobuf::MessageLite *a4)
{
  JUMPOUT(0x4DE54C);
}

