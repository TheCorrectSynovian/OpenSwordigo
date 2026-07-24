/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00371378
 * Function: Caver::HealthComponent::Draw
 * Signature: undefined __thiscall Draw(HealthComponent * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::HealthComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) */

void __thiscall
Caver::HealthComponent::Draw(HealthComponent *this,RenderingContext *param_1,Matrix4 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  Sprite *this_00;
  string *psVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (DAT_00683488 < *(float *)(this + 0xac)) {
    if (*(long *)(this + 0xb8) == 0) {
      this_00 = operator_new(0x58);
      *(undefined4 *)(this_00 + 0x30) = 0;
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      this_00[0x50] = (Sprite)0x0;
      *(undefined8 *)(this_00 + 0x40) = 0;
      *(undefined8 *)(this_00 + 0x48) = 0;
      *(undefined8 *)(this_00 + 0x38) = 0;
      *(Sprite **)(this + 0xb8) = this_00;
      psVar5 = (string *)TextureLibrary::sharedLibrary();
      FUN_00666bb8(&local_d0,"particle_explosion",auStack_e0);
      TextureLibrary::TextureForName(psVar5,SUB81(&local_d0,0));
      Sprite::Init(this_00,(intrusive_ptr *)&local_90,2,4,false);
      if ((local_90 != (long *)0x0) &&
         (iVar6 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar6, iVar6 == 0)) {
        (**(code **)(*local_90 + 8))();
      }
      if ((undefined *)(local_d0 + -0x18) != PTR_DAT_007e5de8) {
        piVar7 = (int *)(local_d0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = *piVar7;
          *piVar7 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = *piVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = iVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar6 < 1) {
          operator_delete((undefined *)(local_d0 + -0x18));
        }
      }
      uStack_88 = _UNK_006882d8;
      local_90 = _DAT_006882d0;
      local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
      Sprite::AddRectangle
                (*(Sprite **)(this + 0xb8),(Rectangle *)&local_90,
                 (Rectangle *)(*(long *)*(Sprite **)(this + 0xb8) + 0x5c),(Color *)&local_d0);
    }
    uStack_58 = *(undefined8 *)(param_2 + 0x38);
    local_60 = *(undefined8 *)(param_2 + 0x30);
    uStack_68 = *(undefined8 *)(param_2 + 0x28);
    local_70 = *(undefined8 *)(param_2 + 0x20);
    uStack_78 = *(undefined8 *)(param_2 + 0x18);
    local_80 = *(undefined8 *)(param_2 + 0x10);
    uStack_88 = *(undefined8 *)(param_2 + 8);
    local_90 = *(long **)param_2;
    local_a0 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    local_98 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
    uStack_c8 = _UNK_00683498;
    local_d0 = _DAT_00683490;
    uStack_b8 = _UNK_006837e8;
    uStack_c0 = _DAT_006837e0;
    uStack_a8 = _UNK_006837f8;
    local_b0 = _DAT_006837f0;
    uStack_94 = 0x3f800000;
    C_Matrix4Mul((float *)&local_90,(float *)&local_d0,(float *)&local_90);
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_90);
    uVar4 = local_d0;
    fVar11 = *(float *)(this + 0xb0);
    fVar12 = (float)NEON_ucvtf((uint)(byte)this[0xb4]);
    fVar13 = (float)NEON_ucvtf((uint)(byte)this[0xb5]);
    fVar14 = (float)NEON_ucvtf((uint)(byte)this[0xb6]);
    iVar6 = (int)(fVar11 * fVar12);
    fVar12 = (float)NEON_ucvtf((uint)(byte)this[0xb7]);
    iVar8 = (int)(fVar11 * fVar13);
    iVar9 = (int)(fVar11 * fVar14);
    if (0xfe < iVar6) {
      iVar6 = 0xff;
    }
    iVar10 = (int)(fVar11 * fVar12);
    if (0xfe < iVar8) {
      iVar8 = 0xff;
    }
    if (0xfe < iVar9) {
      iVar9 = 0xff;
    }
    if (0xfe < iVar10) {
      iVar10 = 0xff;
    }
    local_d0._4_4_ = SUB84(uVar4,4);
    local_d0._0_4_ =
         (float)CONCAT13((char)iVar10,CONCAT12((char)iVar9,CONCAT11((char)iVar8,(char)iVar6)));
    RenderingContext::SetColor(param_1,(Color *)&local_d0);
    Sprite::Draw(*(Sprite **)(this + 0xb8),param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


