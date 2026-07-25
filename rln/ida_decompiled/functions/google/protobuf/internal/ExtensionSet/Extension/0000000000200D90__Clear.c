/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200D90
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet9Extension5ClearEv
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::Clear(void)
 *
 * Callers: 2
 *   0x00000000004D8AE0  google::protobuf::internal::ExtensionSet::Extension::GetSize(void)
 *   0x00000000004DCB74  google::protobuf::internal::ExtensionSet::RemoveLast(int)
 *
 * Callees: 1
 *   0x00000000004D8C0C  google::protobuf::internal::ExtensionSet::Extension::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200D98 string=0x0000000000200D9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::Clear(
        google::protobuf::internal::ExtensionSet::Extension *this)
{
  return _ZN6google8protobuf8internal12ExtensionSet9Extension5ClearEv(this);
}

