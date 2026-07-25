/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA1A8
 * Mangled: _ZN5Caver5Proto25EntityControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::EntityControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FA6E0  Caver::Proto::EntityControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA1B0 string=0x00000000002FA1B4 "s"
 *   insn=0x00000000002FA1B4 string=0x00000000002FA1B8 "s"
 *   insn=0x00000000002FA1B8 string=0x00000000002FA1BC "`"
 *   insn=0x00000000002FA1BC string=0x00000000002FA1C0 "`"
 *   insn=0x00000000002FA1C4 string=0x00000000002FA1C8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityControllerComponent::default_instance(
        Caver::Proto::EntityControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::EntityControllerComponent::default_instance_;
  if ( !Caver::Proto::EntityControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::EntityControllerComponent::default_instance_;
  }
  return result;
}

