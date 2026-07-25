/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3564
 * Mangled: _ZN6google8protobuf8internal12FieldSkipperD0Ev
 * Demangled: google::protobuf::internal::FieldSkipper::~FieldSkipper()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000004E3564 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::internal::FieldSkipper::~FieldSkipper(google::protobuf::internal::FieldSkipper *this)
{
  operator delete(this);
}

