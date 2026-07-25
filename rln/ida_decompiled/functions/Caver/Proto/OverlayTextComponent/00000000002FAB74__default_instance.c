/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAB74
 * Mangled: _ZN5Caver5Proto20OverlayTextComponent16default_instanceEv
 * Demangled: Caver::Proto::OverlayTextComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F8870  Caver::Proto::OverlayTextComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FAB7C string=0x00000000002FAB80 "s"
 *   insn=0x00000000002FAB80 string=0x00000000002FAB84 "s"
 *   insn=0x00000000002FAB84 string=0x00000000002FAB88 "`"
 *   insn=0x00000000002FAB88 string=0x00000000002FAB8C "`"
 *   insn=0x00000000002FAB8C string=0x00000000002FAB90 "0"
 *   insn=0x00000000002FAB90 string=0x00000000002FAB94 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OverlayTextComponent::default_instance(Caver::Proto::OverlayTextComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::OverlayTextComponent::default_instance_;
  if ( !Caver::Proto::OverlayTextComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::OverlayTextComponent::default_instance_;
  }
  return result;
}

