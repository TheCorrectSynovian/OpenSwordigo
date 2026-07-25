/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA120
 * Mangled: _ZN5Caver5Proto22PhysicsObjectComponent16default_instanceEv
 * Demangled: Caver::Proto::PhysicsObjectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FA9A0  Caver::Proto::PhysicsObjectComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA128 string=0x00000000002FA12C "S"
 *   insn=0x00000000002FA12C string=0x00000000002FA130 "s"
 *   insn=0x00000000002FA130 string=0x00000000002FA134 "`"
 *   insn=0x00000000002FA134 string=0x00000000002FA138 "`"
 *   insn=0x00000000002FA13C string=0x00000000002FA140 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsObjectComponent::default_instance(Caver::Proto::PhysicsObjectComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::PhysicsObjectComponent::default_instance_;
  if ( !Caver::Proto::PhysicsObjectComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::PhysicsObjectComponent::default_instance_;
  }
  return result;
}

