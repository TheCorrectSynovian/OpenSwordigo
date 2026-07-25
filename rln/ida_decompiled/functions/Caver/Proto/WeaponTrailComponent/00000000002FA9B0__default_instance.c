/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA9B0
 * Mangled: _ZN5Caver5Proto20WeaponTrailComponent16default_instanceEv
 * Demangled: Caver::Proto::WeaponTrailComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F7360  Caver::Proto::WeaponTrailComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA9B8 string=0x00000000002FA9BC "S"
 *   insn=0x00000000002FA9BC string=0x00000000002FA9C0 "s"
 *   insn=0x00000000002FA9C0 string=0x00000000002FA9C4 "`"
 *   insn=0x00000000002FA9C4 string=0x00000000002FA9C8 "`"
 *   insn=0x00000000002FA9CC string=0x00000000002FA9D0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponTrailComponent::default_instance(Caver::Proto::WeaponTrailComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::WeaponTrailComponent::default_instance_;
  if ( !Caver::Proto::WeaponTrailComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::WeaponTrailComponent::default_instance_;
  }
  return result;
}

