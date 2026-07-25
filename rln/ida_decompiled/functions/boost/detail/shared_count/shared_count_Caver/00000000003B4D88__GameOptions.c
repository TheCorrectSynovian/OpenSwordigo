/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B4D88
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver11GameOptionsEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GameOptions>(Caver::GameOptions *)
 *
 * Callers: 1
 *   0x00000000001F63B0  boost::detail::shared_count::shared_count<Caver::GameOptions>(Caver::GameOptions *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB670  Caver::GameOptions::~GameOptions()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000003B4DA4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B4DA8 string=0x00000000003B4DAC ")AD"
 *   insn=0x00000000003B4DB8 string=0x00000000003B4DBC "(A"
 *   insn=0x00000000003B4DC0 string=0x00000000003B4DC4 ""
 *   insn=0x00000000003B4DD8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B4DDC string=0x00000000003B4DF0 "`7"
 *   insn=0x00000000003B4DE0 string=0x00000000003B4DE4 "#"
 *   insn=0x00000000003B4DE4 string=0x00000000001FB670 "0'"
 *   insn=0x00000000003B4DE8 string=0x00000000003B4DEC "1\t"
 *   insn=0x00000000003B4DEC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B4DF8 string=0x00000000003B4DFC "-\t"
 *   insn=0x00000000003B4E08 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B4E10 string=0x00000000003B4E14 "Ne"
 *   insn=0x00000000003B4E14 string=0x00000000003B4E18 "&\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GameOptions>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CEEA8;
  *a1 = v4;
  return result;
}

