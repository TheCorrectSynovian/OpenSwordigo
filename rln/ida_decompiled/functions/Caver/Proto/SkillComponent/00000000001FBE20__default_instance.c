/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBE20
 * Mangled: ._ZN5Caver5Proto14SkillComponent16default_instanceEv
 * Demangled: Caver::Proto::SkillComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000028DC80  Caver::SkillComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FACCC  Caver::Proto::SkillComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBE28 string=0x00000000001FBE2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SkillComponent::default_instance(Caver::Proto::SkillComponent *this)
{
  return _ZN5Caver5Proto14SkillComponent16default_instanceEv(this);
}

