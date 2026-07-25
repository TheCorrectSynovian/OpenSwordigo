/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047BBE8
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver12StoreProductEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::StoreProduct>(Caver::StoreProduct *)
 *
 * Callers: 1
 *   0x00000000001F7E40  boost::detail::shared_count::shared_count<Caver::StoreProduct>(Caver::StoreProduct *)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x000000000047BBF8 string=0x000000000047BBFC "U"
 *   insn=0x000000000047BC14 string=0x000000000047BC18 "r"
 *   insn=0x000000000047BC18 string=0x000000000047BC1C "I"
 *   insn=0x000000000047BC18 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047BC1C string=0x000000000047BC20 ")"
 *   insn=0x000000000047BC2C string=0x000000000047BC30 "(A"
 *   insn=0x000000000047BC34 string=0x000000000047BC38 ""
 *   insn=0x000000000047BC64 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047BC68 string=0x000000000047BC6C "3"
 *   insn=0x000000000047BC68 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000047BC6C string=0x000000000047BC70 "h"
 *   insn=0x000000000047BC70 string=0x000000000047BC74 "T"
 *   insn=0x000000000047BC84 string=0x000000000047BC88 "h"
 *   insn=0x000000000047BC84 string=0x000000000047BCD4 "I"
 *   insn=0x000000000047BC94 string=0x000000000047BC98 "I"
 *   insn=0x000000000047BC98 string=0x000000000047BC9C ")=G"
 *   insn=0x000000000047BC9C string=0x000000000047BCA0 "!"
 *   insn=0x000000000047BCA4 string=0x000000000047BCA8 "\t"
 *   insn=0x000000000047BCA4 string=0x000000000047BD18 "\t"
 *   insn=0x000000000047BCA8 string=0x000000000047BCAC "*"
 *   insn=0x000000000047BCAC string=0x000000000047BCB0 "\n"
 *   insn=0x000000000047BCB4 string=0x000000000047BCB8 "?"
 *   insn=0x000000000047BCB8 string=0x000000000047BCBC "l"
 *   insn=0x000000000047BCC8 string=0x000000000047BCCC "y"
 *   insn=0x000000000047BCCC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047BCD4 string=0x000000000047BCD8 ")=G"
 *   insn=0x000000000047BCD8 string=0x000000000047BCDC "!"
 *   insn=0x000000000047BCE0 string=0x000000000047BCE4 "\t"
 *   insn=0x000000000047BCE0 string=0x000000000047BCF8 "\t"
 *   insn=0x000000000047BCE4 string=0x000000000047BCE8 "*"
 *   insn=0x000000000047BCE8 string=0x000000000047BCEC "\n"
 *   insn=0x000000000047BCF4 string=0x000000000047BD04 "?"
 *   insn=0x000000000047BCF8 string=0x000000000047BCFC "*"
 *   insn=0x000000000047BCFC string=0x000000000047BD00 "\n"
 *   insn=0x000000000047BD18 string=0x000000000047BD1C "*"
 *   insn=0x000000000047BD1C string=0x000000000047BD20 "\n"
 *   insn=0x000000000047BD20 string=0x000000000047BD24 "?"
 *   insn=0x000000000047BD34 string=0x00000000001FD590 "0'"
 *   insn=0x000000000047BD40 string=0x000000000047BD44 "["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::StoreProduct>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  _ReadStatusReg(TPIDR_EL0);
  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D51C8;
  *a1 = v4;
  return result;
}

