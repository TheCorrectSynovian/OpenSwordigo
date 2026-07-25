/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9C84
 * Mangled: _ZN5Caver5Proto15DamageComponent16default_instanceEv
 * Demangled: Caver::Proto::DamageComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FCCE0  Caver::Proto::DamageComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9C8C string=0x00000000002F9C90 "s"
 *   insn=0x00000000002F9C90 string=0x00000000002F9C94 "sZ@"
 *   insn=0x00000000002F9C94 string=0x00000000002F9C98 "`"
 *   insn=0x00000000002F9C98 string=0x00000000002F9C9C "`"
 *   insn=0x00000000002F9CA0 string=0x00000000002F9CA4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DamageComponent::default_instance(Caver::Proto::DamageComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::DamageComponent::default_instance_;
  if ( !Caver::Proto::DamageComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::DamageComponent::default_instance_;
  }
  return result;
}

