/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00469ad0
 * Function: Caver::HeroEquipmentManager::ApplyArmorTrinket
 * Signature: undefined __thiscall ApplyArmorTrinket(HeroEquipmentManager * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::HeroEquipmentManager::ApplyArmorTrinket(HeroEquipmentManager *this,shared_ptr *param_1)

{
  intrusive_ptr *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  SceneObject *pSVar12;
  OrbitControllerComponent *this_00;
  long lVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *local_80;
  SceneObject *local_78;
  long local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar17 = *(long **)(this + 0x30);
  plVar19 = *(long **)(this + 0x38);
  if (plVar17 != plVar19) {
    do {
      plVar18 = plVar17 + 1;
      SceneObject::RemoveChildObject(*(SceneObject **)(this + 0x10),(SceneObject *)*plVar17,true);
      plVar17 = plVar18;
    } while (plVar19 != plVar18);
                    /* try { // try from 00469b30 to 00569b33 has its CatchHandler @ 00469b8c */
    plVar18 = *(long **)(this + 0x38);
    plVar17 = *(long **)(this + 0x30);
                    /* try { // try from 00469b34 to 00569b8f has its CatchHandler @ 00469ab0 */
    for (plVar19 = plVar17; plVar18 != plVar19; plVar19 = plVar19 + 1) {
      plVar11 = (long *)*plVar19;
      if ((plVar11 != (long *)0x0) &&
         (iVar10 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar10, iVar10 == 0)) {
        (**(code **)(*plVar11 + 8))();
      }
    }
  }
  *(long **)(this + 0x38) = plVar17;
  if (*(long *)param_1 == 0) {
LAB_00469d10:
    lVar13 = *(long *)this;
    if (lVar13 != 0) goto LAB_00469d18;
LAB_00469db8:
    uVar9 = 1;
  }
  else {
    FUN_0066a528(&local_78,*(long *)param_1 + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00469b30 with catch @ 00469b8c
                        */
                    /* try { // try from 00469b90 to 00569b97 has its CatchHandler @ 00469ba8 */
    FUN_0066a528(&local_70,&local_78);
                    /* try { // try from 00469b98 to 00569bab has its CatchHandler @ 00469ab0 */
    FUN_006677d4(&local_70,"_wisp",5);
    puVar8 = PTR_DAT_007e5de8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00469b90 with catch @ 00469ba8
                        */
    if (local_78 + -0x18 != (SceneObject *)PTR_DAT_007e5de8) {
      pSVar12 = local_78 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *(int *)pSVar12;
        *(int *)pSVar12 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *(int *)pSVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pSVar12,0x10);
          if (bVar4) {
            *(int *)pSVar12 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(local_78 + -0x18);
      }
    }
    puVar7 = PTR_Interface_007e5d58;
    piVar1 = (intrusive_ptr *)(this + 0x10);
    bVar4 = false;
    do {
      pSVar12 = operator_new(0x128);
      SceneObject::SceneObject(pSVar12);
      *(int *)(pSVar12 + 8) = *(int *)(pSVar12 + 8) + 1;
      local_78 = pSVar12;
      SceneObject::SetAlwaysActive(pSVar12,true);
      pSVar12 = local_78;
                    /* catch() { ... } // from try @ 00469c34 with catch @ 00469c04 */
                    /* try { // try from 00469c20 to 00569c33 has its CatchHandler @ 00469c58 */
      ObjectLibrary::TemplateForName
                (*(string **)(*(long *)(*(long *)piVar1 + 0x20) + 0xa0),SUB81(&local_70,0));
      SceneObject::InitWithTemplate(pSVar12,(intrusive_ptr *)&local_80);
                    /* try { // try from 00469c34 to 00569c5b has its CatchHandler @ 00469c04 */
      if ((local_80 != (long *)0x0) &&
         (iVar10 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar10, iVar10 == 0)) {
        (**(code **)(*local_80 + 8))();
      }
                    /* catch() { ... } // from try @ 00469c20 with catch @ 00469c58 */
      this_00 = (OrbitControllerComponent *)
                SceneObject::ComponentWithInterface(local_78,(long)puVar7);
                    /* catch() { ... } // from try @ 00469e78 with catch @ 00469c68
                       catch() { ... } // from try @ 0046a264 with catch @ 00469c68 */
      OrbitControllerComponent::FollowObject(this_00,piVar1);
      if (bVar4) {
        *(float *)(this_00 + 0x88) = -*(float *)(this_00 + 0x88);
      }
      SceneObject::AddChildObject(*(SceneObject **)piVar1,(intrusive_ptr *)&local_78);
      puVar2 = *(undefined8 **)(this + 0x38);
      if (puVar2 == *(undefined8 **)(this + 0x40)) {
        std::
        vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
        ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
                         *)(this + 0x30),puVar2,&local_78);
      }
      else {
        *puVar2 = local_78;
        if (local_78 != (SceneObject *)0x0) {
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
        }
        *(undefined8 **)(this + 0x38) = puVar2 + 1;
      }
      if ((local_78 != (SceneObject *)0x0) &&
         (iVar10 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar10 + -1, iVar10 + -1 == 0))
      {
        (**(code **)(*(long *)local_78 + 8))();
      }
      bVar5 = !bVar4;
      bVar4 = true;
    } while (bVar5);
    if ((undefined *)(local_70 + -0x18) == puVar8) goto LAB_00469d10;
    piVar15 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar15;
                    /* try { // try from 00469d98 to 00569dab has its CatchHandler @ 0046a0dc */
      *piVar15 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (0 < iVar10) goto LAB_00469d10;
                    /* try { // try from 00469dac to 00569dc3 has its CatchHandler @ 0046a080 */
    operator_delete((undefined *)(local_70 + -0x18));
    lVar13 = *(long *)this;
    if (lVar13 == 0) goto LAB_00469db8;
LAB_00469d18:
    uVar9 = CharacterState::ItemCount((CharacterState *)(lVar13 + 0x10),param_1);
  }
  lVar13 = SceneObject::ComponentWithInterface
                     (*(SceneObject **)(this + 0x10),(long)PTR_Interface_007e7450);
                    /* try { // try from 00469dd4 to 00569de7 has its CatchHandler @ 0046a07c */
  if (*(long *)param_1 == 0) {
    if (lVar13 == 0) goto LAB_00469fd8;
LAB_00469e20:
    *(undefined4 *)(lVar13 + 0x9c) = 0;
                    /* try { // try from 00469e24 to 00569e3b has its CatchHandler @ 0046a008 */
LAB_00469e74:
    bVar4 = true;
                    /* try { // try from 00469e78 to 0056a10b has its CatchHandler @ 00469c68 */
    lVar14 = *(long *)param_1;
    if (lVar14 == 0) goto LAB_00469ed0;
LAB_00469e80:
    FUN_0066a528(&local_70,lVar14 + 8);
    iVar10 = FUN_006689e0(&local_70,0x68eb35);
    if ((undefined *)(local_70 + -0x18) == PTR_DAT_007e5de8) {
LAB_00469eb8:
      if (iVar10 != 0) goto LAB_00469ebc;
LAB_00469f20:
      if (!bVar4) goto LAB_00469f38;
      *(undefined4 *)(lVar13 + 0xa0) = uVar9;
      goto LAB_00469f28;
    }
    piVar15 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar5) {
          *piVar15 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (0 < iVar16) goto LAB_00469eb8;
    operator_delete((undefined *)(local_70 + -0x18));
    if (iVar10 == 0) goto LAB_00469f20;
LAB_00469ebc:
    if (bVar4) goto LAB_00469ed4;
LAB_00469f38:
    bVar4 = false;
    lVar14 = *(long *)param_1;
  }
  else {
    FUN_0066a528(&local_70,*(long *)param_1 + 8);
                    /* try { // try from 00469de8 to 00569dff has its CatchHandler @ 0046a044 */
    iVar10 = FUN_006689e0(&local_70,"firetrinket");
    if ((undefined *)(local_70 + -0x18) == PTR_DAT_007e5de8) {
LAB_00469e10:
                    /* try { // try from 00469e10 to 00569e23 has its CatchHandler @ 0046a040 */
      if (iVar10 != 0) goto LAB_00469e14;
LAB_00469e6c:
      if (lVar13 == 0) goto LAB_00469ec4;
      *(undefined4 *)(lVar13 + 0x9c) = uVar9;
      goto LAB_00469e74;
    }
    piVar15 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00469e4c to 00569e5f has its CatchHandler @ 0046a004 */
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (0 < iVar16) goto LAB_00469e10;
                    /* try { // try from 00469e60 to 00569e77 has its CatchHandler @ 00469fcc */
    operator_delete((undefined *)(local_70 + -0x18));
    if (iVar10 == 0) goto LAB_00469e6c;
LAB_00469e14:
    if (lVar13 != 0) goto LAB_00469e20;
LAB_00469ec4:
    bVar4 = false;
    lVar14 = *(long *)param_1;
    if (lVar14 != 0) goto LAB_00469e80;
LAB_00469ed0:
    if (!bVar4) goto LAB_00469fd8;
LAB_00469ed4:
    *(undefined4 *)(lVar13 + 0xa0) = 0;
LAB_00469f28:
    bVar4 = true;
    lVar14 = *(long *)param_1;
  }
  if (lVar14 != 0) {
    FUN_0066a528(&local_70,lVar14 + 8);
    iVar10 = FUN_006689e0(&local_70,"shadowtrinket");
    if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
      piVar15 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar16 = *piVar15;
        *piVar15 = iVar16 + -1;
      }
      else {
        do {
          iVar16 = *piVar15;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar5) {
            *piVar15 = iVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar16 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
                    /* catch() { ... } // from try @ 00469e60 with catch @ 00469fcc */
    if (iVar10 == 0) {
      if (bVar4) {
        *(undefined4 *)(lVar13 + 0xa4) = uVar9;
      }
      goto LAB_00469fd8;
    }
  }
  if (bVar4) {
    *(undefined4 *)(lVar13 + 0xa4) = 0;
  }
LAB_00469fd8:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00469e24 with catch @ 0046a008 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00469e4c with catch @ 0046a004 */
  return;
}


