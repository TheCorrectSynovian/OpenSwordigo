/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE1B0
 * Mangled: ._ZN5Caver5Proto11SceneObject10SharedDtorEv
 * Demangled: Caver::Proto::SceneObject::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002FE148  Caver::Proto::SceneObject::SceneObject(Caver::Proto::SceneObject const&)
 *
 * Callees: 1
 *   0x00000000002FE148  Caver::Proto::SceneObject::SceneObject(Caver::Proto::SceneObject const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE1B8 string=0x00000000001FE1BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SceneObject::SharedDtor(Caver::Proto::SceneObject *this)
{
  JUMPOUT(0x2FE344);
}

