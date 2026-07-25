/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003000B4
 * Mangled: _ZN5Caver5Proto11SceneObject8CopyFromERKS1_
 * Demangled: Caver::Proto::SceneObject::CopyFrom(Caver::Proto::SceneObject const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE420  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000003000C8 string=0x00000000003000CC "@"
 *   insn=0x00000000003000D4 string=0x00000000003000D8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const Caver::Proto::SceneObject *__fastcall Caver::Proto::SceneObject::CopyFrom(
        const Caver::Proto::SceneObject *this,
        const Caver::Proto::SceneObject *a2)
{
  Caver::Proto::SceneObject *v3; // x20

  v3 = this;
  if ( a2 != this )
  {
    (*(void (__fastcall **)(const Caver::Proto::SceneObject *))(*(_QWORD *)this + 32LL))(this);
    return (const Caver::Proto::SceneObject *)Caver::Proto::SceneObject::MergeFrom(v3, a2);
  }
  return this;
}

