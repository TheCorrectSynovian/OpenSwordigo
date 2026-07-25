/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE1D0
 * Mangled: ._ZN10__cxxabiv111__terminateEPFvvE
 * Demangled: __cxxabiv1::__terminate(void (*)(void))
 *
 * Callers: 5
 *   0x000000000051DEF0  __cxa_call_unexpected
 *   0x000000000051E048  std::terminate(void)
 *   0x000000000051E0A4  sub_51E0A4
 *   0x000000000056FCFC  sub_56FCFC
 *   0x000000000056FD44  sub_56FD44
 *
 * Callees: 1
 *   0x000000000051DFE0  __cxxabiv1::__terminate(void (*)(void))
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE1D8 string=0x00000000001FE1DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall __noreturn __cxxabiv1::__terminate(void (*a1)(void))
{
  _ZN10__cxxabiv111__terminateEPFvvE(a1);
}

