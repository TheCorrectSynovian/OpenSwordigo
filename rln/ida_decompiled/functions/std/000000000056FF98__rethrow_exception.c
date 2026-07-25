/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FF98
 * Mangled: _ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE
 * Demangled: std::rethrow_exception(std::__exception_ptr::exception_ptr)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F3460  .__cxa_allocate_dependent_exception
 *   0x00000000001F4150  std::__exception_ptr::exception_ptr::_M_get(void)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x0000000000201950  std::get_terminate(void)
 *   0x0000000000203170  std::get_unexpected(void)
 *   0x0000000000203770  std::terminate(void)
 *   0x000000000056FD44  sub_56FD44
 *   0x0000000000581658  sub_581658
 *
 * Referenced strings: 18
 *   insn=0x000000000056FFA0 string=0x000000000056FFA4 "k"
 *   insn=0x000000000056FFA4 string=0x00000000001F4150 "P'"
 *   insn=0x000000000056FFA8 string=0x000000000056FFAC "-"
 *   insn=0x000000000056FFAC string=0x00000000001F3460 "P'"
 *   insn=0x000000000056FFB4 string=0x000000000056FFB8 "t"
 *   insn=0x000000000056FFBC string=0x000000000056FFC0 "!"
 *   insn=0x000000000056FFC8 string=0x000000000056FFCC "iL"
 *   insn=0x000000000056FFCC string=0x000000000056FFD0 "`\n"
 *   insn=0x000000000056FFD0 string=0x000000000056FFD4 "tB"
 *   insn=0x000000000056FFD4 string=0x000000000056FFD8 "^F"
 *   insn=0x000000000056FFD8 string=0x000000000056FFDC "`"
 *   insn=0x000000000056FFDC string=0x000000000056FFE0 "!`"
 *   insn=0x000000000056FFE4 string=0x000000000056FFE8 "ae"
 *   insn=0x000000000056FFE8 string=0x000000000056FFEC "a"
 *   insn=0x000000000056FFF0 string=0x000000000056FFF4 "a*"
 *   insn=0x000000000056FFF8 string=0x0000000000570000 "a."
 *   insn=0x0000000000570008 string=0x000000000057000C "u"
 *   insn=0x000000000057000C string=0x00000000001F45E0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn std::rethrow_exception(std::__exception_ptr::exception_ptr *a1)
{
  __int64 v1; // x20
  _QWORD *dependent_exception; // x19
  unsigned int *v3; // x0
  unsigned int v4; // w1

  v1 = std::__exception_ptr::exception_ptr::_M_get(a1);
  dependent_exception = (_QWORD *)__cxa_allocate_dependent_exception();
  v3 = (unsigned int *)(v1 - 128);
  *dependent_exception = v1;
  do
    v4 = __ldaxr(v3);
  while ( __stlxr(v4 + 1, v3) );
  dependent_exception[2] = std::get_unexpected();
  dependent_exception[3] = std::get_terminate();
  dependent_exception[10] = 0x474E5543432B2B01LL;
  dependent_exception[11] = sub_56FD44;
  sub_581658(dependent_exception + 10);
  __cxa_begin_catch(dependent_exception + 10);
  std::terminate();
}

