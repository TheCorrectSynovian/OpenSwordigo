/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6370
 * Mangled: ._ZN5Caver5Proto33GenericMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002972C0  Caver::GenericMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA844  Caver::Proto::GenericMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6378 string=0x00000000001F637C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GenericMonsterControllerComponent::default_instance(
        Caver::Proto::GenericMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto33GenericMonsterControllerComponent16default_instanceEv(this);
}

