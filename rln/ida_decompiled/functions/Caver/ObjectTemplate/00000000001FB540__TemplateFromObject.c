/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB540
 * Mangled: ._ZN5Caver14ObjectTemplate18TemplateFromObjectERKSsPNS_11SceneObjectE
 * Demangled: Caver::ObjectTemplate::TemplateFromObject(std::string const&,Caver::SceneObject *)
 *
 * Callers: 1
 *   0x000000000046FE44  Caver::SceneObject::Templatize(std::string const&)
 *
 * Callees: 1
 *   0x0000000000460DFC  Caver::ObjectTemplate::TemplateFromObject(std::string const&,Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB548 string=0x00000000001FB54C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ObjectTemplate::TemplateFromObject()
{
  return _ZN5Caver14ObjectTemplate18TemplateFromObjectERKSsPNS_11SceneObjectE();
}

