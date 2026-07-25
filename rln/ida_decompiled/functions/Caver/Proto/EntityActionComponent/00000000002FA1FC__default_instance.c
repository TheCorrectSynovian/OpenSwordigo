/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA1FC
 * Mangled: _ZN5Caver5Proto21EntityActionComponent16default_instanceEv
 * Demangled: Caver::Proto::EntityActionComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000200E80  Caver::Proto::EntityActionComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA204 string=0x00000000002FA208 "S"
 *   insn=0x00000000002FA208 string=0x00000000002FA20C "s"
 *   insn=0x00000000002FA20C string=0x00000000002FA210 "`"
 *   insn=0x00000000002FA210 string=0x00000000002FA214 "`"
 *   insn=0x00000000002FA218 string=0x00000000002FA21C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityActionComponent::default_instance(Caver::Proto::EntityActionComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::EntityActionComponent::default_instance_;
  if ( !Caver::Proto::EntityActionComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::EntityActionComponent::default_instance_;
  }
  return result;
}

