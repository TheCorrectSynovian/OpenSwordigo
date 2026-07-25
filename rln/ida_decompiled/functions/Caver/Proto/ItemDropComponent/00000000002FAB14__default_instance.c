/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAB14
 * Mangled: _ZN5Caver5Proto17ItemDropComponent16default_instanceEv
 * Demangled: Caver::Proto::ItemDropComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F5910  Caver::Proto::ItemDropComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FAB1C string=0x00000000002FAB20 "S"
 *   insn=0x00000000002FAB20 string=0x00000000002FAB24 "s"
 *   insn=0x00000000002FAB24 string=0x00000000002FAB28 "`"
 *   insn=0x00000000002FAB28 string=0x00000000002FAB2C "`"
 *   insn=0x00000000002FAB2C string=0x00000000002FAB30 "H"
 *   insn=0x00000000002FAB30 string=0x00000000002FAB34 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent::default_instance(Caver::Proto::ItemDropComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ItemDropComponent::default_instance_;
  if ( !Caver::Proto::ItemDropComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ItemDropComponent::default_instance_;
  }
  return result;
}

