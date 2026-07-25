/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB9A0
 * Mangled: ._ZN5Caver5Proto11SceneObjectD2Ev
 * Demangled: Caver::Proto::SceneObject::~SceneObject()
 *
 * Callers: 1
 *   0x00000000002FE4E0  Caver::Proto::SceneObject::~SceneObject()
 *
 * Callees: 1
 *   0x00000000002FE148  Caver::Proto::SceneObject::SceneObject(Caver::Proto::SceneObject const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB9A8 string=0x00000000001FB9AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SceneObject::~SceneObject(Caver::Proto::SceneObject *this)
{
  JUMPOUT(0x2FE23C);
}

