/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000449858
 * Mangled: _ZN5Caver13MeshOptimizer15CellForPositionERKNS_7Vector3E
 * Demangled: Caver::MeshOptimizer::CellForPosition(Caver::Vector3 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000044985C string=0x0000000000449860 "$@"
 *   insn=0x000000000044986C string=0x0000000000449870 "!8#"
 *   insn=0x000000000044987C string=0x0000000000449880 "!"
 *   insn=0x0000000000449888 string=0x000000000044988C "("
 *   insn=0x0000000000449890 string=0x0000000000449894 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall Caver::MeshOptimizer::CellForPosition(float *a1, float *a2)
{
  return vcvtms_u32_f32((float)(*a2 - a1[12]) / a1[19])
       | ((unsigned __int64)vcvtms_u32_f32((float)(a2[1] - a1[13]) / a1[20]) << 32);
}

