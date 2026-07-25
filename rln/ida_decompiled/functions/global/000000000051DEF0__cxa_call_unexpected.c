/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051DEF0
 * Mangled: __cxa_call_unexpected
 * Demangled: __cxa_call_unexpected
 *
 * Callers: 1
 *   0x00000000001F8280  .__cxa_call_unexpected
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F6540  __cxxabiv1::__unexpected(void (*)(void))
 *   0x00000000001F8AB0  .__cxa_get_globals_fast
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE1D0  __cxxabiv1::__terminate(void (*)(void))
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051D3A4  std::bad_exception::~bad_exception()
 *   0x000000000051D768  sub_51D768
 *   0x000000000051D874  sub_51D874
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x000000000051DF08 string=0x000000000051DF0C "a"
 *   insn=0x000000000051DF08 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000051DF0C string=0x000000000051DF10 "`"
 *   insn=0x000000000051DF10 string=0x000000000051DF14 "u"
 *   insn=0x000000000051DF14 string=0x000000000051DF18 "t"
 *   insn=0x000000000051DF1C string=0x000000000051DF20 "s"
 *   insn=0x000000000051DF24 string=0x00000000001F6540 "0'"
 *   insn=0x000000000051DF2C string=0x00000000001F8AB0 "0'"
 *   insn=0x000000000051DF38 string=0x000000000051DF3C "A"
 *   insn=0x000000000051DF68 string=0x000000000051DF6C "B"
 *   insn=0x000000000051DF74 string=0x000000000051DF90 "U"
 *   insn=0x000000000051DF80 string=0x00000000001FD590 "0'"
 *   insn=0x000000000051DF88 string=0x000000000051DF8C "N"
 *   insn=0x000000000051DFA0 string=0x000000000051DFA4 "4"
 *   insn=0x000000000051DFA8 string=0x000000000051DFAC "`"
 *   insn=0x000000000051DFB0 string=0x000000000051DFB4 "+m"
 *   insn=0x000000000051DFB4 string=0x000000000051DFB8 "A"
 *   insn=0x000000000051DFB4 string=0x00000000001F9460 "0'"
 *   insn=0x000000000051DFB8 string=0x000000000051DFBC "B"
 *   insn=0x000000000051DFBC string=0x000000000051DFC0 "!"
 *   insn=0x000000000051DFC0 string=0x000000000051DFC4 "!@"
 *   insn=0x000000000051DFCC string=0x000000000051DFD0 "B`F"
 *   insn=0x000000000051DFD0 string=0x000000000051DFD4 "3u"
 *   insn=0x000000000051DFD0 string=0x000000000051D3A4 "A"
 *   insn=0x000000000051DFD4 string=0x00000000001FB4A0 "0'"
 *   insn=0x000000000051DFD8 string=0x000000000051DFDC "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn _cxa_call_unexpected(void *a1)
{
  void (*v2)(void); // x0
  __int64 v3; // [xsp+60h] [xbp+60h]

  __cxa_begin_catch(a1);
  v2 = (void (*)(void))*((_QWORD *)a1 - 8);
  v3 = *((_QWORD *)a1 - 2);
  __cxxabiv1::__unexpected(v2);
}

