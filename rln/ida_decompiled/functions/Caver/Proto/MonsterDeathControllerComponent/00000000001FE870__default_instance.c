/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE870
 * Mangled: ._ZN5Caver5Proto31MonsterDeathControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000299F88  Caver::MonsterDeathControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA810  Caver::Proto::MonsterDeathControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE878 string=0x00000000001FE87C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MonsterDeathControllerComponent::default_instance(
        Caver::Proto::MonsterDeathControllerComponent *this)
{
  return _ZN5Caver5Proto31MonsterDeathControllerComponent16default_instanceEv(this);
}

