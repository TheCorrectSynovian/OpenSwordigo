/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000239728
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver7PolygonEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Polygon>(Caver::Polygon *)
 *
 * Callers: 1
 *   0x00000000001FC9A0  boost::detail::shared_count::shared_count<Caver::Polygon>(Caver::Polygon *)
 *
 * Callees: 7
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x0000000000239744 string=0x0000000000239748 "i%"
 *   insn=0x0000000000239744 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000239748 string=0x000000000023974C ")"
 *   insn=0x0000000000239758 string=0x000000000023975C "(A"
 *   insn=0x0000000000239760 string=0x0000000000239764 ""
 *   insn=0x0000000000239778 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000023977C string=0x0000000000239780 "`"
 *   insn=0x0000000000239780 string=0x0000000000239784 "@"
 *   insn=0x0000000000239788 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000239798 string=0x000000000023979C "}"
 *   insn=0x000000000023979C string=0x00000000001FD590 "0'"
 *   insn=0x00000000002397A0 string=0x00000000002397A4 "H "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Polygon>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6BB768;
  *a1 = v4;
  return result;
}

