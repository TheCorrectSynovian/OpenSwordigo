/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200E40
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet10ParseFieldEjPNS0_2io16CodedInputStreamEPNS1_15ExtensionFinderEPNS1_12FieldSkipperE
 * Demangled: google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callers: 4
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000004DE5C4  google::protobuf::internal::ExtensionSet::ParseMessageSet(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000004DE67C  google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000004DEAC8  google::protobuf::internal::ExtensionSet::ParseMessageSet(google::protobuf::io::CodedInputStream *,google::protobuf::MessageLite const*)
 *
 * Callees: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200E48 string=0x0000000000200E4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::ParseField(
        google::protobuf::internal::ExtensionSet *this,
        unsigned int a2,
        google::protobuf::io::CodedInputStream *a3,
        google::protobuf::internal::ExtensionFinder *a4,
        google::protobuf::internal::FieldSkipper *a5)
{
  return _ZN6google8protobuf8internal12ExtensionSet10ParseFieldEjPNS0_2io16CodedInputStreamEPNS1_15ExtensionFinderEPNS1_12FieldSkipperE(
           this,
           a2,
           a3,
           a4,
           a5);
}

