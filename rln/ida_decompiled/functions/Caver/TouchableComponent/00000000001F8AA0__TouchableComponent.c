/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8AA0
 * Mangled: ._ZN5Caver18TouchableComponentC2Ev
 * Demangled: Caver::TouchableComponent::TouchableComponent(void)
 *
 * Callers: 3
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x000000000023D4BC  Caver::TextBubbleComponent::SetHandleTouches(bool)
 *   0x0000000000250578  Caver::TouchableComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000023F3A8  Caver::TouchableComponent::TouchableComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8AA8 string=0x00000000001F8AAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TouchableComponent::TouchableComponent(Caver::TouchableComponent *this)
{
  return _ZN5Caver18TouchableComponentC2Ev(this);
}

