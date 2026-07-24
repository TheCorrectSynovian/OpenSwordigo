/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031aa20
 * Function: Caver::CollisionShapeComponent::UpdateCollisionShape
 * Signature: undefined __thiscall UpdateCollisionShape(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::UpdateCollisionShape() */

void __thiscall Caver::CollisionShapeComponent::UpdateCollisionShape(CollisionShapeComponent *this)

{
  float fVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x28);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(lVar2 + 0x70);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(lVar2 + 0x80);
  fVar1 = *(float *)(lVar2 + 0x8c);
  *(float *)(this + 300) = fVar1;
  this[0x130] = *(CollisionShapeComponent *)(lVar2 + 0x90);
  *(undefined8 *)(this + 0x134) = *(undefined8 *)(lVar2 + 0x68);
  *(ulong *)(this + 0x13c) =
       CONCAT44(*(float *)(lVar2 + 0x78) +
                (float)((ulong)*(undefined8 *)(this + 0x150) >> 0x20) * fVar1,
                *(float *)(lVar2 + 0x78) + (float)*(undefined8 *)(this + 0x150) * fVar1);
  *(undefined8 *)(this + 0x144) = *(undefined8 *)(this + 0x1c4);
  return;
}


