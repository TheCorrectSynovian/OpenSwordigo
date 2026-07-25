/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302774
 * Mangled: _ZN5Caver5Proto15SpriteComponent10SharedCtorEv
 * Demangled: Caver::Proto::SpriteComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000302774 string=0x0000000000302778 ""
 *   insn=0x0000000000302778 string=0x000000000030277C ""
 *   insn=0x0000000000302780 string=0x0000000000302784 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpriteComponent::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::SpriteComponent::_default_texture_name_;
  return this;
}

