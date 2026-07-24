/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005701fc
 * Function: Caver::SceneObject::Clone
 * Signature: undefined __thiscall Clone(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::Clone() const */

SceneObject * __thiscall Caver::SceneObject::Clone(SceneObject *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  SceneObject *this_00;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this_00 = operator_new(0x128);
  *(undefined4 *)(this_00 + 8) = 0;
  puVar4 = PTR_vtable_007e56a0;
                    /* try { // try from 00570240 to 0067027f has its CatchHandler @ 005702ec */
  this_00[0x44] = (SceneObject)0x0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  puVar5 = PTR_DAT_007e5de8;
  *(undefined4 *)(this_00 + 0x40) = 0x3f800000;
  *(undefined **)this_00 = puVar4 + 0x10;
  uVar10 = NEON_fmov(0x3f800000,4);
  *(undefined **)(this_00 + 0x10) = puVar4 + 0x70;
                    /* try { // try from 00570280 to 0067030b has its CatchHandler @ 00570120 */
  *(undefined2 *)(this_00 + 0x18) = 1;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined **)(this_00 + 0x50) = puVar5 + 0x18;
  *(undefined8 *)(this_00 + 0x88) = uVar10;
  uVar11 = NEON_fmov(0xc1200000,4);
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0xac) = 0;
  *(undefined8 *)(this_00 + 0xa4) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  uVar10 = NEON_fmov(0x41a00000,4);
  this_00[0xf3] = (SceneObject)0x1;
  this_00[0x90] = (SceneObject)0x0;
  this_00[0xb4] = (SceneObject)0x0;
  this_00[0xe8] = (SceneObject)0x0;
  this_00[0xf2] = (SceneObject)0x0;
  *(undefined2 *)(this_00 + 0xf0) = 0;
  *(undefined4 *)(this_00 + 0xec) = 0;
  this_00[0xf4] = (SceneObject)0x0;
  *(undefined8 *)(this_00 + 0x10c) = 0;
  *(undefined8 *)(this_00 + 0x114) = 0;
  this_00[0x108] = (SceneObject)0x0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
                    /* catch() { ... } // from try @ 00570240 with catch @ 005702ec */
  *(undefined8 *)(this_00 + 0x94) = uVar11;
  *(undefined8 *)(this_00 + 0x9c) = uVar10;
  *(SceneObject **)(this_00 + 0x100) = this_00;
  plVar1 = *(long **)(this + 200);
  for (plVar9 = *(long **)(this + 0xc0); plVar9 != plVar1; plVar9 = plVar9 + 1) {
                    /* try { // try from 0057030c to 00670333 has its CatchHandler @ 0057033c */
    if (((char)((long *)*plVar9)[6] == '\0') &&
       (uVar6 = (**(code **)(*(long *)*plVar9 + 0x30))(), (uVar6 & 1) != 0)) {
      local_60 = (long *)(**(code **)(*(long *)*plVar9 + 0x10))();
                    /* try { // try from 00570334 to 00670353 has its CatchHandler @ 00570120 */
      pcVar7 = *(code **)(*(long *)this_00 + 0x48);
                    /* catch() { ... } // from try @ 0057030c with catch @ 0057033c */
      if (local_60 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00570150 with catch @ 00570340 */
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      }
      (*pcVar7)(this_00,&local_60);
      if ((local_60 != (long *)0x0) &&
         (iVar2 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar2, iVar2 == 0)) {
                    /* catch() { ... } // from try @ 005703e0 with catch @ 00570370
                       catch() { ... } // from try @ 005703fc with catch @ 00570370 */
        (**(code **)(*local_60 + 8))();
      }
    }
  }
  if (*(long *)(this + 0x48) != 0) {
    InitWithTemplate(this_00,(intrusive_ptr *)(this + 0x48));
  }
  FUN_0066a6a8(this_00 + 0x50,this + 0x50);
  uVar10 = *(undefined8 *)(this + 0x58);
  lVar8 = *(long *)(this + 0x60);
  if (lVar8 != 0) {
                    /* try { // try from 005703b8 to 006703df has its CatchHandler @ 005703f0 */
    *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
  }
  plVar9 = *(long **)(this_00 + 0x60);
  *(undefined8 *)(this_00 + 0x58) = uVar10;
  *(long *)(this_00 + 0x60) = lVar8;
  if ((plVar9 != (long *)0x0) && (lVar8 = plVar9[1], plVar9[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 005703e0 to 006703f3 has its CatchHandler @ 00570370 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar8 = plVar9[2];
                    /* catch() { ... } // from try @ 005703b8 with catch @ 005703f0 */
    plVar9[2] = lVar8 + -1;
                    /* try { // try from 005703f4 to 006703fb has its CatchHandler @ 00570404 */
    if (lVar8 + -1 == 0) {
                    /* try { // try from 005703fc to 00670407 has its CatchHandler @ 00570370 */
                    /* catch() { ... } // from try @ 005703f4 with catch @ 00570404 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* catch() { ... } // from try @ 0057049c with catch @ 00570408 */
  *(undefined8 *)(this_00 + 0x70) = *(undefined8 *)(this + 0x70);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this_00 + 0x80) = *(undefined4 *)(this + 0x80);
  *(undefined8 *)(this_00 + 0x88) = *(undefined8 *)(this + 0x88);
  uVar10 = *(undefined8 *)(this + 0x94);
  *(undefined8 *)(this_00 + 0x9c) = *(undefined8 *)(this + 0x9c);
  *(undefined8 *)(this_00 + 0x94) = uVar10;
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00570450 to 00670477 has its CatchHandler @ 00570490 */
  return this_00;
}


