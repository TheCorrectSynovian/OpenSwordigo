/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E108
 * Mangled: __cxa_throw
 * Demangled: __cxa_throw
 *
 * Callers: 1
 *   0x00000000001FB4A0  .__cxa_throw
 *
 * Callees: 7
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FE3A0  .__cxa_get_globals
 *   0x0000000000201950  std::get_terminate(void)
 *   0x0000000000203170  std::get_unexpected(void)
 *   0x0000000000203770  std::terminate(void)
 *   0x000000000051E0A4  sub_51E0A4
 *   0x0000000000581658  sub_581658
 *
 * Referenced strings: 16
 *   insn=0x000000000051E118 string=0x000000000051E11C "t"
 *   insn=0x000000000051E130 string=0x000000000051E134 "c"
 *   insn=0x000000000051E13C string=0x000000000051E140 " "
 *   insn=0x000000000051E140 string=0x000000000051E144 "b"
 *   insn=0x000000000051E144 string=0x000000000051E148 "a"
 *   insn=0x000000000051E148 string=0x000000000051E14C "`"
 *   insn=0x000000000051E14C string=0x000000000051E150 ""
 *   insn=0x000000000051E150 string=0x000000000051E154 "`"
 *   insn=0x000000000051E158 string=0x000000000051E15C "`"
 *   insn=0x000000000051E164 string=0x000000000051E168 "ae"
 *   insn=0x000000000051E168 string=0x000000000051E16C "a"
 *   insn=0x000000000051E170 string=0x000000000051E174 "a"
 *   insn=0x000000000051E178 string=0x000000000051E180 "a"
 *   insn=0x000000000051E180 string=0x000000000051E184 "5"
 *   insn=0x000000000051E18C string=0x000000000051E190 "x"
 *   insn=0x000000000051E18C string=0x00000000001F45E0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn _cxa_throw(void *a1, struct type_info *lptinfo, void (*a3)(void *))
{
  char *v4; // x20
  __int64 globals; // x0

  v4 = (char *)a1 - 128;
  globals = __cxa_get_globals();
  v4 += 96;
  ++*(_DWORD *)(globals + 8);
  *((_QWORD *)a1 - 13) = a3;
  *((_QWORD *)a1 - 14) = lptinfo;
  *((_DWORD *)a1 - 32) = 1;
  *((_QWORD *)a1 - 12) = std::get_unexpected();
  *((_QWORD *)a1 - 11) = std::get_terminate();
  *((_QWORD *)a1 - 4) = 0x474E5543432B2B00LL;
  *((_QWORD *)a1 - 3) = sub_51E0A4;
  sub_581658(v4);
  __cxa_begin_catch(v4);
  std::terminate();
}

