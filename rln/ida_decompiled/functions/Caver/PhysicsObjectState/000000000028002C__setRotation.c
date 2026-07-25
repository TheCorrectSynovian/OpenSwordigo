/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028002C
 * Mangled: _ZN5Caver18PhysicsObjectState11setRotationEf
 * Demangled: Caver::PhysicsObjectState::setRotation(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Referenced strings: 10
 *   insn=0x0000000000280038 string=0x000000000028003C ""
 *   insn=0x0000000000280040 string=0x0000000000280044 "a"
 *   insn=0x0000000000280048 string=0x000000000028004C "!"
 *   insn=0x000000000028004C string=0x0000000000280050 "  ""
 *   insn=0x0000000000280050 string=0x0000000000280054 ""
 *   insn=0x0000000000280054 string=0x0000000000280058 "h"
 *   insn=0x0000000000280058 string=0x000000000028005C "`"
 *   insn=0x0000000000280064 string=0x0000000000280068 "N"
 *   insn=0x0000000000280068 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028006C string=0x0000000000280070 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::PhysicsObjectState::setRotation(__int64 *this, float a2)
{
  __int64 v2; // x19
  int v3; // w8

  v2 = *this;
  if ( fabsf(a2 - *(float *)(*this + 128)) > 0.0001 )
  {
    v3 = *(unsigned __int8 *)(v2 + 180);
    *(float *)(v2 + 128) = a2;
    if ( !v3 )
    {
      this = (__int64 *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v2);
      *(_BYTE *)(v2 + 180) = 1;
    }
  }
  return this;
}

