/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E33C
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver6SpriteEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *
 * Callers: 1
 *   0x00000000001FCB10  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x000000000021E358 string=0x000000000021E35C "I&"
 *   insn=0x000000000021E358 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021E35C string=0x000000000021E360 ")"
 *   insn=0x000000000021E36C string=0x000000000021E370 "(A"
 *   insn=0x000000000021E374 string=0x000000000021E378 ""
 *   insn=0x000000000021E38C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000021E390 string=0x000000000021E394 "`"
 *   insn=0x000000000021E398 string=0x000000000021E39C "`"
 *   insn=0x000000000021E3A0 string=0x000000000021E3A4 "`"
 *   insn=0x000000000021E3A8 string=0x000000000021E3C8 "@"
 *   insn=0x000000000021E3B0 string=0x000000000021E3B4 "`"
 *   insn=0x000000000021E3B0 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000021E3B4 string=0x000000000021E3B8 "`"
 *   insn=0x000000000021E3BC string=0x000000000021E3C0 "`"
 *   insn=0x000000000021E3C8 string=0x000000000021E3CC ""
 *   insn=0x000000000021E3CC string=0x000000000021E3D0 ""
 *   insn=0x000000000021E3D4 string=0x000000000021E3D8 ""
 *   insn=0x000000000021E3D8 string=0x000000000021E3DC ""
 *   insn=0x000000000021E3E8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021E3FC string=0x000000000021E404 "c|"
 *   insn=0x000000000021E404 string=0x00000000001FD590 "0'"
 *   insn=0x000000000021E408 string=0x000000000021E40C "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Sprite>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6B9C38;
  *a1 = v4;
  return result;
}

