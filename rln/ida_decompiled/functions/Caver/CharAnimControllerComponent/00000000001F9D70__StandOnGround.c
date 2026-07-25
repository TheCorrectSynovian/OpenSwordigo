/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D70
 * Mangled: ._ZN5Caver27CharAnimControllerComponent13StandOnGroundEv
 * Demangled: Caver::CharAnimControllerComponent::StandOnGround(void)
 *
 * Callers: 1
 *   0x000000000025DC80  Caver::CharControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002579BC  Caver::CharAnimControllerComponent::StandOnGround(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9D74 string=0x00000000002579BC ""
 *   insn=0x00000000001F9D78 string=0x00000000001F9D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::StandOnGround(Caver::CharAnimControllerComponent *this)
{
  return _ZN5Caver27CharAnimControllerComponent13StandOnGroundEv(this);
}

