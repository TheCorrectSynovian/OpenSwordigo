/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA54C
 * Mangled: _ZN5Caver5Proto24OrbitControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::OrbitControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F5970  Caver::Proto::OrbitControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA554 string=0x00000000002FA558 "s"
 *   insn=0x00000000002FA558 string=0x00000000002FA55C "s~D"
 *   insn=0x00000000002FA55C string=0x00000000002FA560 "`"
 *   insn=0x00000000002FA560 string=0x00000000002FA564 "`"
 *   insn=0x00000000002FA568 string=0x00000000002FA56C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OrbitControllerComponent::default_instance(
        Caver::Proto::OrbitControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::OrbitControllerComponent::default_instance_;
  if ( !Caver::Proto::OrbitControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::OrbitControllerComponent::default_instance_;
  }
  return result;
}

