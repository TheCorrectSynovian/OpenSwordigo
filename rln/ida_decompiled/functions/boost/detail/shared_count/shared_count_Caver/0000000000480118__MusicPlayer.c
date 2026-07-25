/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000480118
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver11MusicPlayerEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::MusicPlayer>(Caver::MusicPlayer *)
 *
 * Callers: 1
 *   0x00000000001FF1C0  boost::detail::shared_count::shared_count<Caver::MusicPlayer>(Caver::MusicPlayer *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC370  Caver::MusicPlayer::~MusicPlayer()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x0000000000480130 string=0x0000000000480134 "+"
 *   insn=0x0000000000480134 string=0x0000000000480138 ")"
 *   insn=0x0000000000480134 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000480138 string=0x000000000048013C ")"
 *   insn=0x0000000000480148 string=0x000000000048014C "(A"
 *   insn=0x0000000000480150 string=0x0000000000480154 ""
 *   insn=0x0000000000480168 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000048016C string=0x0000000000480180 "|\n"
 *   insn=0x0000000000480174 string=0x00000000001FC370 "0'"
 *   insn=0x0000000000480178 string=0x000000000048017C "M"
 *   insn=0x000000000048017C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000480188 string=0x000000000048018C "I"
 *   insn=0x0000000000480198 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004801A0 string=0x00000000004801A4 "j8"
 *   insn=0x00000000004801A4 string=0x00000000004801A8 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::MusicPlayer>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D52E8;
  *a1 = v4;
  return result;
}

