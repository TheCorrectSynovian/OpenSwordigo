/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021AA04
 * Mangled: _ZNK5Caver23CollisionShapeComponent13WorldMaxDepthEv
 * Demangled: Caver::CollisionShapeComponent::WorldMaxDepth(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000021AA14 string=0x000000000021AA18 "@( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::CollisionShapeComponent::WorldMaxDepth(Caver::CollisionShapeComponent *this)
{
  return *(float *)(*((_QWORD *)this + 5) + 120LL)
       + (float)(*((float *)this + 85) * *(float *)(*((_QWORD *)this + 5) + 140LL));
}

