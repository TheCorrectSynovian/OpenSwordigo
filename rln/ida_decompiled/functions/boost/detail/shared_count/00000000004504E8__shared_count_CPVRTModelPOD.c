/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004504E8
 * Mangled: _ZN5boost6detail12shared_countC2I13CPVRTModelPODEEPT_
 * Demangled: boost::detail::shared_count::shared_count<CPVRTModelPOD>(CPVRTModelPOD *)
 *
 * Callers: 1
 *   0x00000000001F60D0  boost::detail::shared_count::shared_count<CPVRTModelPOD>(CPVRTModelPOD *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002019C0  CPVRTModelPOD::~CPVRTModelPOD()
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000450500 string=0x0000000000450504 "7"
 *   insn=0x0000000000450504 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000450508 string=0x000000000045050C ")"
 *   insn=0x0000000000450518 string=0x000000000045051C "(A"
 *   insn=0x0000000000450520 string=0x0000000000450524 ""
 *   insn=0x0000000000450538 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000450548 string=0x000000000045054C "Y"
 *   insn=0x000000000045054C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000450558 string=0x000000000045055C "U"
 *   insn=0x0000000000450560 string=0x0000000000450568 "\n"
 *   insn=0x0000000000450568 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000450570 string=0x0000000000450574 "v"
 *   insn=0x0000000000450574 string=0x0000000000450578 "N"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<CPVRTModelPOD>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D4208;
  *a1 = v4;
  return result;
}

