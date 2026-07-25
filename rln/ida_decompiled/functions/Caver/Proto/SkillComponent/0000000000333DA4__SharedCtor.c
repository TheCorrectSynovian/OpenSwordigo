/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333DA4
 * Mangled: _ZN5Caver5Proto14SkillComponent10SharedCtorEv
 * Demangled: Caver::Proto::SkillComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000333DA8 string=0x0000000000333DAC ""
 *   insn=0x0000000000333DB0 string=0x0000000000333DB4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::SharedCtor(__int64 this)
{
  *(_QWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::SkillComponent::_default_cast_object_template_name_;
  *(_QWORD *)(this + 24) = 0;
  return this;
}

