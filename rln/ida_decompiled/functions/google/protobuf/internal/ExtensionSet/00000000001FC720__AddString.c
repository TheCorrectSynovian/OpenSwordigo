/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC720
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet9AddStringEihPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::AddString(int,uchar,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DC140  google::protobuf::internal::ExtensionSet::GetRepeatedString(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC728 string=0x00000000001FC72C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::AddString()
{
  JUMPOUT(0x4DC350);
}

