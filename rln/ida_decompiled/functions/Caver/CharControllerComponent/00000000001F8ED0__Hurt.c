/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8ED0
 * Mangled: ._ZN5Caver23CharControllerComponent4HurtEv
 * Demangled: Caver::CharControllerComponent::Hurt(void)
 *
 * Callers: 2
 *   0x000000000025DC80  Caver::CharControllerComponent::HandleMessage(int,void *)
 *   0x00000000003505A8  Caver::GameSceneView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000025E040  Caver::CharControllerComponent::Hurt(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8ED8 string=0x00000000001F8EDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::Hurt(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent4HurtEv(this);
}

