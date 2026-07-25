/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFDB0
 * Mangled: ._ZNK6google8protobuf8internal12ExtensionSet9Extension8ByteSizeEi
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *
 * Callers: 3
 *   0x00000000004DF878  google::protobuf::internal::ExtensionSet::ByteSize(void)
 *   0x00000000004DF8DC  google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *   0x00000000004E0310  google::protobuf::internal::ExtensionSet::Extension::MessageSetItemByteSize(int)
 *
 * Callees: 1
 *   0x00000000004DF8DC  google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFDB8 string=0x00000000001FFDBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::ByteSize(
        google::protobuf::internal::ExtensionSet::Extension *this,
        int a2)
{
  return _ZNK6google8protobuf8internal12ExtensionSet9Extension8ByteSizeEi(this, a2);
}

