/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FF78
 * Mangled: _ZN5Caver18PhysicsObjectState11setPositionERKNS_7Vector2E
 * Demangled: Caver::PhysicsObjectState::setPosition(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Referenced strings: 20
 *   insn=0x000000000027FF84 string=0x000000000027FF88 " "
 *   insn=0x000000000027FF88 string=0x000000000027FF8C "("
 *   insn=0x000000000027FF90 string=0x000000000027FF94 "ar@"
 *   insn=0x000000000027FF98 string=0x000000000027FF9C "!"
 *   insn=0x000000000027FF9C string=0x000000000027FFA0 "  ""
 *   insn=0x000000000027FFA4 string=0x000000000027FFA8 ")"
 *   insn=0x000000000027FFA8 string=0x000000000027FFAC "h"
 *   insn=0x000000000027FFAC string=0x000000000027FFB0 "\t"
 *   insn=0x000000000027FFB0 string=0x000000000027FFD4 "`r"
 *   insn=0x000000000027FFB4 string=0x000000000027FFB8 "!"
 *   insn=0x000000000027FFBC string=0x000000000027FFC0 "#8#"
 *   insn=0x000000000027FFC0 string=0x000000000027FFC4 "c"
 *   insn=0x000000000027FFC4 string=0x000000000027FFC8 "` ""
 *   insn=0x000000000027FFC8 string=0x000000000027FFCC "I"
 *   insn=0x000000000027FFCC string=0x000000000027FFD0 ")"
 *   insn=0x000000000027FFD4 string=0x000000000027FFD8 "\t"
 *   insn=0x000000000027FFD8 string=0x000000000027FFDC "h"
 *   insn=0x000000000027FFE4 string=0x000000000027FFE8 "n"
 *   insn=0x000000000027FFE8 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000027FFEC string=0x000000000027FFF0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::PhysicsObjectState::setPosition(__int64 *this, const Caver::Vector2 *a2)
{
  __int64 v2; // x19
  int v3; // w9
  _DWORD *v4; // x8

  v2 = *this;
  if ( fabsf(*(float *)a2 - *(float *)(*this + 112)) <= 0.0001 )
  {
    v4 = (_DWORD *)(v2 + 116);
    if ( fabsf(*((float *)a2 + 1) - *(float *)(v2 + 116)) <= 0.0001 )
      return this;
    v3 = *((_DWORD *)a2 + 1);
  }
  else
  {
    v3 = *((_DWORD *)a2 + 1);
    v4 = (_DWORD *)(v2 + 116);
  }
  *(_DWORD *)(v2 + 112) = *(_DWORD *)a2;
  *v4 = v3;
  if ( !*(_BYTE *)(v2 + 180) )
  {
    this = (__int64 *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v2);
    *(_BYTE *)(v2 + 180) = 1;
  }
  return this;
}

