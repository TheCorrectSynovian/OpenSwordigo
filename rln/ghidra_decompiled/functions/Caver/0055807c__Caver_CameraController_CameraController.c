/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055807c
 * Function: Caver::CameraController::CameraController
 * Signature: undefined __thiscall CameraController(CameraController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::CameraController() */

void __thiscall Caver::CameraController::CameraController(CameraController *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *local_48;
  long *local_40;
  long local_38;
  
  puVar6 = PTR_Vector3Zero_007e5988;
                    /* try { // try from 00558080 to 00658087 has its CatchHandler @ 005586a4 */
                    /* try { // try from 00558088 to 006580ef has its CatchHandler @ 00557d1c */
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  uVar1 = *(undefined4 *)puVar6;
  uVar2 = *(undefined4 *)(puVar6 + 4);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar4 = *(undefined4 *)(puVar6 + 8);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar4;
  *(undefined4 *)(this + 0x3c) = uVar1;
  *(undefined4 *)(this + 0x40) = uVar2;
  *(undefined4 *)(this + 0x44) = uVar4;
  *(undefined4 *)(this + 0x50) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x28) = uVar4;
  *(undefined4 *)(this + 0x2c) = 0;
                    /* try { // try from 005580f0 to 006580f3 has its CatchHandler @ 005586a0 */
  puVar7 = operator_new(0x1c0);
                    /* try { // try from 005580f4 to 006581c3 has its CatchHandler @ 00557d1c */
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)((long)puVar7 + 0xf4) = 0;
  local_40 = (long *)0x0;
  *(undefined1 *)((long)puVar7 + 0xec) = 1;
  local_48 = puVar7;
  local_40 = operator_new(0x20);
  puVar6 = PTR_vtable_007e7458;
  local_40[3] = (long)puVar7;
  local_40[2] = 1;
  local_40[1] = 1;
  *local_40 = (long)(puVar6 + 0x10);
  boost::detail::sp_enable_shared_from_this(&local_48,puVar7,puVar7);
  puVar7 = *(undefined8 **)(this + 0x58);
  plVar3 = *(long **)(this + 0x60);
  *(undefined8 **)(this + 0x58) = local_48;
  *(long **)(this + 0x60) = local_40;
  local_48 = puVar7;
  local_40 = plVar3;
  if ((plVar3 != (long *)0x0) && (lVar8 = plVar3[1], plVar3[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar8 = plVar3[2];
    plVar3[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* try { // try from 005581c4 to 006581eb has its CatchHandler @ 00558640 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


