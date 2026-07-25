/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200AF0
 * Mangled: ._ZN5Caver11SceneObject22ValueForBindedPropertyEi
 * Demangled: Caver::SceneObject::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000472358  Caver::SceneObject::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000472358  Caver::SceneObject::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200AF8 string=0x0000000000200AFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::ValueForBindedProperty(Caver::SceneObject *this, int a2)
{
  return _ZN5Caver11SceneObject22ValueForBindedPropertyEi(this, a2);
}

