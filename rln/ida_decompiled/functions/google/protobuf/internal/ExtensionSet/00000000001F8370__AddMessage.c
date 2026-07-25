/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8370
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet10AddMessageEihRKNS0_11MessageLiteEPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::AddMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DC718  google::protobuf::internal::ExtensionSet::GetRepeatedMessage(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8378 string=0x00000000001F837C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::AddMessage()
{
  JUMPOUT(0x4DC928);
}

