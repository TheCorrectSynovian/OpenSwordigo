/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00569290
 * Function: FUN_00569290
 * Signature: undefined FUN_00569290(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00569290(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ProgramState *this;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  SceneObject *this_00;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  SceneObject *local_78;
  long *local_70;
  long local_68;
  long local_60;
  long local_58;
  
                    /* try { // try from 00569298 to 006692c3 has its CatchHandler @ 0056924c */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 005692c4 to 006692d7 has its CatchHandler @ 005693f4 */
  FUN_00666bb8(&local_60,"scene",&local_70);
  plVar5 = (long *)Caver::ProgramTable::PointerForKey
                             ((ProgramTable *)(this + 0x28),(string *)&local_60);
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 005692ec to 006692ff has its CatchHandler @ 0056942c */
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  Caver::ProgramState::StringAtStackIndex((int)this);
  plVar6 = (long *)Caver::ProgramState::PointerAtStackIndex(this,3);
  if (plVar6 == (long *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *plVar6;
  }
  uVar7 = Caver::ProgramState::IsBoolAtStackIndex(this,4);
  if ((uVar7 & 1) == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = Caver::ProgramState::BoolAtStackIndex(this,4);
    uVar7 = uVar7 & 0xffffffff;
  }
  Caver::ObjectLibrary::TemplateForName((string *)plVar5[0x14],SUB81(&local_60,0));
                    /* try { // try from 00569378 to 0066938b has its CatchHandler @ 005693f0 */
  this_00 = operator_new(0x128);
  Caver::SceneObject::SceneObject(this_00);
  if (local_70 != (long *)0x0) {
    Caver::SceneObject::InitWithTemplate(this_00,(intrusive_ptr *)&local_70);
  }
  Caver::SceneObject::SetIdentifier(this_00,(string *)&local_68);
  if (lVar11 == 0) goto LAB_00569420;
                    /* try { // try from 005693b0 to 006693c3 has its CatchHandler @ 005693ec */
                    /* try { // try from 005693c4 to 006694ab has its CatchHandler @ 0056924c */
  if (ABS(*(float *)(lVar11 + 0x70) - *(float *)(this_00 + 0x70)) <= DAT_00683488) {
    fVar12 = *(float *)(lVar11 + 0x74);
                    /* catch() { ... } // from try @ 005693b0 with catch @ 005693ec */
                    /* catch() { ... } // from try @ 00569378 with catch @ 005693f0 */
    if (DAT_00683488 < ABS(fVar12 - *(float *)(this_00 + 0x74))) goto LAB_005693f8;
  }
  else {
    fVar12 = *(float *)(lVar11 + 0x74);
LAB_005693f8:
    *(float *)(this_00 + 0x70) = *(float *)(lVar11 + 0x70);
    *(float *)(this_00 + 0x74) = fVar12;
    if (this_00[0xb4] == (SceneObject)0x0) {
      Caver::SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
  }
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(lVar11 + 0x78);
LAB_00569420:
  if ((uVar7 & 1) != 0) {
                    /* catch() { ... } // from try @ 005692ec with catch @ 0056942c */
    pcVar8 = *(code **)(*plVar5 + 0x28);
                    /* catch() { ... } // from try @ 00569288 with catch @ 00569438 */
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    local_78 = this_00;
    (*pcVar8)(plVar5,&local_78);
    if ((local_78 != (SceneObject *)0x0) &&
       (iVar10 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*(long *)local_78 + 8))();
    }
  }
  Caver::SceneObjectLib::PushSceneObject(this,this_00);
  if ((local_70 != (long *)0x0) &&
     (iVar10 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_70 + 8))();
  }
  if ((undefined *)(local_68 + -0x18) != puVar4) {
                    /* try { // try from 00569514 to 0066951f has its CatchHandler @ 00569594 */
    piVar9 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
                    /* try { // try from 00569520 to 006695b7 has its CatchHandler @ 005694ac */
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00569514 with catch @ 00569594
                        */
    }
  }
                    /* try { // try from 005694ac to 00669513 has its CatchHandler @ 005694ac
                       catch(type#1 @ 00000000) { ... } // from try @ 005694ac with catch @ 005694ac
                       catch(type#1 @ 00000000) { ... } // from try @ 00569520 with catch @ 005694ac
                       catch(type#1 @ 00000000) { ... } // from try @ 005695e0 with catch @ 005694ac
                        */
  if ((undefined *)(local_60 + -0x18) != puVar4) {
    piVar9 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005695b8 to 006695df has its CatchHandler @ 005695e8 */
  __stack_chk_fail();
}


