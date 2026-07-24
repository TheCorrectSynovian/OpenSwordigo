/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004da07c
 * Function: Caver::HealthBar::HealthBar
 * Signature: undefined __thiscall HealthBar(HealthBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::HealthBar::HealthBar() */

void __thiscall Caver::HealthBar::HealthBar(HealthBar *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  ParticleSystem *pPVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  HealthBar *pHVar11;
  long local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  ParticleSystem *local_70;
  undefined8 uStack_68;
  long local_58;
  
                    /* catch() { ... } // from try @ 004da070 with catch @ 004da084 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004da0a0 to 005da0a3 has its CatchHandler @ 004da0e0 */
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e4990 + 0x10;
                    /* try { // try from 004da0cc to 005da0d3 has its CatchHandler @ 004da0dc */
  pHVar11 = this + 0xf0;
  *(undefined8 *)pHVar11 = 0;
  this[0x108] = (HealthBar)0x1;
                    /* try { // try from 004da0d4 to 005da0e3 has its CatchHandler @ 004da000 */
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
                    /* catch() { ... } // from try @ 004da0cc with catch @ 004da0dc */
  *(undefined4 *)(this + 0x110) = 0;
                    /* catch() { ... } // from try @ 004da0a0 with catch @ 004da0e0 */
  *(undefined4 *)(this + 0x10c) = 0;
                    /* try { // try from 004da0e4 to 005da12b has its CatchHandler @ 004da0e4
                       catch() { ... } // from try @ 004da0e4 with catch @ 004da0e4
                       catch() { ... } // from try @ 004da148 with catch @ 004da0e4
                       catch() { ... } // from try @ 004da2b0 with catch @ 004da0e4
                       catch() { ... } // from try @ 004da304 with catch @ 004da0e4
                       catch() { ... } // from try @ 004da378 with catch @ 004da0e4 */
  *(undefined8 *)(this + 0x114) = 0x7f7fffffffffffff;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  this[0x178] = (HealthBar)0x0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x1a8) = 0x3f000000;
  *(undefined4 *)(this + 0x1ac) = 0;
  this[0xe5] = (HealthBar)0x0;
                    /* try { // try from 004da12c to 005da147 has its CatchHandler @ 004da36c */
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_78,&DAT_00692960,auStack_80);
                    /* try { // try from 004da148 to 005da2ab has its CatchHandler @ 004da0e4 */
  TextureLibrary::TextureForName(psVar5,SUB81(&local_78,0));
  if (local_70 != (ParticleSystem *)0x0) {
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
  }
  plVar7 = *(long **)pHVar11;
  *(ParticleSystem **)pHVar11 = local_70;
  if ((plVar7 != (long *)0x0) &&
     (iVar10 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  if ((local_70 != (ParticleSystem *)0x0) &&
     (iVar10 = *(int *)(local_70 + 8), *(int *)(local_70 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
    (**(code **)(*(long *)local_70 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if (local_78 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar7 = local_78 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar7;
      *(int *)plVar7 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_78 + -3);
    }
  }
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_78,0x69296d,auStack_80);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_78,0));
  if (local_70 != (ParticleSystem *)0x0) {
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
  }
  plVar7 = *(long **)(this + 0xf8);
  *(ParticleSystem **)(this + 0xf8) = local_70;
  if ((plVar7 != (long *)0x0) &&
     (iVar10 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  if ((local_70 != (ParticleSystem *)0x0) &&
     (iVar10 = *(int *)(local_70 + 8), *(int *)(local_70 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
    (**(code **)(*(long *)local_70 + 8))();
  }
  if (local_78 + -3 != (long *)puVar4) {
    plVar7 = local_78 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar7;
      *(int *)plVar7 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_78 + -3);
    }
  }
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_78,"ui_heartempty",auStack_80);
                    /* try { // try from 004da2ac to 005da2af has its CatchHandler @ 004da358 */
                    /* try { // try from 004da2b0 to 005da2ff has its CatchHandler @ 004da0e4 */
  TextureLibrary::TextureForName(psVar5,SUB81(&local_78,0));
  if (local_70 != (ParticleSystem *)0x0) {
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
  }
  plVar7 = *(long **)(this + 0x100);
  *(ParticleSystem **)(this + 0x100) = local_70;
  if ((plVar7 != (long *)0x0) &&
     (iVar10 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  if ((local_70 != (ParticleSystem *)0x0) &&
     (iVar10 = *(int *)(local_70 + 8), *(int *)(local_70 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
                    /* try { // try from 004da300 to 005da303 has its CatchHandler @ 004da354 */
                    /* try { // try from 004da304 to 005da36f has its CatchHandler @ 004da0e4 */
    (**(code **)(*(long *)local_70 + 8))();
  }
  if (local_78 + -3 != (long *)puVar4) {
    plVar7 = local_78 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar7;
      *(int *)plVar7 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_78 + -3);
    }
  }
  *(undefined8 *)(this + 0x11c) = *(undefined8 *)(*(long *)pHVar11 + 0x54);
  Texture::SharedPtr();
                    /* catch() { ... } // from try @ 004da300 with catch @ 004da354 */
                    /* catch() { ... } // from try @ 004da2ac with catch @ 004da358 */
  Sprite::Init((Sprite *)(this + 0x128),(intrusive_ptr *)&local_70,2,4,true);
                    /* catch() { ... } // from try @ 004da12c with catch @ 004da36c */
                    /* try { // try from 004da370 to 005da377 has its CatchHandler @ 004da380 */
                    /* try { // try from 004da378 to 005da383 has its CatchHandler @ 004da0e4 */
                    /* catch() { ... } // from try @ 004da370 with catch @ 004da380 */
  if ((local_70 != (ParticleSystem *)0x0) &&
     (iVar10 = *(int *)(local_70 + 8), *(int *)(local_70 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004da3c8 with catch @ 004da384
                       catch() { ... } // from try @ 004da464 with catch @ 004da384 */
    (**(code **)(*(long *)local_70 + 8))();
  }
  local_70 = (ParticleSystem *)0x0;
                    /* try { // try from 004da3a8 to 005da3ab has its CatchHandler @ 004da404 */
  uStack_68 = (long *)CONCAT44(*(undefined4 *)(*(long *)(this + 0xf0) + 0x58),
                               *(float *)(*(long *)(this + 0xf0) + 0x54) * 12.0);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_70);
  pPVar6 = operator_new(0xc0);
                    /* try { // try from 004da3c4 to 005da3c7 has its CatchHandler @ 004da458 */
                    /* try { // try from 004da3c8 to 005da41f has its CatchHandler @ 004da384 */
  ParticleSystem::ParticleSystem(pPVar6);
  local_70 = pPVar6;
  boost::detail::shared_count::shared_count<Caver::ParticleSystem>
            ((shared_count *)&uStack_68,pPVar6);
  boost::detail::sp_enable_shared_from_this(&local_70,pPVar6,pPVar6);
  pPVar6 = *(ParticleSystem **)(this + 0x180);
  plVar7 = *(long **)(this + 0x188);
                    /* catch() { ... } // from try @ 004da3a8 with catch @ 004da404 */
  *(ParticleSystem **)(this + 0x180) = local_70;
  *(long **)(this + 0x188) = uStack_68;
  local_70 = pPVar6;
  uStack_68 = plVar7;
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 004da420 to 005da423 has its CatchHandler @ 004da454 */
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
                    /* catch() { ... } // from try @ 004da420 with catch @ 004da454 */
                    /* catch() { ... } // from try @ 004da3c4 with catch @ 004da458 */
                    /* try { // try from 004da45c to 005da463 has its CatchHandler @ 004da46c */
  ParticleSystem::InitWithMaxParticles(*(ParticleSystem **)(this + 0x180),0x14);
  pPVar6 = *(ParticleSystem **)(this + 0x180);
                    /* try { // try from 004da464 to 005da46f has its CatchHandler @ 004da384 */
  psVar5 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 004da45c with catch @ 004da46c */
  FUN_00666bb8(&local_88,"ui_heartempty",auStack_80);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_88,0));
  uStack_68 = (long *)_UNK_00692938;
  local_70 = _DAT_00692930;
  ParticleSystem::AddParticleType(pPVar6,(intrusive_ptr *)&local_78,(Rectangle *)&local_70);
  if ((local_78 != (long *)0x0) &&
     (iVar10 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_78 + 8))();
  }
  if ((undefined *)(local_88 + -0x18) != puVar4) {
    piVar9 = (int *)(local_88 + -8);
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
      operator_delete((undefined *)(local_88 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


