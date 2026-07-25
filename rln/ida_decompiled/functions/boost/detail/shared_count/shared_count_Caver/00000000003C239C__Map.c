/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C239C
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver3MapEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Map>(Caver::Map *)
 *
 * Callers: 1
 *   0x0000000000201970  boost::detail::shared_count::shared_count<Caver::Map>(Caver::Map *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9660  Caver::Map::~Map()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000003C23B8 string=0x00000000003C23BC ")"
 *   insn=0x00000000003C23B8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003C23BC string=0x00000000003C23C0 ")"
 *   insn=0x00000000003C23CC string=0x00000000003C23D0 "(A"
 *   insn=0x00000000003C23D4 string=0x00000000003C23D8 ""
 *   insn=0x00000000003C23EC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003C23F8 string=0x00000000001F9660 "0'"
 *   insn=0x00000000003C2400 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C2414 string=0x00000000003C241C "]"
 *   insn=0x00000000003C241C string=0x00000000001FD590 "0'"
 *   insn=0x00000000003C2420 string=0x00000000003C2424 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Map>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CF128;
  *a1 = v4;
  return result;
}

