/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA230
 * Mangled: _ZN5Caver5Proto24PhysicsPlatformComponent16default_instanceEv
 * Demangled: Caver::Proto::PhysicsPlatformComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F6620  Caver::Proto::PhysicsPlatformComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA238 string=0x00000000002FA23C "S"
 *   insn=0x00000000002FA23C string=0x00000000002FA240 "sRF"
 *   insn=0x00000000002FA240 string=0x00000000002FA244 "`"
 *   insn=0x00000000002FA244 string=0x00000000002FA248 "`"
 *   insn=0x00000000002FA24C string=0x00000000002FA250 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsPlatformComponent::default_instance(
        Caver::Proto::PhysicsPlatformComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::PhysicsPlatformComponent::default_instance_;
  if ( !Caver::Proto::PhysicsPlatformComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::PhysicsPlatformComponent::default_instance_;
  }
  return result;
}

