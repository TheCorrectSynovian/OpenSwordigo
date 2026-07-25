/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA880
 * Mangled: ._ZN5Caver5Proto11SceneObject5ClearEv
 * Demangled: Caver::Proto::SceneObject::Clear(void)
 *
 * Callers: 1
 *   0x00000000002FBFF0  Caver::Proto::ObjectTemplate::Clear(void)
 *
 * Callees: 1
 *   0x00000000002FC030  Caver::Proto::SceneObject::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA888 string=0x00000000001FA88C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SceneObject::Clear(Caver::Proto::SceneObject *this)
{
  return _ZN5Caver5Proto11SceneObject5ClearEv(this);
}

