/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAEF0
 * Mangled: ._ZN5Caver23CharControllerComponent12BeginCastingERKN5boost13intrusive_ptrINS_14SkillComponentEEE
 * Demangled: Caver::CharControllerComponent::BeginCasting(boost::intrusive_ptr<Caver::SkillComponent> const&)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x00000000002600A4  Caver::CharControllerComponent::BeginCasting(boost::intrusive_ptr<Caver::SkillComponent> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAEF8 string=0x00000000001FAEFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::BeginCasting(Caver::Component *a1)
{
  return _ZN5Caver23CharControllerComponent12BeginCastingERKN5boost13intrusive_ptrINS_14SkillComponentEEE(a1);
}

