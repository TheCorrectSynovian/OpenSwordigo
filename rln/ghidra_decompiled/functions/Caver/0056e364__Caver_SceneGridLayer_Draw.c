/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056e364
 * Function: Caver::SceneGridLayer::Draw
 * Signature: undefined __thiscall Draw(SceneGridLayer * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SceneGridLayer::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) */

void __thiscall
Caver::SceneGridLayer::Draw(SceneGridLayer *this,RenderingContext *param_1,Matrix4 *param_2)

{
  FontText *this_00;
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  char *pcVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  undefined *puVar19;
  long *plVar20;
  int iVar21;
  float local_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  float local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  long *local_c0;
  char acStack_b4 [44];
  long local_88;
  
                    /* catch() { ... } // from try @ 0056d810 with catch @ 0056e38c
                       catch() { ... } // from try @ 0056d854 with catch @ 0056e38c */
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  if (this[0x48] == (SceneGridLayer)0x0) {
    CreateVertexData(this);
  }
  RenderingContext::SetTexturingEnabled(param_1,false);
                    /* catch() { ... } // from try @ 0056d790 with catch @ 0056e3c4
                       catch() { ... } // from try @ 0056d7d4 with catch @ 0056e3c4 */
  RenderingContext::UseProgram(param_1,0);
  RenderingContext::SetMatrix(param_1,param_2);
  RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0xc,*(undefined8 *)(this + 0x50))
  ;
                    /* catch() { ... } // from try @ 0056d8f0 with catch @ 0056e418
                       catch() { ... } // from try @ 0056d990 with catch @ 0056e418 */
  RenderingContext::DrawArrays
            (param_1,1,0,
             (int)((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50)) >> 2) * -0x55555555);
  uVar12 = _UNK_006837f8;
  uVar11 = _DAT_006837f0;
  uVar10 = _UNK_006837e8;
  uVar9 = _DAT_006837e0;
  uVar8 = _UNK_00683498;
  puVar7 = _DAT_00683490;
                    /* catch() { ... } // from try @ 0056d740 with catch @ 0056e41c
                       catch() { ... } // from try @ 0056da20 with catch @ 0056e41c */
  iVar15 = *(int *)(this + 0x2c);
                    /* catch() { ... } // from try @ 0056da50 with catch @ 0056e420 */
  if (0 < iVar15) {
                    /* catch() { ... } // from try @ 0056dac4 with catch @ 0056e430
                       catch() { ... } // from try @ 0056db88 with catch @ 0056e430
                       catch() { ... } // from try @ 0056dbe8 with catch @ 0056e430
                       catch() { ... } // from try @ 0056dc74 with catch @ 0056e430 */
    iVar18 = *(int *)(this + 0x28);
    iVar21 = 0;
    this_00 = (FontText *)(this + 0x68);
                    /* try { // try from 0056e464 to 0066e48b has its CatchHandler @ 0056e540 */
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      if (0 < iVar18) {
        iVar15 = 0;
                    /* try { // try from 0056e48c to 0066e543 has its CatchHandler @ 0056d660 */
        do {
          uStack_120 = *(undefined8 *)(this + 0x18);
          local_128 = CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) +
                               (float)((ulong)uStack_120 >> 0x20) * (float)iVar21,
                               (float)*(undefined8 *)(this + 8) + (float)uStack_120 * (float)iVar15)
          ;
          uVar13 = Rectangle::IntersectsWithRect((Rectangle *)&local_128,(Rectangle *)(this + 0x38))
          ;
          if ((uVar13 & 1) != 0) {
            if (*(long *)this_00 == 0) {
              Font::SystemFont();
              if (local_c0 != (long *)0x0) {
                local_c0[1] = local_c0[1] + 1;
              }
              plVar20 = *(long **)(this + 0x70);
              *(undefined8 *)(this + 0x68) = local_c8;
              *(long **)(this + 0x70) = local_c0;
              if ((plVar20 != (long *)0x0) &&
                 (lVar17 = plVar20[1], plVar20[1] = lVar17 + -1, lVar17 + -1 == 0)) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                lVar17 = plVar20[2];
                plVar20[2] = lVar17 + -1;
                if (lVar17 + -1 == 0) {
                  (**(code **)(*plVar20 + 0x18))(plVar20);
                }
              }
              plVar20 = local_c0;
                    /* catch() { ... } // from try @ 0056e69c with catch @ 0056e5ec */
              if ((local_c0 != (long *)0x0) &&
                 (lVar17 = local_c0[1], local_c0[1] = lVar17 + -1, lVar17 + -1 == 0)) {
                (**(code **)(*local_c0 + 0x10))(local_c0);
                    /* try { // try from 0056e604 to 0066e60b has its CatchHandler @ 0056e6a8 */
                lVar17 = plVar20[2];
                plVar20[2] = lVar17 + -1;
                if (lVar17 + -1 == 0) {
                  (**(code **)(*plVar20 + 0x18))(plVar20);
                }
              }
            }
            FontText::Clear(this_00);
            local_130 = (float)local_128 + 10.0;
            fStack_12c = local_128._4_4_ + uStack_120._4_4_ + -20.0;
                    /* catch() { ... } // from try @ 0056e0d0 with catch @ 0056e540
                       catch() { ... } // from try @ 0056e464 with catch @ 0056e540 */
            uVar3 = *(uint *)(*(long *)(this + 0x30) +
                              (long)(iVar15 + *(int *)(this + 0x28) * iVar21) * 0x10 + 8);
            uVar2 = -uVar3;
            if (-1 < (int)uVar3) {
              uVar2 = uVar3;
            }
            local_110 = puVar1;
            pcVar14 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                                (uVar2,acStack_b4);
            if ((int)uVar3 < 0) {
              pcVar14 = pcVar14 + -1;
              *pcVar14 = '-';
              puVar19 = local_110;
            }
            else {
              puVar19 = PTR_DAT_007e5de8 + 0x18;
            }
                    /* try { // try from 0056e638 to 0066e643 has its CatchHandler @ 0056e650 */
            FUN_00669e1c(&local_110,0,*(undefined8 *)(puVar19 + -0x18),pcVar14,
                         (long)acStack_b4 - (long)pcVar14);
                    /* catch() { ... } // from try @ 0056e638 with catch @ 0056e650 */
            FontText::AddText(this_00,(string *)&local_110,0.0,(Vector2 *)&local_130);
                    /* try { // try from 0056e674 to 0066e69b has its CatchHandler @ 0056e6a4 */
            if (local_110 + -0x18 != PTR_DAT_007e5de8) {
              piVar16 = (int *)(local_110 + -8);
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar18 = *piVar16;
                *piVar16 = iVar18 + -1;
              }
              else {
                do {
                  iVar18 = *piVar16;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar5) {
                    *piVar16 = iVar18 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              if (iVar18 < 1) {
                operator_delete(local_110 + -0x18);
              }
            }
            local_d8 = (*(float *)this + *(float *)(this + 4)) * 0.5;
                    /* try { // try from 0056e69c to 0066e6b7 has its CatchHandler @ 0056e5ec */
            local_e0 = 0;
            local_d4 = 0x3f800000;
                    /* catch() { ... } // from try @ 0056e674 with catch @ 0056e6a4 */
            uStack_108 = uVar8;
            local_110 = puVar7;
                    /* catch() { ... } // from try @ 0056e604 with catch @ 0056e6a8 */
            uStack_f8 = uVar10;
            local_100 = uVar9;
            uStack_e8 = uVar12;
            local_f0 = uVar11;
                    /* try { // try from 0056e6b8 to 0066e6c3 has its CatchHandler @ 0056e6c4 */
            C_Matrix4Mul((float *)param_2,(float *)&local_110,(float *)&local_c8);
                    /* catch() { ... } // from try @ 0056e6b8 with catch @ 0056e6c4 */
            RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_c8);
                    /* try { // try from 0056e6c8 to 0066e6cb has its CatchHandler @ 0056e6d0 */
                    /* catch() { ... } // from try @ 0056e6c8 with catch @ 0056e6d0 */
            FontText::Draw(this_00,param_1);
          }
          iVar18 = *(int *)(this + 0x28);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar18);
        iVar15 = *(int *)(this + 0x2c);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar15);
  }
  if (*(long *)(lVar6 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


