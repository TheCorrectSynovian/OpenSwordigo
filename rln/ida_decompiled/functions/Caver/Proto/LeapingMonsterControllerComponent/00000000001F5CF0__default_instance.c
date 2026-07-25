/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5CF0
 * Mangled: ._ZN5Caver5Proto33LeapingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000298CAC  Caver::LeapingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA6D8  Caver::Proto::LeapingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5CF8 string=0x00000000001F5CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::LeapingMonsterControllerComponent::default_instance(
        Caver::Proto::LeapingMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto33LeapingMonsterControllerComponent16default_instanceEv(this);
}

