/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD340
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet9Extension4FreeEv
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::Free(void)
 *
 * Callers: 1
 *   0x00000000004D87B8  google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *
 * Callees: 1
 *   0x00000000004D87B8  google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD348 string=0x00000000001FD34C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::internal::ExtensionSet::Extension::Free(
        google::protobuf::internal::ExtensionSet::Extension *this)
{
  JUMPOUT(0x4D8834);
}

