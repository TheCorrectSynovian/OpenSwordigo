/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F98D0
 * Mangled: ._ZN5Caver5Proto18MagicBoltComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicBoltComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000284030  Caver::MagicBoltComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAC24  Caver::Proto::MagicBoltComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F98D8 string=0x00000000001F98DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MagicBoltComponent::default_instance(Caver::Proto::MagicBoltComponent *this)
{
  return _ZN5Caver5Proto18MagicBoltComponent16default_instanceEv(this);
}

