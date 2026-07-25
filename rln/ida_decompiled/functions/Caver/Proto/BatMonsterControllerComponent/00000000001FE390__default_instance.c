/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE390
 * Mangled: ._ZN5Caver5Proto29BatMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::BatMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000293438  Caver::BatMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA7A8  Caver::Proto::BatMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE398 string=0x00000000001FE39C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::BatMonsterControllerComponent::default_instance(
        Caver::Proto::BatMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto29BatMonsterControllerComponent16default_instanceEv(this);
}

