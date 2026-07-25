/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D05C
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver14SceneGridLayerEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::SceneGridLayer>(Caver::SceneGridLayer *)
 *
 * Callers: 1
 *   0x00000000001F70F0  boost::detail::shared_count::shared_count<Caver::SceneGridLayer>(Caver::SceneGridLayer *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200040  Caver::SceneGridLayer::~SceneGridLayer()
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000046D074 string=0x000000000046D078 "Z!"
 *   insn=0x000000000046D078 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000046D07C string=0x000000000046D080 ")YF"
 *   insn=0x000000000046D08C string=0x000000000046D090 "(A"
 *   insn=0x000000000046D094 string=0x000000000046D098 ""
 *   insn=0x000000000046D0AC string=0x00000000001F45E0 "P'"
 *   insn=0x000000000046D0BC string=0x000000000046D0C0 "|("
 *   insn=0x000000000046D0C0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046D0CC string=0x000000000046D0D0 "x("
 *   insn=0x000000000046D0D4 string=0x000000000046D0DC "-A"
 *   insn=0x000000000046D0DC string=0x00000000001FD590 "0'"
 *   insn=0x000000000046D0E8 string=0x000000000046D0EC "q("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::SceneGridLayer>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D4C80;
  *a1 = v4;
  return result;
}

