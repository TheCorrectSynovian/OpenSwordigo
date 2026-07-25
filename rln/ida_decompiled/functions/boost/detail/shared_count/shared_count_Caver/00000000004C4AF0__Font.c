/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C4AF0
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver4FontEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Font>(Caver::Font *)
 *
 * Callers: 1
 *   0x00000000001F8C10  boost::detail::shared_count::shared_count<Caver::Font>(Caver::Font *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6330  Caver::Font::~Font()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000004C4B0C string=0x00000000004C4B10 "\t"
 *   insn=0x00000000004C4B0C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C4B10 string=0x00000000004C4B14 ")"
 *   insn=0x00000000004C4B20 string=0x00000000004C4B24 "(A"
 *   insn=0x00000000004C4B28 string=0x00000000004C4B2C ""
 *   insn=0x00000000004C4B40 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004C4B4C string=0x00000000001F6330 "0'"
 *   insn=0x00000000004C4B54 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C4B70 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004C4B74 string=0x00000000004C4B78 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Font>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D7C78;
  *a1 = v4;
  return result;
}

