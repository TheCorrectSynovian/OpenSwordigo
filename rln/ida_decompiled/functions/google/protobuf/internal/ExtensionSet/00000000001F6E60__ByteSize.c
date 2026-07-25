/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E60
 * Mangled: ._ZNK6google8protobuf8internal12ExtensionSet8ByteSizeEv
 * Demangled: google::protobuf::internal::ExtensionSet::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002FB9C0  Caver::Proto::Component::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000004DF878  google::protobuf::internal::ExtensionSet::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6E68 string=0x00000000001F6E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::ByteSize(google::protobuf::internal::ExtensionSet *this)
{
  return _ZNK6google8protobuf8internal12ExtensionSet8ByteSizeEv(this);
}

