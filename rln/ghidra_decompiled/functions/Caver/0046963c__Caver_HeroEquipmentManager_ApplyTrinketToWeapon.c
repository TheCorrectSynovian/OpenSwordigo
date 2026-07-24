/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046963c
 * Function: Caver::HeroEquipmentManager::ApplyTrinketToWeapon
 * Signature: undefined __thiscall ApplyTrinketToWeapon(HeroEquipmentManager * this, intrusive_ptr * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject>
   const&, boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::HeroEquipmentManager::ApplyTrinketToWeapon
          (HeroEquipmentManager *this,intrusive_ptr *param_1,shared_ptr *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  SwingableWeaponComponent *this_00;
  long lVar7;
  FloatColor *pFVar8;
  FloatColor *extraout_x0;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (SwingableWeaponComponent *)
            SceneObject::ComponentWithInterface
                      (*(SceneObject **)param_1,(long)PTR_Interface_007e7110);
  if (this_00 == (SwingableWeaponComponent *)0x0) goto LAB_004699b4;
  if (*(long *)this == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = CharacterState::ItemCount((CharacterState *)(*(long *)this + 0x10),param_2);
  }
  lVar7 = SceneObject::ComponentWithInterface(*(SceneObject **)param_1,(long)PTR_Interface_007e6cd0)
  ;
  lVar10 = *(long *)param_2;
  if (lVar10 == 0) {
    uStack_78 = _UNK_00689608;
    local_80 = _DAT_00689600;
    SwingableWeaponComponent::SetGlowColor(this_00,&local_80);
    SwingableWeaponComponent::SetGlowIntensity(this_00,0.0);
    lVar10 = *(long *)param_2;
    if (lVar10 != 0) goto LAB_004696f8;
LAB_004697fc:
    if (lVar7 == 0) goto LAB_004698a4;
    *(undefined4 *)(lVar7 + 0xc0) = 0;
    lVar10 = *(long *)param_2;
    if (lVar10 != 0) goto LAB_004698ac;
LAB_004698e8:
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0xc4) = 0;
    }
  }
  else {
LAB_004696f8:
    FUN_0066a528(&local_88,lVar10 + 8);
    pFVar8 = (FloatColor *)FUN_006689e0(&local_88,"firetrinket");
    puVar4 = PTR_DAT_007e5de8;
    iVar6 = (int)pFVar8;
    if ((undefined *)(local_88 + -0x18) == PTR_DAT_007e5de8) {
LAB_0046972c:
      if (iVar6 == 0) goto LAB_0046978c;
LAB_00469730:
      lVar10 = *(long *)param_2;
    }
    else {
      piVar11 = (int *)(local_88 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (0 < iVar12) goto LAB_0046972c;
      operator_delete((undefined *)(local_88 + -0x18));
      pFVar8 = (FloatColor *)((ulong)pFVar8 & 0xffffffff);
      if (iVar6 != 0) goto LAB_00469730;
LAB_0046978c:
      FloatColor::FromHSLA(pFVar8,_DAT_00683c38,1.0,0.5,0.0);
      SwingableWeaponComponent::SetGlowColor(this_00,auStack_98);
      SwingableWeaponComponent::SetGlowIntensity(this_00,1.0);
      lVar10 = *(long *)param_2;
    }
    if (lVar10 == 0) goto LAB_004697fc;
    FUN_0066a528(&local_88,lVar10 + 8);
    pFVar8 = (FloatColor *)FUN_006689e0(&local_88,0x68eb35);
    iVar6 = (int)pFVar8;
    if ((undefined *)(local_88 + -0x18) != puVar4) {
      piVar11 = (int *)(local_88 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        pFVar8 = (FloatColor *)((ulong)pFVar8 & 0xffffffff);
        operator_delete((undefined *)(local_88 + -0x18));
      }
    }
    if (iVar6 != 0) goto LAB_004697fc;
    FloatColor::FromHSLA(pFVar8,_DAT_0068fa6c,1.0,DAT_00683484,0.0);
    SwingableWeaponComponent::SetGlowColor(this_00,auStack_a8);
    SwingableWeaponComponent::SetGlowIntensity(this_00,1.0);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0xc0) = uVar5;
    }
LAB_004698a4:
    lVar10 = *(long *)param_2;
    if (lVar10 == 0) goto LAB_004698e8;
LAB_004698ac:
    FUN_0066a528(&local_88,lVar10 + 8);
    iVar6 = FUN_006689e0(&local_88,"shadowtrinket");
    pFVar8 = (FloatColor *)(local_88 + -0x18);
    if (pFVar8 != (FloatColor *)PTR_DAT_007e5de8) {
      piVar11 = (int *)(local_88 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete(pFVar8);
        pFVar8 = extraout_x0;
      }
    }
    if (iVar6 != 0) goto LAB_004698e8;
    FloatColor::FromHSLA(pFVar8,DAT_00684430,1.0,DAT_00683484,0.0);
    SwingableWeaponComponent::SetGlowColor(this_00,auStack_b8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004699c8 with catch @ 00469968
                       catch(type#1 @ 00000000) { ... } // from try @ 004699f4 with catch @ 00469968
                        */
    SwingableWeaponComponent::SetGlowIntensity(this_00,1.0);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0xc4) = uVar5;
    }
  }
  lVar7 = SceneObject::ComponentWithInterface(*(SceneObject **)param_1,(long)PTR_Interface_007e6cd0)
  ;
  if ((lVar7 != 0) && (*(long *)this != 0)) {
    uVar9 = CharacterState::WeaponDamageRange((CharacterState *)(*(long *)this + 0x10));
    iVar6 = (int)uVar9;
    *(int *)(lVar7 + 0xa4) = iVar6;
    *(int *)(lVar7 + 0xa8) = (int)((ulong)uVar9 >> 0x20) - iVar6;
    *(int *)(lVar7 + 0xac) = iVar6;
    *(int *)(lVar7 + 0xb0) = iVar6;
  }
LAB_004699b4:
                    /* try { // try from 004699bc to 005699bf has its CatchHandler @ 004699d8 */
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004699c4 to 005699c7 has its CatchHandler @ 004699e8 */
                    /* try { // try from 004699c8 to 005699df has its CatchHandler @ 00469968 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004699bc with catch @ 004699d8
                        */
                    /* try { // try from 004699e0 to 005699f3 has its CatchHandler @ 004699fc */
  return;
}


