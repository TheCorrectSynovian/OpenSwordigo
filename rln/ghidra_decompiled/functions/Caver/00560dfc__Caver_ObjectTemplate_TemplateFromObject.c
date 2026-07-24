/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00560dfc
 * Function: Caver::ObjectTemplate::TemplateFromObject
 * Signature: undefined __thiscall TemplateFromObject(ObjectTemplate * this, string * param_1, SceneObject * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectTemplate::TemplateFromObject(std::string const&, Caver::SceneObject*) */

void __thiscall
Caver::ObjectTemplate::TemplateFromObject(ObjectTemplate *this,string *param_1,SceneObject *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  SceneObject *this_00;
  ulong uVar8;
  long *plVar9;
  undefined8 *in_x8;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  long *local_68;
  long *local_60;
  long *plStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = operator_new(0x138);
  SceneObject::SceneObject(this_00);
  puVar5 = PTR_vtable_007e4780;
                    /* catch() { ... } // from try @ 00560954 with catch @ 00560e40 */
                    /* try { // try from 00560e44 to 00660e6f has its CatchHandler @ 00560e44
                       catch() { ... } // from try @ 00560e44 with catch @ 00560e44
                       catch() { ... } // from try @ 00560e94 with catch @ 00560e44
                       catch() { ... } // from try @ 00560fa0 with catch @ 00560e44
                       catch() { ... } // from try @ 00561118 with catch @ 00560e44 */
  iVar2 = *(int *)(this_00 + 8);
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined **)(this_00 + 0x10) = puVar5 + 0x70;
  *(undefined **)this_00 = puVar5 + 0x10;
  *(undefined4 *)(this_00 + 0x130) = 0x3f800000;
  *in_x8 = this_00;
  *(int *)(this_00 + 8) = iVar2 + 1;
                    /* try { // try from 00560e70 to 00660e83 has its CatchHandler @ 005611e4 */
  SceneObject::SetIdentifier(this_00,(string *)this);
  *(undefined4 *)(this_00 + 0x130) = *(undefined4 *)(param_1 + 0x8c);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  plVar9 = *(long **)(param_1 + 0x60);
                    /* try { // try from 00560e88 to 00660e93 has its CatchHandler @ 00561174 */
  if (plVar9 != (long *)0x0) {
                    /* try { // try from 00560e94 to 00660edf has its CatchHandler @ 00560e44 */
    plVar9[1] = plVar9[1] + 2;
  }
  plVar11 = *(long **)(this_00 + 0x60);
  *(undefined8 *)(this_00 + 0x58) = uVar1;
  *(long **)(this_00 + 0x60) = plVar9;
  if ((plVar11 != (long *)0x0) && (lVar10 = plVar11[1], plVar11[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar10 = plVar11[2];
    plVar11[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
                    /* try { // try from 00560ee0 to 00660eeb has its CatchHandler @ 005610d0 */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if ((plVar9 != (long *)0x0) && (lVar10 = plVar9[1], plVar9[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* try { // try from 00560f08 to 00660f2f has its CatchHandler @ 005610c8 */
    lVar10 = plVar9[2];
    plVar9[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  local_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  local_50 = 0;
  SceneObject::GetAllComponents((SceneObject *)param_1,(vector *)&local_60);
  plVar6 = plStack_58;
                    /* try { // try from 00560f3c to 00660f43 has its CatchHandler @ 00561078 */
  plVar11 = local_60;
  plVar9 = local_60;
  if (local_60 != plStack_58) {
    do {
      uVar8 = (**(code **)(*(long *)*plVar9 + 0x30))();
      if ((uVar8 & 1) != 0) {
        pcVar12 = *(code **)(*(long *)this_00 + 0x48);
        local_68 = (long *)(**(code **)(*(long *)*plVar9 + 0x10))();
                    /* try { // try from 00560f78 to 00660f9f has its CatchHandler @ 005610c8 */
        if (local_68 != (long *)0x0) {
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        }
        (*pcVar12)(this_00,&local_68);
                    /* try { // try from 00560fa0 to 0066109b has its CatchHandler @ 00560e44 */
        if ((local_68 != (long *)0x0) &&
           (iVar2 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*local_68 + 8))();
        }
      }
      plVar7 = plStack_58;
      plVar9 = plVar9 + 1;
      plVar4 = local_60;
      plVar11 = plStack_58;
    } while (plVar6 != plVar9);
    for (; plVar4 != plVar7; plVar4 = plVar4 + 1) {
      plVar9 = (long *)*plVar4;
      if ((plVar9 != (long *)0x0) &&
         (iVar2 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*plVar9 + 8))();
      }
      plVar11 = local_60;
    }
  }
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


