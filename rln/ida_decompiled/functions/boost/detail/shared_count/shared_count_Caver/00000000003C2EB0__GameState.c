/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2EB0
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver9GameStateEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GameState>(Caver::GameState *)
 *
 * Callers: 2
 *   0x00000000002008A0  boost::detail::shared_count::shared_count<Caver::GameState>(Caver::GameState *)
 *   0x00000000003C2AE0  Caver::GameData::~GameData()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA0D0  Caver::GameState::~GameState()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000003C2ECC string=0x00000000003C2ED0 ")"
 *   insn=0x00000000003C2ECC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003C2ED0 string=0x00000000003C2ED4 ")\t@"
 *   insn=0x00000000003C2EE0 string=0x00000000003C2EE4 "(A"
 *   insn=0x00000000003C2EE8 string=0x00000000003C2EEC ""
 *   insn=0x00000000003C2F00 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003C2F08 string=0x00000000003C2F0C "q"
 *   insn=0x00000000003C2F0C string=0x00000000001FA0D0 "0'"
 *   insn=0x00000000003C2F14 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C2F30 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003C2F34 string=0x00000000003C2F38 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GameState>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CF1C8;
  *a1 = v4;
  return result;
}

