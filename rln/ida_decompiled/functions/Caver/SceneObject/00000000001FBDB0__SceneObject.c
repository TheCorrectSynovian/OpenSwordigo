/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBDB0
 * Mangled: ._ZN5Caver11SceneObjectC2Ev_0
 * Demangled: Caver::SceneObject::SceneObject(void)
 *
 * Callers: 2
 *   0x000000000046016C  Caver::ObjectTemplate::ObjectTemplate(void)
 *   0x0000000000460DFC  Caver::ObjectTemplate::TemplateFromObject(std::string const&,Caver::SceneObject *)
 *
 * Callees: 1
 *   0x000000000046ED60  Caver::SceneObject::SceneObject(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBDB8 string=0x00000000001FBDBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::SceneObject(Caver::SceneObject *this)
{
  return _ZN5Caver11SceneObjectC2Ev(this);
}

