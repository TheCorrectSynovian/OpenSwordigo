/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002150AC
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent20UpdateCollisionShapeEv
 * Demangled: Caver::BoneControlledCollisionShapeComponent::UpdateCollisionShape(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEDF0  Caver::CollisionShapeComponent::UpdateCollisionShape(void)
 *
 * Referenced strings: 16
 *   insn=0x00000000002150BC string=0x00000000002150C0 "L"
 *   insn=0x00000000002150C0 string=0x00000000002150C4 "h"
 *   insn=0x00000000002150C4 string=0x00000000002150C8 "i"
 *   insn=0x00000000002150C8 string=0x00000000002150CC "h"
 *   insn=0x00000000002150D0 string=0x00000000002150D4 "\ty@"
 *   insn=0x00000000002150D4 string=0x00000000002150D8 "(u@"
 *   insn=0x00000000002150DC string=0x00000000002150E0 "h"
 *   insn=0x00000000002150E4 string=0x00000000002150E8 "i"
 *   insn=0x00000000002150E8 string=0x00000000002150EC "h"
 *   insn=0x00000000002150F8 string=0x00000000002150FC " ) "
 *   insn=0x00000000002150FC string=0x0000000000215100 "`>"
 *   insn=0x0000000000215100 string=0x0000000000215104 "\ty@"
 *   insn=0x0000000000215104 string=0x0000000000215108 "(y@"
 *   insn=0x000000000021510C string=0x0000000000215110 "h"
 *   insn=0x000000000021511C string=0x0000000000215120 " ) "
 *   insn=0x0000000000215120 string=0x0000000000215124 "`B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::BoneControlledCollisionShapeComponent::UpdateCollisionShape(
        Caver::BoneControlledCollisionShapeComponent *this)
{
  float v2; // s8
  float v3; // s9
  float v4; // s0
  __int64 v5; // x8
  float v6; // s0
  __int64 v7; // x9
  float v8; // s8
  float v9; // s9
  float result; // s0

  Caver::CollisionShapeComponent::UpdateCollisionShape(this);
  v2 = *((float *)this + 126);
  v3 = *(float *)(*((_QWORD *)this + 5) + 120LL);
  v4 = (*(float (__fastcall **)(Caver::BoneControlledCollisionShapeComponent *))(*(_QWORD *)this + 232LL))(this);
  v5 = *((_QWORD *)this + 5);
  v6 = v2 + v4;
  v7 = *(_QWORD *)this;
  v8 = *((float *)this + 126);
  *((float *)this + 79) = v3 + (float)(v6 * *(float *)(v5 + 140));
  v9 = *(float *)(v5 + 120);
  result = v9
         + (float)((float)(v8
                         + (*(float (__fastcall **)(Caver::BoneControlledCollisionShapeComponent *))(v7 + 240))(this))
                 * *(float *)(*((_QWORD *)this + 5) + 140LL));
  *((float *)this + 80) = result;
  return result;
}

