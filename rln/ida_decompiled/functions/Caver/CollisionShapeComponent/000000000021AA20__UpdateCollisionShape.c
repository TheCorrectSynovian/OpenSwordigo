/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021AA20
 * Mangled: _ZN5Caver23CollisionShapeComponent20UpdateCollisionShapeEv
 * Demangled: Caver::CollisionShapeComponent::UpdateCollisionShape(void)
 *
 * Callers: 1
 *   0x00000000001FEDF0  Caver::CollisionShapeComponent::UpdateCollisionShape(void)
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x000000000021AA20 string=0x000000000021AA24 ""
 *   insn=0x000000000021AA24 string=0x000000000021AA28 "\t9@"
 *   insn=0x000000000021AA28 string=0x000000000021AA2C "\t"
 *   insn=0x000000000021AA2C string=0x000000000021AA30 "\t"
 *   insn=0x000000000021AA30 string=0x000000000021AA34 "\t("
 *   insn=0x000000000021AA34 string=0x000000000021AA38 "\t"
 *   insn=0x000000000021AA38 string=0x000000000021AA3C "\t,"
 *   insn=0x000000000021AA3C string=0x000000000021AA40 "\nAB9""
 *   insn=0x000000000021AA40 string=0x000000000021AA44 """
 *   insn=0x000000000021AA44 string=0x000000000021AA48 "\t"
 *   insn=0x000000000021AA48 string=0x000000000021AA4C "\n"
 *   insn=0x000000000021AA4C string=0x000000000021AA50 "\n5@"
 *   insn=0x000000000021AA50 string=0x000000000021AA54 ""
 *   insn=0x000000000021AA54 string=0x000000000021AA58 "j"
 *   insn=0x000000000021AA60 string=0x000000000021AA64 ""
 *   insn=0x000000000021AA68 string=0x000000000021AA6C " "
 *   insn=0x000000000021AA70 string=0x000000000021AA74 ""
 *   insn=0x000000000021AA74 string=0x000000000021AA78 ""
 *   insn=0x000000000021AA78 string=0x000000000021AA7C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::CollisionShapeComponent::UpdateCollisionShape(Caver::CollisionShapeComponent *this)
{
  __int64 v1; // x8
  float v2; // w9
  __int64 v3; // x10
  float32x2_t v4; // d1
  float32x2_t result; // d0

  v1 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 36) = *(_QWORD *)(v1 + 112);
  *((_DWORD *)this + 74) = *(_DWORD *)(v1 + 128);
  v2 = *(float *)(v1 + 140);
  *((float *)this + 75) = v2;
  *((_BYTE *)this + 304) = *(_BYTE *)(v1 + 144);
  v3 = *(_QWORD *)(v1 + 104);
  v1 += 120;
  *(_QWORD *)((char *)this + 308) = v3;
  v4.n64_u64[0] = vld1_dup_f32((const float *)v1).n64_u64[0];
  result.n64_u64[0] = vadd_f32(v4, vmul_n_f32(*(float32x2_t *)((char *)this + 336), v2)).n64_u64[0];
  *(float32x2_t *)((char *)this + 316) = result;
  *(_QWORD *)((char *)this + 324) = *(_QWORD *)((char *)this + 452);
  return result;
}

