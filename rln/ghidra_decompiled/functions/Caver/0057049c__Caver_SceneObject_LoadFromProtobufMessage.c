/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057049c
 * Function: Caver::SceneObject::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SceneObject * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::LoadFromProtobufMessage(Caver::Proto::SceneObject const&) */

void __thiscall Caver::SceneObject::LoadFromProtobufMessage(SceneObject *this,SceneObject *param_1)

{
  undefined *puVar1;
  SceneObject *pSVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  ComponentFactory *this_00;
  Program *pPVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  Program *local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 0057049c to 006704b7 has its CatchHandler @ 00570408 */
                    /* catch() { ... } // from try @ 00570494 with catch @ 005704a0 */
                    /* catch() { ... } // from try @ 00570478 with catch @ 005704a4 */
  lVar5 = tpidr_el0;
                    /* catch() { ... } // from try @ 00570568 with catch @ 005704b8 */
  local_48 = *(long *)(lVar5 + 0x28);
  if (((byte)param_1[0x88] >> 1 & 1) != 0) {
                    /* try { // try from 005704d0 to 006704d7 has its CatchHandler @ 00570574 */
    FUN_0066a6a8(this + 0x50,*(undefined8 *)(param_1 + 0x18));
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar11 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x20) + lVar11 * 8);
      this_00 = (ComponentFactory *)ComponentFactory::sharedManager();
      pPVar7 = (Program *)
               ComponentFactory::NewComponentWithClassName(this_00,*(string **)(lVar10 + 0x40));
                    /* try { // try from 00570504 to 0067050f has its CatchHandler @ 0057051c */
      if (pPVar7 != (Program *)0x0) {
        (**(code **)(*(long *)pPVar7 + 0x20))(pPVar7,lVar10);
                    /* catch() { ... } // from try @ 00570504 with catch @ 0057051c */
        pcVar8 = *(code **)(*(long *)this + 0x48);
        *(int *)(pPVar7 + 8) = *(int *)(pPVar7 + 8) + 1;
        local_58 = pPVar7;
        (*pcVar8)(this,&local_58);
                    /* try { // try from 00570540 to 00670567 has its CatchHandler @ 00570570 */
        if ((local_58 != (Program *)0x0) &&
           (iVar4 = *(int *)(local_58 + 8), *(int *)(local_58 + 8) = iVar4 + -1, iVar4 + -1 == 0)) {
          (**(code **)(*(long *)local_58 + 8))();
        }
      }
                    /* try { // try from 00570568 to 00670583 has its CatchHandler @ 005704b8 */
      lVar11 = lVar11 + 1;
                    /* catch() { ... } // from try @ 00570540 with catch @ 00570570 */
    } while (lVar11 < *(int *)(param_1 + 0x28));
  }
                    /* catch() { ... } // from try @ 005704d0 with catch @ 00570574 */
  puVar6 = PTR_default_instance__007e7da8;
                    /* try { // try from 00570584 to 0067058f has its CatchHandler @ 00570590 */
  pSVar2 = *(SceneObject **)PTR_default_instance__007e7da8;
  if (*(long *)(param_1 + 0x58) != 0) {
    pSVar2 = param_1;
  }
                    /* catch() { ... } // from try @ 00570584 with catch @ 00570590 */
                    /* try { // try from 00570594 to 00670597 has its CatchHandler @ 0057059c */
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(*(long *)(pSVar2 + 0x58) + 0xc);
                    /* catch() { ... } // from try @ 00570594 with catch @ 0057059c */
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 100);
  SetInstanceScaling(this,*(float *)(param_1 + 0x68));
  pSVar2 = *(SceneObject **)puVar6;
  if (*(long *)(param_1 + 0x70) != 0) {
    pSVar2 = param_1;
  }
                    /* catch() { ... } // from try @ 00570634 with catch @ 005705c4
                       catch() { ... } // from try @ 005706d8 with catch @ 005705c4 */
  uVar9 = *(undefined8 *)(*(long *)(pSVar2 + 0x70) + 0x14);
  *(undefined8 *)(this + 0x94) = *(undefined8 *)(*(long *)(pSVar2 + 0x70) + 0xc);
  *(undefined8 *)(this + 0x9c) = uVar9;
  this[0xf4] = *(SceneObject *)(param_1 + 0x78);
  if (((byte)param_1[0x89] >> 1 & 1) != 0) {
    pPVar7 = operator_new(0x28);
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    *(undefined8 *)(pPVar7 + 0x18) = 0;
    *(undefined8 *)(pPVar7 + 0x20) = 0;
    *(undefined8 *)(pPVar7 + 8) = 0;
    *(undefined8 *)(pPVar7 + 0x10) = 0;
    *(undefined **)pPVar7 = puVar1;
    local_58 = pPVar7;
    boost::detail::shared_count::shared_count<Caver::Program>((shared_count *)&local_50,pPVar7);
    boost::detail::sp_enable_shared_from_this(&local_58,pPVar7,pPVar7);
                    /* try { // try from 00570630 to 00670633 has its CatchHandler @ 00570690 */
    pPVar7 = *(Program **)(this + 0x58);
    plVar3 = *(long **)(this + 0x60);
                    /* try { // try from 00570634 to 006706af has its CatchHandler @ 005705c4 */
    *(Program **)(this + 0x58) = local_58;
    *(long **)(this + 0x60) = local_50;
    local_58 = pPVar7;
    local_50 = plVar3;
    if ((plVar3 != (long *)0x0) && (lVar11 = plVar3[1], plVar3[1] = lVar11 + -1, lVar11 + -1 == 0))
    {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar11 = plVar3[2];
      plVar3[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
                    /* catch() { ... } // from try @ 00570630 with catch @ 00570690 */
    pSVar2 = *(SceneObject **)puVar6;
    if (*(long *)(param_1 + 0x80) != 0) {
      pSVar2 = param_1;
    }
    Program::LoadFromProtobufMessage(*(Program **)(this + 0x58),*(Program **)(pSVar2 + 0x80));
  }
                    /* try { // try from 005706b0 to 006706d7 has its CatchHandler @ 005706e0 */
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


