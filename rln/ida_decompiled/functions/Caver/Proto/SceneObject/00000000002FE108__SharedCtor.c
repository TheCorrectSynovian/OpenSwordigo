/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FE108
 * Mangled: _ZN5Caver5Proto11SceneObject10SharedCtorEv
 * Demangled: Caver::Proto::SceneObject::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000002FE108 string=0x00000000002FE10C "("
 *   insn=0x00000000002FE10C string=0x00000000002FE110 "9@"
 *   insn=0x00000000002FE110 string=0x00000000002FE114 ")"
 *   insn=0x00000000002FE114 string=0x00000000002FE118 ")"
 *   insn=0x00000000002FE124 string=0x00000000002FE128 " "
 *   insn=0x00000000002FE134 string=0x00000000002FE138 "\nh"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::SceneObject::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::SceneObject::_default_template_name_;
  this[5].n128_u64[1] = 0;
  this[6].n128_u64[0] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::SceneObject::_default_identifier_;
  this[7].n128_u64[0] = 0;
  this[7].n128_u8[8] = 0;
  this[8].n128_u64[0] = 0;
  this[6].n128_u32[2] = 1065353216;
  this[1] = result;
  this[8].n128_u32[2] = 0;
  return result;
}

