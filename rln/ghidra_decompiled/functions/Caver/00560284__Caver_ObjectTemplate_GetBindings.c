/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00560284
 * Function: Caver::ObjectTemplate::GetBindings
 * Signature: undefined __thiscall GetBindings(ObjectTemplate * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ObjectTemplate::GetBindings(std::vector<Caver::Binding, std::allocator<Caver::Binding> >*)
    */

void __thiscall Caver::ObjectTemplate::GetBindings(ObjectTemplate *this,vector *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_80 [8];
  long local_78 [2];
  undefined4 local_68 [2];
  long local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
                    /* try { // try from 0056028c to 00660343 has its CatchHandler @ 005601e8 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00666bb8(local_78,"name",auStack_80);
  local_68[0] = 100;
  FUN_0066a528(&local_60,local_78);
  local_58 = 0x100000001;
  local_50 = 2;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_68);
  }
  else {
    *puVar1 = local_68[0];
    FUN_0066a528(puVar1 + 2,&local_60);
    puVar1[6] = local_50;
    *(undefined8 *)(puVar1 + 4) = local_58;
                    /* catch() { ... } // from try @ 00560280 with catch @ 00560320 */
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  puVar5 = PTR_DAT_007e5de8;
                    /* try { // try from 00560344 to 0066034b has its CatchHandler @ 00560350 */
                    /* try { // try from 0056034c to 006603cb has its CatchHandler @ 005601e8 */
                    /* catch() { ... } // from try @ 00560344 with catch @ 00560350 */
                    /* catch() { ... } // from try @ 00560228 with catch @ 00560354 */
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_60 + -8);
                    /* catch() { ... } // from try @ 00560464 with catch @ 00560504 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 005605dc to 006605ef has its CatchHandler @ 0056086c */
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if ((undefined *)(local_78[0] + -0x18) != puVar5) {
    piVar6 = (int *)(local_78[0] + -8);
                    /* try { // try from 00560528 to 0066052f has its CatchHandler @ 00560534 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
                    /* try { // try from 005605f4 to 006605ff has its CatchHandler @ 00560804 */
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
                    /* try { // try from 00560530 to 006605af has its CatchHandler @ 005603cc */
                    /* catch() { ... } // from try @ 00560528 with catch @ 00560534 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 0056040c with catch @ 00560538 */
      } while (cVar2 != '\0');
    }
                    /* try { // try from 00560600 to 00660627 has its CatchHandler @ 005605b0 */
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,&LAB_00695b3c,auStack_80);
  local_68[0] = 0x65;
  FUN_0066a528(&local_60,local_78);
  local_50 = 0;
  local_58 = _LAB_00683960;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
                    /* try { // try from 005603f4 to 00660407 has its CatchHandler @ 005605ac */
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_68);
  }
  else {
    *puVar1 = local_68[0];
    FUN_0066a528(puVar1 + 2,&local_60);
                    /* catch() { ... } // from try @ 00560210 with catch @ 005603c8 */
                    /* try { // try from 005603cc to 006603f3 has its CatchHandler @ 005603cc
                       catch() { ... } // from try @ 005603cc with catch @ 005603cc
                       catch() { ... } // from try @ 00560418 with catch @ 005603cc
                       catch() { ... } // from try @ 00560470 with catch @ 005603cc
                       catch() { ... } // from try @ 00560530 with catch @ 005603cc */
    puVar1[6] = local_50;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar6 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
                    /* try { // try from 00560628 to 00660633 has its CatchHandler @ 00560870 */
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
                    /* try { // try from 0056040c to 00660417 has its CatchHandler @ 00560538 */
                    /* try { // try from 00560418 to 00660463 has its CatchHandler @ 005603cc */
  if ((undefined *)(local_78[0] + -0x18) != puVar5) {
    piVar6 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
                    /* try { // try from 00560634 to 0066063b has its CatchHandler @ 005607f4 */
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 0056063c to 00660647 has its CatchHandler @ 00560870 */
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"onLoad",auStack_80);
  local_68[0] = 0x66;
  FUN_0066a528(&local_60,local_78);
  local_50 = 0;
  local_58 = DAT_00683970;
  puVar1 = *(undefined4 **)(param_1 + 8);
                    /* try { // try from 00560464 to 0066046f has its CatchHandler @ 00560504 */
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_68);
  }
  else {
                    /* try { // try from 00560470 to 00660527 has its CatchHandler @ 005603cc */
    *puVar1 = local_68[0];
    FUN_0066a528(puVar1 + 2,&local_60);
    puVar1[6] = local_50;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar6 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00560650 to 0066065b has its CatchHandler @ 005607c4 */
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if ((undefined *)(local_78[0] + -0x18) != puVar5) {
                    /* catch() { ... } // from try @ 005603f4 with catch @ 005605ac */
                    /* try { // try from 005605b0 to 006605db has its CatchHandler @ 005605b0
                       catch() { ... } // from try @ 005605b0 with catch @ 005605b0
                       catch() { ... } // from try @ 00560600 with catch @ 005605b0
                       catch() { ... } // from try @ 005606f8 with catch @ 005605b0
                       catch() { ... } // from try @ 005607f0 with catch @ 005605b0
                       catch() { ... } // from try @ 005608c4 with catch @ 005605b0 */
    piVar6 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 0056067c to 0066067f has its CatchHandler @ 005607c0 */
                    /* try { // try from 00560680 to 006606af has its CatchHandler @ 00560878 */
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


