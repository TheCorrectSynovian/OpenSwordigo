/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004492CC
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver12MeshInstanceEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::MeshInstance>(Caver::MeshInstance *)
 *
 * Callers: 1
 *   0x00000000001F79C0  boost::detail::shared_count::shared_count<Caver::MeshInstance>(Caver::MeshInstance *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8DC0  Caver::MeshInstance::~MeshInstance()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000004492E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004492EC string=0x00000000004492F0 ")YA"
 *   insn=0x00000000004492FC string=0x0000000000449300 "(A"
 *   insn=0x0000000000449304 string=0x0000000000449308 ""
 *   insn=0x000000000044931C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000449328 string=0x00000000001F8DC0 "0'"
 *   insn=0x0000000000449330 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044934C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000449350 string=0x0000000000449354 "\"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::MeshInstance>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D40C8;
  *a1 = v4;
  return result;
}

