/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000306E84
 * Mangled: _ZN5Caver5Proto19GroundMeshComponent10SharedCtorEv
 * Demangled: Caver::Proto::GroundMeshComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000306E88 string=0x0000000000306E8C "!G"
 *   insn=0x0000000000306E8C string=0x0000000000306E90 "\t"
 *   insn=0x0000000000306E90 string=0x0000000000306E94 ")"
 *   insn=0x0000000000306EA0 string=0x0000000000306EA4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::GroundMeshComponent::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[5].n128_u64[1] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::GroundMeshComponent::_default_vertex_data_;
  this[13].n128_u64[0] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::GroundMeshComponent::_default_indices_;
  this[13].n128_u8[8] = 0;
  this[1] = result;
  this[13].n128_u32[3] = 0;
  return result;
}

