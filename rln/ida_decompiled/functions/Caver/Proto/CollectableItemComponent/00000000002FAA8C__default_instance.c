/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAA8C
 * Mangled: _ZN5Caver5Proto24CollectableItemComponent16default_instanceEv
 * Demangled: Caver::Proto::CollectableItemComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FB160  Caver::Proto::CollectableItemComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FAA94 string=0x00000000002FAA98 "S"
 *   insn=0x00000000002FAA98 string=0x00000000002FAA9C "s"
 *   insn=0x00000000002FAA9C string=0x00000000002FAAA0 "`"
 *   insn=0x00000000002FAAA0 string=0x00000000002FAAA4 "`"
 *   insn=0x00000000002FAAA4 string=0x00000000002FAAA8 "j"
 *   insn=0x00000000002FAAA8 string=0x00000000002FAAAC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollectableItemComponent::default_instance(
        Caver::Proto::CollectableItemComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::CollectableItemComponent::default_instance_;
  if ( !Caver::Proto::CollectableItemComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::CollectableItemComponent::default_instance_;
  }
  return result;
}

