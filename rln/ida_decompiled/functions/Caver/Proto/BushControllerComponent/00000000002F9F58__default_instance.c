/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9F58
 * Mangled: _ZN5Caver5Proto23BushControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::BushControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FADB0  Caver::Proto::BushControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9F60 string=0x00000000002F9F64 "S"
 *   insn=0x00000000002F9F64 string=0x00000000002F9F68 "s"
 *   insn=0x00000000002F9F68 string=0x00000000002F9F6C "`"
 *   insn=0x00000000002F9F6C string=0x00000000002F9F70 "`"
 *   insn=0x00000000002F9F70 string=0x00000000002F9F74 "7""
 *   insn=0x00000000002F9F74 string=0x00000000002F9F78 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BushControllerComponent::default_instance(Caver::Proto::BushControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::BushControllerComponent::default_instance_;
  if ( !Caver::Proto::BushControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::BushControllerComponent::default_instance_;
  }
  return result;
}

