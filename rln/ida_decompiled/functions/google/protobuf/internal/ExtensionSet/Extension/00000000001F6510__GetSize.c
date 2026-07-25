/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6510
 * Mangled: ._ZNK6google8protobuf8internal12ExtensionSet9Extension7GetSizeEv
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::GetSize(void)
 *
 * Callers: 1
 *   0x00000000004D8A84  google::protobuf::internal::ExtensionSet::ExtensionSize(int)
 *
 * Callees: 1
 *   0x00000000004D8AE0  google::protobuf::internal::ExtensionSet::Extension::GetSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6518 string=0x00000000001F651C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::GetSize(
        google::protobuf::internal::ExtensionSet::Extension *this)
{
  return _ZNK6google8protobuf8internal12ExtensionSet9Extension7GetSizeEv(this);
}

