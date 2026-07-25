/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8210
 * Mangled: ._ZN5Caver5Proto18TouchableComponent16default_instanceEv
 * Demangled: Caver::Proto::TouchableComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000023F59C  Caver::TouchableComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAAE0  Caver::Proto::TouchableComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8218 string=0x00000000001F821C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::TouchableComponent::default_instance(Caver::Proto::TouchableComponent *this)
{
  return _ZN5Caver5Proto18TouchableComponent16default_instanceEv(this);
}

