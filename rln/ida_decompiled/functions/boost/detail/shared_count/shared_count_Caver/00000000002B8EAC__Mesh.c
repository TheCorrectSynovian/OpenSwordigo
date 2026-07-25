/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8EAC
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver4MeshEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *
 * Callers: 1
 *   0x00000000001FAB90  boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC380  Caver::Mesh::~Mesh()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002B8EC8 string=0x00000000002B8ECC "i!"
 *   insn=0x00000000002B8EC8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B8ECC string=0x00000000002B8ED0 ")=@"
 *   insn=0x00000000002B8EDC string=0x00000000002B8EE0 "(A"
 *   insn=0x00000000002B8EE4 string=0x00000000002B8EE8 ""
 *   insn=0x00000000002B8EFC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000002B8F08 string=0x00000000001FC380 "0'"
 *   insn=0x00000000002B8F10 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B8F2C string=0x00000000001FD590 "0'"
 *   insn=0x00000000002B8F30 string=0x00000000002B8F34 "d""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Mesh>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6C4B38;
  *a1 = v4;
  return result;
}

