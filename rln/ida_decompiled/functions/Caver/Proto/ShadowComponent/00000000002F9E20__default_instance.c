/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9E20
 * Mangled: _ZN5Caver5Proto15ShadowComponent16default_instanceEv
 * Demangled: Caver::Proto::ShadowComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F6F50  Caver::Proto::ShadowComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9E28 string=0x00000000002F9E2C "s"
 *   insn=0x00000000002F9E2C string=0x00000000002F9E30 "s.A"
 *   insn=0x00000000002F9E30 string=0x00000000002F9E34 "`"
 *   insn=0x00000000002F9E34 string=0x00000000002F9E38 "`"
 *   insn=0x00000000002F9E3C string=0x00000000002F9E40 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShadowComponent::default_instance(Caver::Proto::ShadowComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ShadowComponent::default_instance_;
  if ( !Caver::Proto::ShadowComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ShadowComponent::default_instance_;
  }
  return result;
}

