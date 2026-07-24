/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00572358
 * Function: Caver::SceneObject::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::ValueForBindedProperty(int) */

void Caver::SceneObject::ValueForBindedProperty(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  Program *in_x1;
  string *extraout_x1;
  Program *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *psVar7;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  undefined4 *in_x8;
  int iVar8;
  int *piVar9;
  long lVar10;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  uVar5 = (ulong)(uint)param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005723d4 with catch @ 00572360
                       catch(type#1 @ 00000000) { ... } // from try @ 00572444 with catch @ 00572360
                        */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00572388 to 0067238b has its CatchHandler @ 005723f0 */
  switch((ulong)in_x1 & 0xffffffff) {
  case 0:
    if (*(long *)(uVar5 + 0x48) == 0) {
      FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_40);
      psVar7 = extraout_x1_04;
    }
    else {
                    /* try { // try from 005723ac to 006723d3 has its CatchHandler @ 005723e8 */
      FUN_0066a528(&local_68,*(long *)(uVar5 + 0x48) + 0x50);
      psVar7 = extraout_x1;
    }
                    /* try { // try from 00572570 to 00672577 has its CatchHandler @ 00572750 */
    BindingValue::ValueWithString((BindingValue *)&local_68,psVar7);
    puVar6 = local_68 + -0x18;
    if (puVar6 == PTR_DAT_007e5de8) break;
    piVar9 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00572644:
      iVar8 = *piVar9;
      *piVar9 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    goto LAB_00572650;
  case 1:
    BindingValue::ValueWithString((BindingValue *)(uVar5 + 0x50),(string *)in_x1);
    break;
  case 2:
    BindingValue::ValueWithBool((BindingValue *)(ulong)*(byte *)(uVar5 + 0xf4),SUB81(in_x1,0));
    break;
  case 3:
    lVar10 = *(long *)(uVar5 + 0x58);
    if (lVar10 == 0) {
      local_50 = 0;
      local_48 = 0;
      local_58 = 0;
      local_68 = PTR_DAT_007e5de8 + 0x18;
      local_60 = 0;
    }
    else {
                    /* try { // try from 005723d4 to 00672413 has its CatchHandler @ 00572360 */
      FUN_0066a528(&local_68,lVar10);
      local_60 = *(undefined8 *)(lVar10 + 8);
      local_58 = *(long *)(lVar10 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005723ac with catch @ 005723e8
                        */
      if (local_58 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00572388 with catch @ 005723f0
                        */
        *(long *)(local_58 + 8) = *(long *)(local_58 + 8) + 1;
      }
      local_50 = *(undefined8 *)(lVar10 + 0x18);
      local_48 = *(long *)(lVar10 + 0x20);
      in_x1 = extraout_x1_00;
      if (local_48 != 0) {
                    /* try { // try from 00572414 to 00672443 has its CatchHandler @ 0057244c */
        *(long *)(local_48 + 8) = *(long *)(local_48 + 8) + 1;
      }
    }
                    /* try { // try from 00572540 to 00672547 has its CatchHandler @ 005726ec */
    BindingValue::ValueWithProgram((BindingValue *)&local_68,in_x1);
    Program::~Program((Program *)&local_68);
    break;
  default:
    uVar3 = (int)in_x1 - 4;
    if (0x14 < uVar3) {
      *in_x8 = 0;
      *(undefined8 *)(in_x8 + 6) = 0;
      *(undefined8 *)(in_x8 + 8) = 0;
      *(undefined8 *)(in_x8 + 2) = 0;
      *(undefined8 *)(in_x8 + 4) = 0;
      break;
    }
    piVar9 = *(int **)(uVar5 + 0x28);
    if (piVar9 == (int *)0x0) {
      if (-1 < (int)uVar3) goto LAB_005725c4;
    }
    else {
                    /* try { // try from 00572444 to 0067244f has its CatchHandler @ 00572360 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00572414 with catch @ 0057244c
                        */
      if (*piVar9 <= (int)uVar3) {
LAB_005725c4:
        FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_40);
        BindingValue::ValueWithString((BindingValue *)&local_68,extraout_x1_05);
        puVar6 = local_68 + -0x18;
                    /* try { // try from 005725f8 to 00672637 has its CatchHandler @ 00572704 */
        if (puVar6 == PTR_DAT_007e5de8) break;
        piVar9 = (int *)(local_68 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00572644;
        do {
          iVar8 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_00572650;
      }
    }
                    /* catch() { ... } // from try @ 00572464 with catch @ 00572450 */
    lVar10 = *(long *)(*(long *)(piVar9 + 2) + (long)(int)uVar3 * 8);
                    /* try { // try from 00572460 to 00672463 has its CatchHandler @ 00572474 */
    FUN_0066a528(&local_68,lVar10 + 0x20);
                    /* try { // try from 00572464 to 00672487 has its CatchHandler @ 00572450 */
    psVar7 = extraout_x1_01;
                    /* catch() { ... } // from try @ 00572460 with catch @ 00572474 */
    if ((*(long *)(local_68 + -0x18) == 0) &&
       (FUN_0066918c(&local_68,&DAT_0069859e,1), psVar7 = extraout_x1_02,
       0 < *(int *)(lVar10 + 0x38))) {
      FUN_0035a030(&local_70,&DAT_00690d31,**(long **)(lVar10 + 0x40) + 0x50);
      FUN_00667614(&local_68,&local_70);
                    /* try { // try from 005724c4 to 006724f3 has its CatchHandler @ 005724c4
                       catch() { ... } // from try @ 005724c4 with catch @ 005724c4
                       catch() { ... } // from try @ 005724f8 with catch @ 005724c4
                       catch() { ... } // from try @ 0057267c with catch @ 005724c4
                       catch() { ... } // from try @ 005727e4 with catch @ 005724c4 */
      psVar7 = extraout_x1_03;
      if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
        piVar9 = (int *)(local_70 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar9;
          *piVar9 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar9;
                    /* try { // try from 0057267c to 00672723 has its CatchHandler @ 005724c4 */
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar2) {
              *piVar9 = iVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)(local_70 + -0x18));
          psVar7 = extraout_x1_06;
        }
      }
    }
    BindingValue::ValueWithString((BindingValue *)&local_68,psVar7);
    puVar6 = local_68 + -0x18;
    if (puVar6 == PTR_DAT_007e5de8) break;
                    /* try { // try from 005724f4 to 006724f7 has its CatchHandler @ 005727f0 */
                    /* try { // try from 005724f8 to 0067253f has its CatchHandler @ 005724c4 */
    piVar9 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00572644;
    do {
      iVar8 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00572650:
                    /* try { // try from 00572654 to 0067267b has its CatchHandler @ 005726f0 */
    if (iVar8 < 1) {
      operator_delete(puVar6);
    }
  }
                    /* try { // try from 00572598 to 006725bf has its CatchHandler @ 005726f4 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


