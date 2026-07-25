/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303F10
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponent10SharedCtorEv
 * Demangled: Caver::Proto::KeyframeAnimationComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000303F10 string=0x0000000000303F14 ""
 *   insn=0x0000000000303F14 string=0x0000000000303F18 "ID"
 *   insn=0x0000000000303F20 string=0x0000000000303F24 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::SharedCtor(__int64 this)
{
  *(_QWORD *)(this + 8) = 0;
  *(_WORD *)(this + 24) = 0;
  *(_QWORD *)(this + 28) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::KeyframeAnimationComponent::_default_name_;
  return this;
}

