/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA650
 * Mangled: _ZN5Caver5Proto34SnappingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FBD60  Caver::Proto::SnappingMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA658 string=0x00000000002FA65C "s"
 *   insn=0x00000000002FA65C string=0x00000000002FA660 "s"
 *   insn=0x00000000002FA660 string=0x00000000002FA664 "`"
 *   insn=0x00000000002FA664 string=0x00000000002FA668 "`"
 *   insn=0x00000000002FA668 string=0x00000000002FA66C "y "
 *   insn=0x00000000002FA66C string=0x00000000002FA670 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SnappingMonsterControllerComponent::default_instance(
        Caver::Proto::SnappingMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SnappingMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::SnappingMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SnappingMonsterControllerComponent::default_instance_;
  }
  return result;
}

