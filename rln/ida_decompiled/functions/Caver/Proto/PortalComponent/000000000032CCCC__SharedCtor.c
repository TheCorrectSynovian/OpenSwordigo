/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032CCCC
 * Mangled: _ZN5Caver5Proto15PortalComponent10SharedCtorEv
 * Demangled: Caver::Proto::PortalComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000032CCD0 string=0x000000000032CCD4 "5E"
 *   insn=0x000000000032CCD8 string=0x000000000032CCDC ")QA"
 *   insn=0x000000000032CCE8 string=0x000000000032CCEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::PortalComponent::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u64[1] = 0;
  this[2].n128_u8[0] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::PortalComponent::_default_destination_scene_name_;
  this[2].n128_u32[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::PortalComponent::_default_spawn_point_name_;
  this[1] = result;
  return result;
}

