/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA80
 * Mangled: ._ZN5Caver5Proto33protobuf_AddDesc_GameData_2eprotoEv
 * Demangled: Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Callers: 13
 *   0x0000000000206D08  sub_206D08
 *   0x00000000002DBFC4  Caver::Proto::MapNode_Portal::default_instance(void)
 *   0x00000000002DCE38  Caver::Proto::MapNode::default_instance(void)
 *   0x00000000002DE674  Caver::Proto::MapZone::default_instance(void)
 *   0x00000000002DF200  Caver::Proto::Map::default_instance(void)
 *   0x00000000002DFE08  Caver::Proto::Item::default_instance(void)
 *   0x00000000002E0F7C  Caver::Proto::Skill::default_instance(void)
 *   0x00000000002E1E84  Caver::Proto::Quest::default_instance(void)
 *   0x00000000002E2AAC  Caver::Proto::EntityClass::default_instance(void)
 *   0x00000000002E37E0  Caver::Proto::GuideTarget_LevelObject::default_instance(void)
 *   0x00000000002E4424  Caver::Proto::GuideTarget::default_instance(void)
 *   0x00000000002E57CC  Caver::Proto::GameOptions::default_instance(void)
 *   0x00000000002E6CA8  Caver::Proto::GameData::default_instance(void)
 *
 * Callees: 1
 *   0x00000000002DB544  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FBA84 string=0x00000000002DB544 "h "
 *   insn=0x00000000001FBA88 string=0x00000000001FBA8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::protobuf_AddDesc_GameData_2eproto(Caver::Proto *this)
{
  return _ZN5Caver5Proto33protobuf_AddDesc_GameData_2eprotoEv(this);
}

