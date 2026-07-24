/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573ce8
 * Function: Caver::SceneObject::ContainsPoint
 * Signature: undefined __thiscall ContainsPoint(SceneObject * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::ContainsPoint(Caver::Vector2 const&) */

uint __thiscall Caver::SceneObject::ContainsPoint(SceneObject *this,Vector2 *param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (float)*(undefined8 *)param_1 - (float)*(undefined8 *)(this + 0x70);
  fStack_2c = (float)((ulong)*(undefined8 *)param_1 >> 0x20) -
              (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20);
  Vector2::Rotate((Vector2 *)&local_30,-*(float *)(this + 0x80));
  fVar3 = local_30 * (1.0 / *(float *)(this + 0x8c));
  if (this[0x90] != (SceneObject)0x0) {
    fVar3 = -fVar3;
  }
  _local_38 = CONCAT44(fStack_2c * (1.0 / *(float *)(this + 0x8c)),fVar3);
  uVar2 = Rectangle::PointInside((Rectangle *)(this + 0x94),(Vector2 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


