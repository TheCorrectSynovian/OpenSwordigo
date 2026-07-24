/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00458a74
 * Function: Caver::GameViewController::GotoLevel
 * Signature: undefined __thiscall GotoLevel(GameViewController * this, string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::GotoLevel(std::string const&, std::string const&) */

void __thiscall
Caver::GameViewController::GotoLevel(GameViewController *this,string *param_1,string *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  string *psVar9;
  long *plVar10;
  GUIViewController *this_00;
  int *piVar11;
  long lVar12;
  SceneObject *this_01;
  undefined8 uVar13;
  long *plVar14;
  float fVar15;
  undefined *local_88;
  long *local_80;
  undefined *local_78;
  long *local_70;
  long local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
                    /* catch() { ... } // from try @ 00458a48 with catch @ 00458a98 */
  lVar12 = *(long *)(this + 0xa8);
  FUN_00666bb8(&local_78,&DAT_0068fbeb,auStack_60);
  FUN_0066a6a8(lVar12 + 0x180,&local_78);
  puVar6 = PTR_DAT_007e5de8;
  if (local_78 + -0x18 != PTR_DAT_007e5de8) {
                    /* try { // try from 00458f5c to 00558f73 has its CatchHandler @ 004599f0 */
    piVar11 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar11;
      *piVar11 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_78 + -0x18);
    }
  }
  lVar12 = *(long *)(this + 0xa8);
  FUN_00666bb8(&local_78,&DAT_0068fbeb,auStack_60);
  FUN_0066a6a8(lVar12 + 0x188,&local_78);
  if (local_78 + -0x18 != puVar6) {
                    /* try { // try from 00458f84 to 00558f97 has its CatchHandler @ 004599e8 */
    piVar11 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00458fc0 to 00558fd3 has its CatchHandler @ 004599a8 */
      iVar8 = *piVar11;
      *piVar11 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00458f98 to 00558faf has its CatchHandler @ 004599b0 */
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
                    /* try { // try from 00458fd4 to 00558feb has its CatchHandler @ 00459970 */
      operator_delete(local_78 + -0x18);
    }
  }
                    /* catch() { ... } // from try @ 00458b54 with catch @ 00458b24 */
  iVar8 = FUN_006689e0(param_2,"portal");
                    /* try { // try from 00458b40 to 00558b53 has its CatchHandler @ 00458b78 */
                    /* try { // try from 00458b54 to 00558b7b has its CatchHandler @ 00458b24 */
  if (((((iVar8 != 0) && (*(long *)(this + 200) != 0)) &&
       (lVar12 = *(long *)(*(long *)(this + 200) + 0xe0), lVar12 != 0)) &&
      ((*(int *)(lVar12 + 0x2d0) == 2 &&
       (this_01 = *(SceneObject **)(lVar12 + 0x298), this_01 != (SceneObject *)0x0)))) &&
     ((*(long *)(this_01 + 0x48) != 0 &&
      (psVar9 = (string *)SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e59f0),
      psVar9 != (string *)0x0)))) {
                    /* catch() { ... } // from try @ 00458b40 with catch @ 00458b78 */
    FUN_00666bb8(&local_78,0x68eee7,auStack_60);
    PropertiesComponent::PropertyForKey(psVar9);
    plVar10 = (long *)(local_68 + -0x18);
    lVar12 = *plVar10;
    if (plVar10 != (long *)puVar6) {
      piVar11 = (int *)(local_68 + -8);
                    /* try { // try from 00459038 to 0055904b has its CatchHandler @ 00459928 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00459074 to 00559087 has its CatchHandler @ 004598d0 */
        iVar8 = *piVar11;
        *piVar11 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
                    /* try { // try from 0045908c to 0055909f has its CatchHandler @ 00459854 */
        operator_delete(plVar10);
      }
    }
    if (local_78 + -0x18 != puVar6) {
                    /* try { // try from 00459050 to 00559063 has its CatchHandler @ 004598f0 */
      piVar11 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar11;
        *piVar11 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_78 + -0x18);
      }
    }
                    /* try { // try from 004590b0 to 005590c3 has its CatchHandler @ 00459850 */
    if (lVar12 != 0) {
      FUN_0066a6a8(*(long *)(this + 0xa8) + 0x180,*(long *)(this_01 + 0x48) + 0x50);
      FUN_0066a6a8(*(long *)(this + 0xa8) + 0x188,this_01 + 0x50);
    }
  }
  lVar12 = *(long *)(this + 0xa8);
  uVar13 = *(undefined8 *)(lVar12 + 0x170);
  plVar10 = *(long **)(lVar12 + 0x178);
  if (plVar10 != (long *)0x0) {
    plVar10[1] = plVar10[1] + 1;
  }
  FUN_0066a6a8(lVar12 + 0x158,param_1);
  FUN_0066a6a8(*(long *)(this + 0xa8) + 0x160,param_2);
  this_00 = operator_new(0x140);
  GUIViewController::GUIViewController(this_00);
  puVar7 = PTR_vtable_007e7d18;
  puVar1 = PTR_vtable_007e7d18 + 0xe0;
  *(undefined **)this_00 = PTR_vtable_007e7d18 + 0x10;
                    /* catch() { ... } // from try @ 004592e4 with catch @ 00458c58
                       catch() { ... } // from try @ 0045a008 with catch @ 00458c58 */
  *(undefined **)(this_00 + 0x50) = puVar7 + 0xf8;
  *(undefined **)(this_00 + 0x48) = puVar1;
  *(undefined **)(this_00 + 0x60) = puVar7 + 0x148;
  *(undefined **)(this_00 + 0x58) = puVar7 + 0x118;
  *(undefined **)(this_00 + 0x78) = puVar7 + 0x198;
  *(undefined **)(this_00 + 0x70) = puVar7 + 0x180;
  *(undefined **)(this_00 + 0x68) = puVar7 + 0x160;
  memset(this_00 + 0x80,0,0x6a);
  this_00[0xf8] = (GUIViewController)0x0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  this_00[0x110] = (GUIViewController)0x0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined4 *)(this_00 + 0x130) = 0;
  *(undefined **)(this_00 + 0xf0) = puVar6 + 0x18;
  *(undefined **)(this_00 + 0x138) = puVar6 + 0x18;
  boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>
            ((shared_ptr<Caver::GameViewController> *)&local_78,(GameViewController *)this_00);
  uVar2 = *(undefined8 *)(this + 0x88);
  lVar12 = *(long *)(this + 0x90);
  if (lVar12 != 0) {
    *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
  }
  plVar14 = *(long **)(local_78 + 0x90);
  *(undefined8 *)(local_78 + 0x88) = uVar2;
  *(long *)(local_78 + 0x90) = lVar12;
  if ((plVar14 != (long *)0x0) && (lVar12 = plVar14[1], plVar14[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar12 = plVar14[2];
    plVar14[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar10[1] = plVar10[1] + 1;
  }
  plVar14 = *(long **)(local_78 + 0xc0);
  *(undefined8 *)(local_78 + 0xb8) = uVar13;
  *(long **)(local_78 + 0xc0) = plVar10;
  if ((plVar14 != (long *)0x0) && (lVar12 = plVar14[1], plVar14[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar12 = plVar14[2];
    plVar14[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  local_88 = local_78;
  local_80 = local_70;
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  GameEvent::SetEventsEnabled(false);
  (**(code **)(**(long **)(this + 0x40) + 8))
            (DAT_00683484,DAT_00683484,*(long **)(this + 0x40),&local_88,0);
  plVar14 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar12 = local_80[1], local_80[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    lVar12 = plVar14[2];
    plVar14[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  fVar15 = (float)GameState::PercentCompleted(*(GameState **)(this + 0xa8));
  plVar14 = local_70;
  if (1.0 < fVar15) {
    local_88 = puVar6 + 0x18;
    iVar8 = FUN_006689e0(param_2,"portal");
    if (iVar8 == 0) {
      FUN_0066918c(&local_88,"portal",6);
      uVar13 = 0xb4;
    }
    else {
      FUN_0066918c(&local_88,"between_levels",0xe);
      uVar13 = 300;
    }
    plVar14 = (long *)OnlineController::SharedController();
    (**(code **)(*plVar14 + 0x108))(DAT_00684314,plVar14,&local_88,uVar13);
                    /* try { // try from 00458e94 to 00558ea7 has its CatchHandler @ 00459b2c */
    plVar14 = local_70;
    if (local_88 + -0x18 != puVar6) {
      piVar11 = (int *)(local_88 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar11;
        *piVar11 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
                    /* try { // try from 00458ffc to 0055900f has its CatchHandler @ 00459968 */
        } while (cVar3 != '\0');
      }
                    /* try { // try from 00459014 to 00559027 has its CatchHandler @ 00459930 */
      if (iVar8 < 1) {
        operator_delete(local_88 + -0x18);
        plVar14 = local_70;
      }
    }
  }
                    /* try { // try from 00458ea8 to 00558ebf has its CatchHandler @ 00459ab0 */
  if ((plVar14 != (long *)0x0) && (lVar12 = plVar14[1], plVar14[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar12 = plVar14[2];
                    /* try { // try from 00458ed0 to 00558ee3 has its CatchHandler @ 00459aa8 */
    plVar14[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 00458ee4 to 00558efb has its CatchHandler @ 00459a70 */
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  if ((plVar10 != (long *)0x0) && (lVar12 = plVar10[1], plVar10[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* try { // try from 00458f0c to 00558f1f has its CatchHandler @ 00459a68 */
    lVar12 = plVar10[2];
    plVar10[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 00458f20 to 00558f37 has its CatchHandler @ 00459a30 */
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00458f48 to 00558f5b has its CatchHandler @ 00459a28 */
  return;
}


