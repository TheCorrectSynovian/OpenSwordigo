/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002036D0
 * Mangled: ._ZN5Caver5Proto8DateTime16default_instanceEv
 * Demangled: Caver::Proto::DateTime::default_instance(void)
 *
 * Callers: 2
 *   0x00000000002E85A0  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *   0x00000000002E8A08  Caver::Proto::PlayerProfile::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002CDE4C  Caver::Proto::DateTime::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002036D8 string=0x00000000002036DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::DateTime::default_instance(Caver::Proto::DateTime *this)
{
  return _ZN5Caver5Proto8DateTime16default_instanceEv(this);
}

