/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6210
 * Mangled: ._ZN5Caver12BindingValue16ValueWithVector2ERKNS_7Vector2E
 * Demangled: Caver::BindingValue::ValueWithVector2(Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x000000000028E1D0  Caver::SkillComponent::ValueForBindedProperty(int)
 *   0x000000000028E1F4  `non-virtual thunk to'Caver::SkillComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000487C58  Caver::BindingValue::ValueWithVector2(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6218 string=0x00000000001F621C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BindingValue::ValueWithVector2(Caver::BindingValue *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver12BindingValue16ValueWithVector2ERKNS_7Vector2E(this, a2);
}

