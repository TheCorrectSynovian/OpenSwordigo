/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040D1F4
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver15GUITexturedRectEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GUITexturedRect>(Caver::GUITexturedRect *)
 *
 * Callers: 2
 *   0x00000000001F7330  boost::detail::shared_count::shared_count<Caver::GUITexturedRect>(Caver::GUITexturedRect *)
 *   0x000000000040CD64  Caver::InventoryItemPanel::~InventoryItemPanel()
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
 * Referenced strings: 16
 *   insn=0x000000000040D210 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000040D214 string=0x000000000040D218 ")"
 *   insn=0x000000000040D224 string=0x000000000040D228 "(A"
 *   insn=0x000000000040D22C string=0x000000000040D230 ""
 *   insn=0x000000000040D244 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000040D248 string=0x000000000040D24C "`"
 *   insn=0x000000000040D248 string=0x000000000040D278 ">"
 *   insn=0x000000000040D250 string=0x000000000040D254 "@"
 *   insn=0x000000000040D254 string=0x000000000040D258 ""
 *   insn=0x000000000040D258 string=0x000000000040D25C ""
 *   insn=0x000000000040D260 string=0x000000000040D264 ""
 *   insn=0x000000000040D264 string=0x000000000040D268 ""
 *   insn=0x000000000040D274 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000040D280 string=0x000000000040D284 ""
 *   insn=0x000000000040D290 string=0x00000000001FD590 "0'"
 *   insn=0x000000000040D298 string=0x000000000040D29C ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GUITexturedRect>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D1D08;
  *a1 = v4;
  return result;
}

