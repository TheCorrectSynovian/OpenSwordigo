/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D79E0
 * Mangled: _ZN6google8protobuf8internal16FunctionClosure0D0Ev
 * Demangled: google::protobuf::internal::FunctionClosure0::~FunctionClosure0()
 *
 * Callers: 1
 *   0x00000000004D79DC  google::protobuf::Closure::~Closure()
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000004D79E0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::internal::FunctionClosure0::~FunctionClosure0(
        google::protobuf::internal::FunctionClosure0 *this)
{
  operator delete(this);
}

