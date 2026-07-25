/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201FD0
 * Mangled: ._ZN6google8protobuf8internal10LogMessagelsEi
 * Demangled: google::protobuf::internal::LogMessage::operator<<(int)
 *
 * Callers: 3
 *   0x00000000004D81CC  google::protobuf::internal::ExtensionSet::RegisterExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool)
 *   0x00000000004E3744  google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(void)
 *   0x00000000004E3930  google::protobuf::io::CodedInputStream::Refresh(void)
 *
 * Callees: 1
 *   0x00000000004D74FC  google::protobuf::internal::LogMessage::operator<<(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201FD8 string=0x0000000000201FDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::LogMessage::operator<<()
{
  return _ZN6google8protobuf8internal10LogMessagelsEi();
}

