/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049dc7c
 * Function: Caver::ProfilePanelView::Update
 * Signature: undefined __thiscall Update(ProfilePanelView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProfilePanelView::Update(float) */

void __thiscall Caver::ProfilePanelView::Update(ProfilePanelView *this,float param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  GUILabel *pGVar9;
  size_t *psVar10;
  long *plVar11;
  void *pvVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  void *local_68 [2];
  long local_58;
  
                    /* try { // try from 0049dc8c to 0059dc9f has its CatchHandler @ 0049e0b8 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0049dca0 to 0059dcb3 has its CatchHandler @ 0049e048 */
  fVar14 = ABS(*(float *)(this + 0x268));
  if ((DAT_00683734 < fVar14) && (*(int *)(this + 600) == 0)) {
    if (15.0 < fVar14) {
      *(float *)(this + 0x268) = (*(float *)(this + 0x268) / fVar14) * 15.0;
    }
                    /* try { // try from 0049dcec to 0059dd1f has its CatchHandler @ 0049e0bc */
    lVar6 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x250),(long)PTR_Interface_007e7860);
    fVar14 = *(float *)(this + 0x268);
    *(float *)(lVar6 + 0xd4) = *(float *)(lVar6 + 0xd4) + fVar14 * param_1;
    fVar15 = 0.0;
    if (param_1 * 15.0 <= ABS(fVar14)) {
      fVar15 = -1.0;
                    /* try { // try from 0049dd20 to 0059dd27 has its CatchHandler @ 0049e028 */
      if (0.0 <= fVar14) {
        fVar15 = 1.0;
      }
      fVar15 = fVar14 - param_1 * 15.0 * fVar15;
    }
    *(float *)(this + 0x268) = fVar15;
  }
  dVar13 = (double)TimerCurrentSeconds();
  pGVar9 = *(GUILabel **)(this + 0x1c8);
                    /* try { // try from 0049dd58 to 0059dda7 has its CatchHandler @ 0049e0bc */
  if ((pGVar9[0xe4] == (GUILabel)0x0) && (_DAT_00691418 < dVar13 - *(double *)(this + 0x148))) {
    *(double *)(this + 0x148) = dVar13;
    local_80 = DateTime::Now();
    local_88 = *(undefined8 *)(*(long *)(this + 0x168) + 0x28);
    DateTime::FormattedTimeIntervalSinceDate((DateTime *)&local_80);
    FUN_0035a030(&local_70,"Played ",&local_78);
    FUN_0066a528(local_68,&local_70);
                    /* try { // try from 0049ddb0 to 0059ddbb has its CatchHandler @ 0049e044 */
    FUN_006677d4(local_68," ago.",5);
    pvVar12 = local_68[0];
    psVar10 = (size_t *)((long)local_68[0] + -0x18);
                    /* try { // try from 0049ddd0 to 0059dddb has its CatchHandler @ 0049dff8 */
    if ((*psVar10 != *(size_t *)((long)*(void **)(pGVar9 + 0x100) + -0x18)) ||
       (iVar5 = memcmp(local_68[0],*(void **)(pGVar9 + 0x100),*psVar10), iVar5 != 0)) {
      FUN_0066a6a8(pGVar9 + 0x100,local_68);
      GUILabel::UpdateText(pGVar9);
                    /* try { // try from 0049ddfc to 0059ddff has its CatchHandler @ 0049e044 */
      psVar10 = (size_t *)((long)local_68[0] + -0x18);
      pvVar12 = local_68[0];
    }
    puVar4 = PTR_DAT_007e5de8;
    if (psVar10 != (size_t *)PTR_DAT_007e5de8) {
      piVar7 = (int *)((long)pvVar12 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 0049defc with catch @ 0049dfc4 */
        iVar5 = *piVar7;
        *piVar7 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete(psVar10);
      }
    }
                    /* try { // try from 0049de18 to 0059de4b has its CatchHandler @ 0049e0bc */
    if ((undefined *)(local_70 + -0x18) != puVar4) {
      piVar7 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0049dfe8 to 0059e023 has its CatchHandler @ 0049e0ec */
        iVar5 = *piVar7;
        *piVar7 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* catch() { ... } // from try @ 0049de4c with catch @ 0049dff4 */
                    /* catch() { ... } // from try @ 0049ddd0 with catch @ 0049dff8 */
      if (iVar5 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
    if ((undefined *)(local_78 + -0x18) != puVar4) {
      piVar7 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar7;
        *piVar7 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
                    /* try { // try from 0049e024 to 0059e0df has its CatchHandler @ 0049dc48 */
      }
    }
    local_90 = DateTime::Now();
    local_68[0] = *(void **)(*(long *)(this + 0x168) + 0x28);
                    /* try { // try from 0049de4c to 0059de53 has its CatchHandler @ 0049dff4 */
    dVar13 = (double)DateTime::SecondsSinceDate((DateTime *)&local_90,(DateTime *)local_68);
    pGVar9 = *(GUILabel **)(this + 0x1c8);
                    /* try { // try from 0049de84 to 0059ded3 has its CatchHandler @ 0049e0bc */
    uVar8 = (uint)(((float)dVar13 * DAT_00691400) / DAT_00691404 + DAT_00683ffc);
    if ((int)uVar8 < 0xb5) {
      uVar8 = 0xb4;
    }
    if ((((pGVar9[0x108] != (GUILabel)0xb4) || ((uint)(byte)pGVar9[0x109] != (uVar8 & 0xff))) ||
        (pGVar9[0x10a] != (GUILabel)0xb4)) || (pGVar9[0x10b] != (GUILabel)0xff)) {
      plVar11 = *(long **)(pGVar9 + 0x118);
      *(uint *)(pGVar9 + 0x108) = (uVar8 & 0xff) << 8 | 0xffb400b4;
      *(undefined8 *)(pGVar9 + 0x110) = 0;
      *(undefined8 *)(pGVar9 + 0x118) = 0;
                    /* try { // try from 0049dedc to 0059dee7 has its CatchHandler @ 0049e040 */
      if ((plVar11 != (long *)0x0) && (lVar6 = plVar11[1], plVar11[1] = lVar6 + -1, lVar6 + -1 == 0)
         ) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        lVar6 = plVar11[2];
                    /* try { // try from 0049defc to 0059df07 has its CatchHandler @ 0049dfc4 */
        plVar11[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      GUILabel::UpdateText(pGVar9);
    }
  }
                    /* try { // try from 0049df28 to 0059df2b has its CatchHandler @ 0049e040 */
  GUIView::Update((GUIView *)this,param_1);
                    /* try { // try from 0049df2c to 0059dfe7 has its CatchHandler @ 0049dc48 */
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0049dd20 with catch @ 0049e028 */
  __stack_chk_fail();
}


