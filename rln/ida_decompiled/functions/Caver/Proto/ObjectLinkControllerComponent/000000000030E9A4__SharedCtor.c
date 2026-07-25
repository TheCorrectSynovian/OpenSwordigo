/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E9A4
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponent10SharedCtorEv
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000030E9A8 string=0x000000000030E9AC ""
 *   insn=0x000000000030E9B0 string=0x000000000030E9B4 ")"
 *   insn=0x000000000030E9C0 string=0x000000000030E9C4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::ObjectLinkControllerComponent::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u64[0] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::ObjectLinkControllerComponent::_default_target_object_identifier_;
  this[2].n128_u64[0] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::ObjectLinkControllerComponent::_default_target_bone_identifier_;
  this[1] = result;
  this[3].n128_u32[2] = 0;
  return result;
}

