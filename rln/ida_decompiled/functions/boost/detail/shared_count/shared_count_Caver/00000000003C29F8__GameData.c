/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C29F8
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver8GameDataEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GameData>(Caver::GameData *)
 *
 * Callers: 1
 *   0x00000000001F53A0  boost::detail::shared_count::shared_count<Caver::GameData>(Caver::GameData *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F74D0  Caver::GameData::~GameData()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000003C2A14 string=0x00000000003C2A18 "\t"
 *   insn=0x00000000003C2A14 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003C2A18 string=0x00000000003C2A1C ")"
 *   insn=0x00000000003C2A28 string=0x00000000003C2A2C "(A"
 *   insn=0x00000000003C2A30 string=0x00000000003C2A34 ""
 *   insn=0x00000000003C2A48 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003C2A4C string=0x00000000003C2A60 "D"
 *   insn=0x00000000003C2A54 string=0x00000000001F74D0 "0'"
 *   insn=0x00000000003C2A5C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C2A78 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003C2A80 string=0x00000000003C2A84 "2."
 *   insn=0x00000000003C2A84 string=0x00000000003C2A88 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GameData>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CF178;
  *a1 = v4;
  return result;
}

