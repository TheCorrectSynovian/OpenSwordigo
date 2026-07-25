/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF770
 * Mangled: ._ZN5Caver18TouchableComponent7TriggerEv
 * Demangled: Caver::TouchableComponent::Trigger(void)
 *
 * Callers: 2
 *   0x000000000023FC5C  Caver::TouchableComponent::RegisterLibrary(void)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000023FDA0  Caver::TouchableComponent::Trigger(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF778 string=0x00000000001FF77C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TouchableComponent::Trigger(Caver::TouchableComponent *this)
{
  return _ZN5Caver18TouchableComponent7TriggerEv(this);
}

