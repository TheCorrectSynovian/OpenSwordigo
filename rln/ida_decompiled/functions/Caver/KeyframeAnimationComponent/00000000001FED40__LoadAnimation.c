/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FED40
 * Mangled: ._ZN5Caver26KeyframeAnimationComponent13LoadAnimationEv
 * Demangled: Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *
 * Callers: 4
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x0000000000220E74  Caver::KeyframeAnimationComponent::ValueForBindedProperty(int)
 *   0x00000000002B2D44  Caver::DoorControllerComponent::SetOpen(bool)
 *   0x00000000002CA0A8  Caver::SwingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FED48 string=0x00000000001FED4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::KeyframeAnimationComponent::LoadAnimation(Caver::KeyframeAnimationComponent *this)
{
  return _ZN5Caver26KeyframeAnimationComponent13LoadAnimationEv(this);
}

