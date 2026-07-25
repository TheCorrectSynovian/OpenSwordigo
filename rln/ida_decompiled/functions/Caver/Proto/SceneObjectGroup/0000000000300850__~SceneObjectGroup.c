/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000300850
 * Mangled: _ZN5Caver5Proto16SceneObjectGroupD0Ev
 * Demangled: Caver::Proto::SceneObjectGroup::~SceneObjectGroup()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203DB0  Caver::Proto::SceneObjectGroup::~SceneObjectGroup()
 *   0x0000000000300888  Caver::Proto::SceneObjectGroup::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x000000000030085C string=0x0000000000300860 "T"
 *   insn=0x0000000000300870 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SceneObjectGroup::~SceneObjectGroup(Caver::Proto::SceneObjectGroup *this)
{
  Caver::Proto::SceneObjectGroup::~SceneObjectGroup(this);
  operator delete(this);
}

