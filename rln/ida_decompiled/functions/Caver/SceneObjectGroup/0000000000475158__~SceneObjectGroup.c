/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000475158
 * Mangled: _ZN5Caver16SceneObjectGroupD0Ev
 * Demangled: Caver::SceneObjectGroup::~SceneObjectGroup()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4520  Caver::SceneObjectGroup::~SceneObjectGroup()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000475190  Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000475168 string=0x00000000001F4520 "P'"
 *   insn=0x0000000000475174 string=0x0000000000475178 "N"
 *   insn=0x0000000000475178 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000475180 string=0x0000000000475184 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObjectGroup::~SceneObjectGroup(Caver::SceneObjectGroup *this)
{
  Caver::SceneObjectGroup::~SceneObjectGroup(this);
  operator delete(this);
}

