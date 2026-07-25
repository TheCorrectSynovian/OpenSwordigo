/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030770C
 * Mangled: _ZNK5Caver5Proto19GroundMeshComponent3NewEv
 * Demangled: Caver::Proto::GroundMeshComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 17
 *   insn=0x0000000000307718 string=0x000000000030771C ""
 *   insn=0x0000000000307718 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030771C string=0x0000000000307720 "\t"
 *   insn=0x0000000000307720 string=0x0000000000307724 ""
 *   insn=0x0000000000307724 string=0x0000000000307728 "\t"
 *   insn=0x0000000000307728 string=0x000000000030772C "\t"
 *   insn=0x0000000000307730 string=0x0000000000307734 "\t"
 *   insn=0x0000000000307734 string=0x0000000000307738 "\tL"
 *   insn=0x0000000000307740 string=0x0000000000307744 "\t0"
 *   insn=0x0000000000307744 string=0x0000000000307748 "\tp"
 *   insn=0x0000000000307748 string=0x000000000030774C "\t"
 *   insn=0x0000000000307750 string=0x0000000000307754 ")!G"
 *   insn=0x0000000000307764 string=0x0000000000307768 " "
 *   insn=0x000000000030776C string=0x0000000000307770 ")"
 *   insn=0x0000000000307770 string=0x0000000000307774 "A"
 *   insn=0x000000000030777C string=0x0000000000307780 " "
 *   insn=0x0000000000307780 string=0x0000000000307784 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::GroundMeshComponent::New(Caver::Proto::GroundMeshComponent *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0xE0u);
  v1[2].n128_u64[0] = (unsigned __int64)&v1[3].n128_u64[1];
  v1[5].n128_u64[1] = 0;
  v1[6].n128_u64[0] = (unsigned __int64)&v1[7].n128_u64[1];
  v1[9].n128_u64[1] = (unsigned __int64)v1[11].n128_u64;
  v1->n128_u32[2] = 0;
  v1[3].n128_u32[0] = 4;
  v1[7].n128_u32[0] = 4;
  v1[10].n128_u32[2] = 4;
  v1[2].n128_u64[1] = 0;
  v1[6].n128_u64[1] = 0;
  v1[10].n128_u64[0] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::GroundMeshComponent::_default_vertex_data_;
  v1[13].n128_u64[0] = 0;
  v1[13].n128_u8[8] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::GroundMeshComponent::_default_indices_;
  v1->n128_u64[0] = (unsigned __int64)off_6C7830;
  v1[1] = result;
  v1[13].n128_u32[3] = 0;
  return result;
}

