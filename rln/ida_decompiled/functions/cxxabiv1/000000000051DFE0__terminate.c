/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051DFE0
 * Mangled: _ZN10__cxxabiv111__terminateEPFvvE
 * Demangled: __cxxabiv1::__terminate(void (*)(void))
 *
 * Callers: 1
 *   0x00000000001FE1D0  __cxxabiv1::__terminate(void (*)(void))
 *
 * Callees: 5
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE620  .abort
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000051DFF0 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000051DFFC string=0x000000000051E000 "d}"
 *   insn=0x000000000051E000 string=0x00000000001FD590 "0'"
 *   insn=0x000000000051E008 string=0x000000000051E00C "?"
 *   insn=0x000000000051E00C string=0x000000000051E010 "@"
 *   insn=0x000000000051E010 string=0x000000000051E014 ","
 *   insn=0x000000000051E018 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn __cxxabiv1::__terminate(void (*a1)(void))
{
  a1();
  abort();
}

