/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E03C0
 * Mangled: _ZN6google8protobuf8internal24GeneratedExtensionFinderD0Ev
 * Demangled: google::protobuf::internal::GeneratedExtensionFinder::~GeneratedExtensionFinder()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000004E03C0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::internal::GeneratedExtensionFinder::~GeneratedExtensionFinder(
        google::protobuf::internal::GeneratedExtensionFinder *this)
{
  operator delete(this);
}

