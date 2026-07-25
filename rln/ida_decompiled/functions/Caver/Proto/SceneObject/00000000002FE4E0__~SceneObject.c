/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FE4E0
 * Mangled: _ZN5Caver5Proto11SceneObjectD0Ev
 * Demangled: Caver::Proto::SceneObject::~SceneObject()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB9A0  Caver::Proto::SceneObject::~SceneObject()
 *   0x00000000002FE518  Caver::Proto::SceneObject::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002FE4EC string=0x00000000002FE4F0 ","
 *   insn=0x00000000002FE4F0 string=0x00000000001FB9A0 "0'"
 *   insn=0x00000000002FE4FC string=0x00000000002FE500 "l"
 *   insn=0x00000000002FE500 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002FE508 string=0x00000000002FE50C "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SceneObject::~SceneObject(Caver::Proto::SceneObject *this)
{
  Caver::Proto::SceneObject::~SceneObject(this);
  operator delete(this);
}

