/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAAE0
 * Mangled: _ZN5Caver5Proto18TouchableComponent16default_instanceEv
 * Demangled: Caver::Proto::TouchableComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F8210  Caver::Proto::TouchableComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FAAE8 string=0x00000000002FAAEC "S"
 *   insn=0x00000000002FAAEC string=0x00000000002FAAF0 "s"
 *   insn=0x00000000002FAAF0 string=0x00000000002FAAF4 "`"
 *   insn=0x00000000002FAAF4 string=0x00000000002FAAF8 "`"
 *   insn=0x00000000002FAAF8 string=0x00000000002FAAFC "U"
 *   insn=0x00000000002FAAFC string=0x00000000002FAB00 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TouchableComponent::default_instance(Caver::Proto::TouchableComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::TouchableComponent::default_instance_;
  if ( !Caver::Proto::TouchableComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::TouchableComponent::default_instance_;
  }
  return result;
}

