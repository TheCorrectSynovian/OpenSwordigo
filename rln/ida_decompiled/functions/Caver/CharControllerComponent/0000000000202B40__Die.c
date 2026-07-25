/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202B40
 * Mangled: ._ZN5Caver23CharControllerComponent3DieEv
 * Demangled: Caver::CharControllerComponent::Die(void)
 *
 * Callers: 2
 *   0x000000000025DC80  Caver::CharControllerComponent::HandleMessage(int,void *)
 *   0x00000000003505A8  Caver::GameSceneView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000025E468  Caver::CharControllerComponent::Die(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202B48 string=0x0000000000202B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::Die(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent3DieEv(this);
}

