/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A114C
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver4ItemEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Item>(Caver::Item *)
 *
 * Callers: 1
 *   0x00000000002010B0  boost::detail::shared_count::shared_count<Caver::Item>(Caver::Item *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8950  Caver::Item::~Item()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000003A1168 string=0x00000000003A116C ")"
 *   insn=0x00000000003A1168 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A116C string=0x00000000003A1170 ")mE"
 *   insn=0x00000000003A117C string=0x00000000003A1180 "(A"
 *   insn=0x00000000003A1184 string=0x00000000003A1188 ""
 *   insn=0x00000000003A119C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003A11A0 string=0x00000000003A11B4 "o"
 *   insn=0x00000000003A11A8 string=0x00000000001F8950 "0'"
 *   insn=0x00000000003A11AC string=0x00000000003A11B0 "@X"
 *   insn=0x00000000003A11B0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A11BC string=0x00000000003A11C0 "<X"
 *   insn=0x00000000003A11CC string=0x00000000001FD590 "0'"
 *   insn=0x00000000003A11D4 string=0x00000000003A11D8 "]"
 *   insn=0x00000000003A11D8 string=0x00000000003A11DC "5X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Item>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CE388;
  *a1 = v4;
  return result;
}

