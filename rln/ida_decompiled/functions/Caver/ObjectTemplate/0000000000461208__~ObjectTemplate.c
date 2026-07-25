/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000461208
 * Mangled: _ZN5Caver14ObjectTemplateD0Ev
 * Demangled: Caver::ObjectTemplate::~ObjectTemplate()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAA20  Caver::SceneObject::~SceneObject()
 *   0x0000000000461240  Caver::PointLightManager::PointLightManager(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000461218 string=0x00000000001FAA20 "0'"
 *   insn=0x0000000000461224 string=0x0000000000461228 ""X"
 *   insn=0x0000000000461228 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectTemplate::~ObjectTemplate(Caver::ObjectTemplate *this)
{
  Caver::SceneObject::~SceneObject(this);
  operator delete(this);
}

