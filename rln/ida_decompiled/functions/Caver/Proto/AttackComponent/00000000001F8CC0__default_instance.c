/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8CC0
 * Mangled: ._ZN5Caver5Proto15AttackComponent16default_instanceEv
 * Demangled: Caver::Proto::AttackComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000290EE0  Caver::AttackComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA6A4  Caver::Proto::AttackComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8CC8 string=0x00000000001F8CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::AttackComponent::default_instance(Caver::Proto::AttackComponent *this)
{
  return _ZN5Caver5Proto15AttackComponent16default_instanceEv(this);
}

