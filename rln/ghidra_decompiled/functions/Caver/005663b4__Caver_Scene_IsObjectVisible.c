/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005663b4
 * Function: Caver::Scene::IsObjectVisible
 * Signature: undefined __thiscall IsObjectVisible(Scene * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::IsObjectVisible(Caver::SceneObject*) */

uint __thiscall Caver::Scene::IsObjectVisible(Scene *this,SceneObject *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  Scene *pSVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0xf8);
  if (lVar3 == 0) {
    local_38 = *(undefined8 *)(this + 0x32c);
    local_30 = *(undefined4 *)(this + 0x334);
    pSVar4 = this + 0x338;
  }
  else {
    local_38 = *(undefined8 *)(lVar3 + 0x38);
    local_30 = *(undefined4 *)(lVar3 + 0x40);
    pSVar4 = (Scene *)(lVar3 + 0x44);
  }
  local_2c = *(undefined4 *)pSVar4;
  uVar2 = Rectangle::IntersectsWithRect((Rectangle *)(param_1 + 0xa4),(Rectangle *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


