/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D8134
 * Mangled: _ZN6google8protobuf8internal15ExtensionFinderD0Ev
 * Demangled: google::protobuf::internal::ExtensionFinder::~ExtensionFinder()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004D8138  google::protobuf::internal::GeneratedExtensionFinder::Find(int,google::protobuf::internal::ExtensionInfo *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::ExtensionFinder::~ExtensionFinder(
        google::protobuf::internal::ExtensionFinder *this)
{
  __break(1u);
  google::protobuf::internal::GeneratedExtensionFinder::Find(this);
}

