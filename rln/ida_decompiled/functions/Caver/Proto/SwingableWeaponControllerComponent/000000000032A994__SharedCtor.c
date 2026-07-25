/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032A994
 * Mangled: _ZN5Caver5Proto34SwingableWeaponControllerComponent10SharedCtorEv
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000032A998 string=0x000000000032A99C "\tB"
 *   insn=0x000000000032A9A0 string=0x000000000032A9A4 ")qD"
 *   insn=0x000000000032A9AC string=0x000000000032A9B0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::SwingableWeaponControllerComponent::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u64[1] = 0;
  this[2].n128_u32[0] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::SwingableWeaponControllerComponent::_default_controlling_bone_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::SwingableWeaponControllerComponent::_default_weapon_template_name_;
  this[1] = result;
  return result;
}

