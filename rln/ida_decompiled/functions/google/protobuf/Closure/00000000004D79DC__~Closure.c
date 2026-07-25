/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D79DC
 * Mangled: _ZN6google8protobuf7ClosureD0Ev
 * Demangled: google::protobuf::Closure::~Closure()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004D79E0  google::protobuf::internal::FunctionClosure0::~FunctionClosure0()
 *
 * Referenced strings: 1
 *   insn=0x00000000004D79DC string=0x00000000004D79E0 "4~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::Closure::~Closure(google::protobuf::Closure *this)
{
  __break(1u);
  google::protobuf::internal::FunctionClosure0::~FunctionClosure0(this);
}

