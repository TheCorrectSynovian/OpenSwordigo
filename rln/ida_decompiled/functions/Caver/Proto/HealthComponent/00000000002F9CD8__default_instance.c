/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9CD8
 * Mangled: _ZN5Caver5Proto15HealthComponent16default_instanceEv
 * Demangled: Caver::Proto::HealthComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002017D0  Caver::Proto::HealthComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9CE0 string=0x00000000002F9CE4 "s"
 *   insn=0x00000000002F9CE4 string=0x00000000002F9CE8 "s"
 *   insn=0x00000000002F9CE8 string=0x00000000002F9CEC "`"
 *   insn=0x00000000002F9CEC string=0x00000000002F9CF0 "`"
 *   insn=0x00000000002F9CF4 string=0x00000000002F9CF8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HealthComponent::default_instance(Caver::Proto::HealthComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::HealthComponent::default_instance_;
  if ( !Caver::Proto::HealthComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::HealthComponent::default_instance_;
  }
  return result;
}

