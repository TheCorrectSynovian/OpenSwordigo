/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023DD54
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver13GUITextBubbleEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GUITextBubble>(Caver::GUITextBubble *)
 *
 * Callers: 1
 *   0x00000000001F6120  boost::detail::shared_count::shared_count<Caver::GUITextBubble>(Caver::GUITextBubble *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA260  Caver::GUITextBubble::~GUITextBubble()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x000000000023DD70 string=0x000000000023DD74 "I%"
 *   insn=0x000000000023DD70 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023DD74 string=0x000000000023DD78 ")-A"
 *   insn=0x000000000023DD84 string=0x000000000023DD88 "(A"
 *   insn=0x000000000023DD8C string=0x000000000023DD90 ""
 *   insn=0x000000000023DDA4 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000023DDA8 string=0x000000000023DDBC "m"
 *   insn=0x000000000023DDAC string=0x000000000023DDB0 ","
 *   insn=0x000000000023DDB0 string=0x00000000001FA260 "0'"
 *   insn=0x000000000023DDB4 string=0x000000000023DDB8 ">"
 *   insn=0x000000000023DDB8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000023DDC4 string=0x000000000023DDC8 ":"
 *   insn=0x000000000023DDD4 string=0x00000000001FD590 "0'"
 *   insn=0x000000000023DDDC string=0x000000000023DDE0 "[A"
 *   insn=0x000000000023DDE0 string=0x000000000023DDE4 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GUITextBubble>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6BBEC8;
  *a1 = v4;
  return result;
}

