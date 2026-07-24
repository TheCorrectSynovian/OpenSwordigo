/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005737d8
 * Function: Caver::SceneObject::UpdateBounds
 * Signature: undefined __thiscall UpdateBounds(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::UpdateBounds() */

void __thiscall Caver::SceneObject::UpdateBounds(SceneObject *this)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00573404 with catch @ 005737f8 */
  local_58 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 005731d0 with catch @ 005737fc */
  uStack_68 = *(undefined8 *)(this + 0x9c);
  local_70 = *(undefined8 *)(this + 0x94);
  puVar4 = *(undefined8 **)(this + 0xc0);
  puVar1 = *(undefined8 **)(this + 200);
  if (puVar4 != puVar1) {
    iVar5 = 0;
    do {
      uVar3 = (**(code **)(*(long *)*puVar4 + 0xd8))();
      if ((uVar3 & 1) != 0) {
        if (iVar5 == 0) {
          (**(code **)(*(long *)*puVar4 + 0xe0))(&local_80);
          uStack_68 = uStack_78;
          local_70 = local_80;
                    /* catch() { ... } // from try @ 00572fd4 with catch @ 005738a0 */
                    /* catch() { ... } // from try @ 005732a8 with catch @ 005738a4 */
          uVar7 = (**(code **)(*(long *)*puVar4 + 0xe8))();
          *(undefined4 *)(this + 0xb8) = uVar7;
LAB_005738e8:
                    /* catch() { ... } // from try @ 00573614 with catch @ 005738f4 */
          uVar7 = (**(code **)(*(long *)*puVar4 + 0xf0))();
        }
        else {
          (**(code **)(*(long *)*puVar4 + 0xe0))(&local_80);
                    /* catch() { ... } // from try @ 0057313c with catch @ 0057384c */
                    /* catch() { ... } // from try @ 00573068 with catch @ 00573850 */
          Rectangle::ExpandToincludeRectangle((Rectangle *)&local_70,(Rectangle *)&local_80);
          fVar8 = *(float *)(this + 0xb8);
          fVar6 = (float)(**(code **)(*(long *)*puVar4 + 0xe8))();
          if (fVar6 <= fVar8) {
            uVar7 = (**(code **)(*(long *)*puVar4 + 0xe8))();
          }
          else {
            uVar7 = *(undefined4 *)(this + 0xb8);
          }
          *(undefined4 *)(this + 0xb8) = uVar7;
          fVar8 = *(float *)(this + 0xbc);
          fVar6 = (float)(**(code **)(*(long *)*puVar4 + 0xf0))();
          if (fVar8 <= fVar6) goto LAB_005738e8;
          uVar7 = *(undefined4 *)(this + 0xbc);
        }
        *(undefined4 *)(this + 0xbc) = uVar7;
        iVar5 = iVar5 + 1;
      }
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
  }
  setLocalAABB(this,(Rectangle *)&local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0057342c with catch @ 00573944 */
  __stack_chk_fail();
}


