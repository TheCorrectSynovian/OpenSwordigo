/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005760bc
 * Function: Caver::SceneObjectGroup::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SceneObjectGroup * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::SceneObjectGroup::SetValueForBindedProperty
          (SceneObjectGroup *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  Program *pPVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long local_58 [2];
  Program *local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 005760c8 to 006760db has its CatchHandler @ 0057c618 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005760dc to 006760ff has its CatchHandler @ 0057c60c */
  switch(param_1) {
  case 0:
                    /* try { // try from 00576104 to 00676117 has its CatchHandler @ 0057c604 */
    FUN_0066a528(&local_48,*(undefined8 *)(param_2 + 8));
                    /* try { // try from 00576118 to 0067612b has its CatchHandler @ 0057c5fc */
    SetIdentifier(this,(string *)&local_48);
                    /* try { // try from 0057612c to 0067613f has its CatchHandler @ 0057c5f4 */
    if (local_48 + -0x18 != (Program *)PTR_DAT_007e5de8) {
      pPVar4 = local_48 + -8;
                    /* try { // try from 00576140 to 00676153 has its CatchHandler @ 0057c5ec */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *(int *)pPVar4;
                    /* try { // try from 005762bc to 006762db has its CatchHandler @ 0057c56c */
        *(int *)pPVar4 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *(int *)pPVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pPVar4,0x10);
          if (bVar2) {
            *(int *)pPVar4 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_48 + -0x18);
      }
    }
    break;
  case 1:
                    /* try { // try from 00576230 to 00676243 has its CatchHandler @ 0057c59c */
    this[0x48] = **(SceneObjectGroup **)(param_2 + 8);
    break;
  case 2:
                    /* try { // try from 00576208 to 0067621b has its CatchHandler @ 0057c5ac */
    this[0x49] = **(SceneObjectGroup **)(param_2 + 8);
    break;
  case 3:
                    /* try { // try from 0057621c to 0067622f has its CatchHandler @ 0057c5a4 */
    this[0x4b] = **(SceneObjectGroup **)(param_2 + 8);
    break;
  case 4:
    pPVar4 = operator_new(0x28);
    BindingValue::ProgramValue();
    local_48 = pPVar4;
                    /* try { // try from 0057617c to 0067618f has its CatchHandler @ 0057c5dc */
    boost::detail::shared_count::shared_count<Caver::Program>((shared_count *)&local_40,pPVar4);
                    /* try { // try from 00576190 to 006761a3 has its CatchHandler @ 0057c5d4 */
    boost::detail::sp_enable_shared_from_this(&local_48,pPVar4,pPVar4);
    pPVar4 = *(Program **)(this + 0x28);
    plVar5 = *(long **)(this + 0x30);
                    /* try { // try from 005761a4 to 006761b7 has its CatchHandler @ 0057c5cc */
    *(Program **)(this + 0x28) = local_48;
    *(long **)(this + 0x30) = local_40;
    local_48 = pPVar4;
    local_40 = plVar5;
                    /* try { // try from 005761b8 to 006761cb has its CatchHandler @ 0057c5c4 */
    if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[1], plVar5[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 005761cc to 006761eb has its CatchHandler @ 0057c5bc */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar6 = plVar5[2];
      plVar5[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
                    /* try { // try from 005761f4 to 00676207 has its CatchHandler @ 0057c5b4 */
    if (*(long *)(*(long *)(this + 0x28) + 8) == 0) {
                    /* try { // try from 00576244 to 00676263 has its CatchHandler @ 0057c594 */
      FUN_00666bb8(local_58,&DAT_0068fbeb,&local_48);
    }
    else {
      FUN_0066a528(local_58);
    }
    plVar5 = (long *)(local_58[0] + -0x18);
    lVar6 = *plVar5;
    if (plVar5 != (long *)PTR_DAT_007e5de8) {
                    /* try { // try from 00576294 to 006762a7 has its CatchHandler @ 0057c57c */
      piVar7 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
                    /* try { // try from 005762a8 to 006762bb has its CatchHandler @ 0057c574 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* try { // try from 005762e4 to 006762f7 has its CatchHandler @ 0057c564 */
      if (iVar8 < 1) {
        operator_delete(plVar5);
      }
    }
    if (lVar6 == 0) {
      plVar5 = *(long **)(this + 0x30);
                    /* try { // try from 005762f8 to 0067630b has its CatchHandler @ 0057c55c */
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x30) = 0;
                    /* try { // try from 0057630c to 0067631f has its CatchHandler @ 0057c554 */
      if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[1], plVar5[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* try { // try from 00576320 to 00676333 has its CatchHandler @ 0057c54c */
        lVar6 = plVar5[2];
        plVar5[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
                    /* try { // try from 00576334 to 00676353 has its CatchHandler @ 0057c544 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
    }
  }
                    /* try { // try from 0057626c to 0067627f has its CatchHandler @ 0057c58c */
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00576280 to 00676293 has its CatchHandler @ 0057c584 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


