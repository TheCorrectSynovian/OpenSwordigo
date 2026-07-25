/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA468
 * Mangled: _ZN5Caver5Proto20FireEmitterComponent16default_instanceEv
 * Demangled: Caver::Proto::FireEmitterComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000203340  Caver::Proto::FireEmitterComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA470 string=0x00000000002FA474 "s"
 *   insn=0x00000000002FA474 string=0x00000000002FA478 "s"
 *   insn=0x00000000002FA478 string=0x00000000002FA47C "`"
 *   insn=0x00000000002FA47C string=0x00000000002FA480 "`"
 *   insn=0x00000000002FA484 string=0x00000000002FA488 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireEmitterComponent::default_instance(Caver::Proto::FireEmitterComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::FireEmitterComponent::default_instance_;
  if ( !Caver::Proto::FireEmitterComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::FireEmitterComponent::default_instance_;
  }
  return result;
}

