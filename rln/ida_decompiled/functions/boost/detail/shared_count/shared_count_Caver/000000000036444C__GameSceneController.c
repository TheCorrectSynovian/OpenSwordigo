/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036444C
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver19GameSceneControllerEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GameSceneController>(Caver::GameSceneController *)
 *
 * Callers: 1
 *   0x00000000001FAAE0  boost::detail::shared_count::shared_count<Caver::GameSceneController>(Caver::GameSceneController *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F89D0  Caver::GameSceneController::~GameSceneController()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000364464 string=0x0000000000364468 "^D"
 *   insn=0x0000000000364468 string=0x000000000036446C "\t"
 *   insn=0x0000000000364468 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036446C string=0x0000000000364470 ")"
 *   insn=0x000000000036447C string=0x0000000000364480 "(A"
 *   insn=0x0000000000364484 string=0x0000000000364488 ""
 *   insn=0x000000000036449C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003644A4 string=0x00000000003644A8 "JQ"
 *   insn=0x00000000003644A8 string=0x00000000001F89D0 "0'"
 *   insn=0x00000000003644B0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003644BC string=0x00000000003644C0 "|K"
 *   insn=0x00000000003644C4 string=0x00000000003644CC "1d"
 *   insn=0x00000000003644CC string=0x00000000001FD590 "0'"
 *   insn=0x00000000003644D8 string=0x00000000003644DC "uK"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GameSceneController>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CBEB8;
  *a1 = v4;
  return result;
}

