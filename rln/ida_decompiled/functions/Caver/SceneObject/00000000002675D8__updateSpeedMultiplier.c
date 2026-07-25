/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002675D8
 * Mangled: _ZNK5Caver11SceneObject21updateSpeedMultiplierEv
 * Demangled: Caver::SceneObject::updateSpeedMultiplier(void)
 *
 * Callers: 1
 *   0x00000000001F5160  Caver::SceneObject::updateSpeedMultiplier(void)
 *
 * Callees: 1
 *   0x00000000001F5160  Caver::SceneObject::updateSpeedMultiplier(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002675E4 string=0x00000000002675E8 "`"
 *   insn=0x00000000002675EC string=0x0000000000267600 "`B@"
 *   insn=0x00000000002675F0 string=0x00000000002675F4 "aB@"
 *   insn=0x00000000002675F0 string=0x00000000001F5160 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::SceneObject::updateSpeedMultiplier(Caver::SceneObject *this)
{
  Caver::SceneObject *v2; // x0
  float v3; // s0

  v2 = (Caver::SceneObject *)*((_QWORD *)this + 6);
  if ( !v2 )
    return *((float *)this + 16);
  Caver::SceneObject::updateSpeedMultiplier(v2);
  return v3 * *((float *)this + 16);
}

