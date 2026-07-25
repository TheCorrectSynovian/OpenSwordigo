/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200FE0
 * Mangled: ._ZN5Caver14SceneGridLayer5ResetEv
 * Demangled: Caver::SceneGridLayer::Reset(void)
 *
 * Callers: 2
 *   0x000000000046D734  Caver::SceneGridLayer::~SceneGridLayer()
 *   0x000000000046D924  Caver::SceneGridLayer::Init(Caver::Rectangle const&,float,float,float,float)
 *
 * Callees: 1
 *   0x000000000046D830  Caver::SceneGridLayer::Reset(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200FE8 string=0x0000000000200FEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridLayer::Reset(Caver::SceneGridLayer *this)
{
  return _ZN5Caver14SceneGridLayer5ResetEv(this);
}

