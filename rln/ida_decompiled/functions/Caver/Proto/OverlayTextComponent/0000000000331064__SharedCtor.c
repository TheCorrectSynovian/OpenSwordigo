/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331064
 * Mangled: _ZN5Caver5Proto20OverlayTextComponent10SharedCtorEv
 * Demangled: Caver::Proto::OverlayTextComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000033106C string=0x0000000000331070 "\tG"
 *   insn=0x0000000000331070 string=0x0000000000331074 ")"
 *   insn=0x0000000000331078 string=0x000000000033107C "|"
 *   insn=0x000000000033107C string=0x0000000000331080 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OverlayTextComponent::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::OverlayTextComponent::_default_text_;
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = &Caver::Proto::OverlayTextComponent::_default_sprite_name_;
  *(_QWORD *)(this + 40) = 0;
  return this;
}

