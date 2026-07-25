/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B209C
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver11EntityClassEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::EntityClass>(Caver::EntityClass *)
 *
 * Callers: 1
 *   0x00000000001FDF20  boost::detail::shared_count::shared_count<Caver::EntityClass>(Caver::EntityClass *)
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
 *   insn=0x00000000003B20AC string=0x00000000003B20B0 "U"
 *   insn=0x00000000003B20C8 string=0x00000000003B20CC "E"
 *   insn=0x00000000003B20CC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B20D0 string=0x00000000003B20D4 ")"
 *   insn=0x00000000003B20E0 string=0x00000000003B20E4 "(A"
 *   insn=0x00000000003B20E8 string=0x00000000003B20EC ""
 *   insn=0x00000000003B2100 string=0x00000000003B2118 "n"
 *   insn=0x00000000003B2118 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B211C string=0x00000000003B2120 "3"
 *   insn=0x00000000003B211C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B2120 string=0x00000000003B2124 "h"
 *   insn=0x00000000003B2120 string=0x00000000003B2184 "{B"
 *   insn=0x00000000003B2138 string=0x00000000003B213C "h"
 *   insn=0x00000000003B214C string=0x00000000003B2150 ")=G"
 *   insn=0x00000000003B2150 string=0x00000000003B2154 "!"
 *   insn=0x00000000003B2158 string=0x00000000003B215C "\t"
 *   insn=0x00000000003B2158 string=0x00000000003B21CC "\t"
 *   insn=0x00000000003B215C string=0x00000000003B2160 "*"
 *   insn=0x00000000003B2160 string=0x00000000003B2164 "\n"
 *   insn=0x00000000003B2168 string=0x00000000003B216C "?"
 *   insn=0x00000000003B216C string=0x00000000003B2170 "l"
 *   insn=0x00000000003B217C string=0x00000000003B2180 "L"
 *   insn=0x00000000003B2180 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B2188 string=0x00000000003B218C ")=G"
 *   insn=0x00000000003B218C string=0x00000000003B2190 "!"
 *   insn=0x00000000003B2194 string=0x00000000003B2198 "\t"
 *   insn=0x00000000003B2194 string=0x00000000003B21AC "\t"
 *   insn=0x00000000003B2198 string=0x00000000003B219C "*"
 *   insn=0x00000000003B219C string=0x00000000003B21A0 "\n"
 *   insn=0x00000000003B21A8 string=0x00000000003B21B8 "?"
 *   insn=0x00000000003B21AC string=0x00000000003B21B0 "*"
 *   insn=0x00000000003B21B0 string=0x00000000003B21B4 "\n"
 *   insn=0x00000000003B21C0 string=0x00000000003B21C4 "x"
 *   insn=0x00000000003B21CC string=0x00000000003B21D0 "*"
 *   insn=0x00000000003B21D0 string=0x00000000003B21D4 "\n"
 *   insn=0x00000000003B21D4 string=0x00000000003B21D8 "?"
 *   insn=0x00000000003B21E8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B21F0 string=0x00000000003B21F4 "Vp"
 *   insn=0x00000000003B21F4 string=0x00000000003B21F8 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::EntityClass>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  _ReadStatusReg(TPIDR_EL0);
  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CEDB8;
  *a1 = v4;
  return result;
}

