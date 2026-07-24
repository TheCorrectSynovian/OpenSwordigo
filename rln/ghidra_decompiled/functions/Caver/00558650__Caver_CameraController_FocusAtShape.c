/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00558650
 * Function: Caver::CameraController::FocusAtShape
 * Signature: undefined __thiscall FocusAtShape(CameraController * this, intrusive_ptr * param_1, Rectangle * param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,
   Caver::Rectangle const&, bool) */

void __thiscall
Caver::CameraController::FocusAtShape
          (CameraController *this,intrusive_ptr *param_1,Rectangle *param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Matrix4 aMStack_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  float local_70;
  long local_38;
  
                    /* catch() { ... } // from try @ 00558404 with catch @ 00558650
                       catch() { ... } // from try @ 005584bc with catch @ 00558650 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_3) {
    plVar3 = *(long **)(this + 0x68);
    *(undefined8 *)(this + 0x68) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* catch() { ... } // from try @ 005580f0 with catch @ 005586a0 */
                    /* catch() { ... } // from try @ 00558080 with catch @ 005586a4 */
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = *(long **)(this + 0x70);
    *(undefined8 *)(this + 0x70) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  Shape::Bounds();
  SceneObject::WorldMatrix();
  Rectangle::TransformedRectangle(aMStack_98);
  fVar4 = (float)local_88;
  fVar6 = (float)*(undefined8 *)param_2;
  fVar8 = fVar4 - fVar6;
  fVar5 = (float)((ulong)local_88 >> 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar9 = fVar5 - fVar7;
  local_88 = CONCAT44(fVar9,fVar8);
                    /* catch() { ... } // from try @ 00558068 with catch @ 00558714 */
                    /* catch() { ... } // from try @ 0055805c with catch @ 00558720 */
  fVar4 = (fVar8 + ((fVar4 + (float)uStack_80) - fVar8) +
          fVar6 + (float)*(undefined8 *)(param_2 + 8)) - fVar8;
  fVar5 = (fVar9 + ((fVar5 + (float)((ulong)uStack_80 >> 0x20)) - fVar9) +
          fVar7 + (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20)) - fVar9;
  uStack_80 = CONCAT44(fVar5,fVar4);
  fVar8 = fVar8 + fVar4 * 0.5;
  fVar9 = fVar9 + fVar5 * 0.5;
  fVar4 = *(float *)(*(long *)(*(long *)param_1 + 0x28) + 0x78);
  *(ulong *)(this + 0x20) = CONCAT44(fVar9,fVar8);
  *(undefined4 *)this = 1;
                    /* catch() { ... } // from try @ 00558004 with catch @ 0055876c */
                    /* catch() { ... } // from try @ 00557f7c with catch @ 00558770 */
  *(undefined4 *)(this + 0x1c) = 0x3f7851ec;
  *(undefined4 *)(this + 0x2c) = 0x3f75c28f;
  *(ulong *)(this + 0x10) =
       CONCAT44(fVar9 + (float)((ulong)*(undefined8 *)(this + 4) >> 0x20),
                fVar8 + (float)*(undefined8 *)(this + 4));
                    /* catch() { ... } // from try @ 00558204 with catch @ 00558780 */
  *(float *)(this + 0x28) = fVar4;
  *(float *)(this + 0x18) = fVar4 + *(float *)(this + 0xc);
  local_78 = uStack_80;
  fVar4 = (float)Camera::MinDistanceForVisibleAreaSize
                           (*(Camera **)(this + 0x58),(Vector2 *)&local_78);
  local_78 = *(undefined8 *)(this + 4);
  local_70 = *(float *)(this + 0xc);
  Vector3::Normalize((Vector3 *)&local_78);
  *(ulong *)(this + 0x10) =
       CONCAT44((float)((ulong)local_78 >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20),
                (float)local_78 * fVar4 + (float)*(undefined8 *)(this + 0x20));
  *(float *)(this + 0x18) = fVar4 * local_70 + *(float *)(this + 0x28);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


