/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203DB0
 * Mangled: ._ZN5Caver5Proto16SceneObjectGroupD2Ev
 * Demangled: Caver::Proto::SceneObjectGroup::~SceneObjectGroup()
 *
 * Callers: 1
 *   0x0000000000300850  Caver::Proto::SceneObjectGroup::~SceneObjectGroup()
 *
 * Callees: 1
 *   0x0000000000300304  Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203DB8 string=0x0000000000203DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SceneObjectGroup::~SceneObjectGroup(Caver::Proto::SceneObjectGroup *this)
{
  JUMPOUT(0x3005A8);
}

