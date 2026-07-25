/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4C10
 * Mangled: ._ZN6google8protobuf8internal10LogMessagelsERKSs
 * Demangled: google::protobuf::internal::LogMessage::operator<<(std::string const&)
 *
 * Callers: 3
 *   0x00000000004D81CC  google::protobuf::internal::ExtensionSet::RegisterExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool)
 *   0x00000000004E07F0  google::protobuf::MessageLite::InitializationErrorString(void)
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *
 * Callees: 1
 *   0x00000000004D7100  google::protobuf::internal::LogMessage::operator<<(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4C18 string=0x00000000001F4C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::LogMessage::operator<<()
{
  return _ZN6google8protobuf8internal10LogMessagelsERKSs();
}

