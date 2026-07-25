/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000247088
 * Mangled: _ZN5boost17bad_function_callD0Ev
 * Demangled: boost::bad_function_call::~bad_function_call()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 1
 *   insn=0x00000000002470A8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::bad_function_call::~bad_function_call(boost::bad_function_call *this)
{
  sub_54A024(this);
  operator delete(this);
}

