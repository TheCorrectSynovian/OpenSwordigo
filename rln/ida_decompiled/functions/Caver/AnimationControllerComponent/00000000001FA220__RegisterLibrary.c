/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA220
 * Mangled: ._ZN5Caver28AnimationControllerComponent15RegisterLibraryEv
 * Demangled: Caver::AnimationControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000021C984  Caver::AnimationControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000021C984  Caver::AnimationControllerComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA228 string=0x00000000001FA22C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AnimationControllerComponent::RegisterLibrary(Caver::AnimationControllerComponent *this)
{
  JUMPOUT(0x21CA68);
}

