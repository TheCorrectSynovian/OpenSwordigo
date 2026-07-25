/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCC90
 * Mangled: ._ZN5Caver11SceneObject6UpdateEfbb
 * Demangled: Caver::SceneObject::Update(float,bool,bool)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x0000000000474910  Caver::SceneObject::Update(float,bool,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCC98 string=0x00000000001FCC9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::Update(Caver::SceneObject *this, float a2, bool a3, bool a4)
{
  return _ZN5Caver11SceneObject6UpdateEfbb(this, a2, a3, a4);
}

