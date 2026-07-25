/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA6D8
 * Mangled: _ZN5Caver5Proto33LeapingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F5CF0  Caver::Proto::LeapingMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA6E0 string=0x00000000002FA6E4 "S"
 *   insn=0x00000000002FA6E4 string=0x00000000002FA6E8 "s:A"
 *   insn=0x00000000002FA6E8 string=0x00000000002FA6EC "`"
 *   insn=0x00000000002FA6EC string=0x00000000002FA6F0 "`"
 *   insn=0x00000000002FA6F0 string=0x00000000002FA6F4 "W "
 *   insn=0x00000000002FA6F4 string=0x00000000002FA6F8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LeapingMonsterControllerComponent::default_instance(
        Caver::Proto::LeapingMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::LeapingMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::LeapingMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::LeapingMonsterControllerComponent::default_instance_;
  }
  return result;
}

