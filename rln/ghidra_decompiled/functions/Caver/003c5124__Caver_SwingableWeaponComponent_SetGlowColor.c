/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c5124
 * Function: Caver::SwingableWeaponComponent::SetGlowColor
 * Signature: undefined __thiscall SetGlowColor(SwingableWeaponComponent * this, FloatColor param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor) */

void __thiscall
Caver::SwingableWeaponComponent::SetGlowColor(SwingableWeaponComponent *this,FloatColor *param_2)

{
  FloatColor *this_00;
  int iVar1;
  long lVar2;
  WeaponGlowComponent *this_01;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *extraout_x1_01;
  FloatColor *extraout_x1_02;
  FloatColor *extraout_x1_03;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (FloatColor *)(this + 0x1a8);
  uVar6 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x1b0) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)this_00 = uVar6;
  this_01 = *(WeaponGlowComponent **)(this + 0x168);
  if (this_01 == (WeaponGlowComponent *)0x0) {
    this_01 = *(WeaponGlowComponent **)(this + 0x108);
    if (this_01 == (WeaponGlowComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xf8),(Component *)this);
      this_01 = *(WeaponGlowComponent **)(this + 0x108);
      param_2 = extraout_x1;
      if (this_01 != (WeaponGlowComponent *)0x0) goto LAB_003c5178;
    }
    else {
LAB_003c5178:
      *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0x168);
    *(WeaponGlowComponent **)(this + 0x168) = this_01;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))(plVar3);
      this_01 = *(WeaponGlowComponent **)(this + 0x168);
      param_2 = extraout_x1_00;
    }
    if (this_01 != (WeaponGlowComponent *)0x0) goto LAB_003c51b8;
  }
  else {
LAB_003c51b8:
    WeaponGlowComponent::SetColor(this_01,this_00);
    param_2 = extraout_x1_01;
  }
  lVar4 = *(long *)(this + 0xf0);
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe0),(Component *)this);
    lVar4 = *(long *)(this + 0xf0);
    param_2 = extraout_x1_02;
    if (lVar4 == 0) goto LAB_003c525c;
  }
  Color::FromFloatColor((Color *)this_00,param_2);
  fVar5 = (float)NEON_ucvtf((uint)local_58);
  fStack_4c = (float)NEON_ucvtf((uint)local_57);
  local_48 = (float)NEON_ucvtf((uint)local_56);
  fStack_44 = (float)NEON_ucvtf((uint)local_55);
  fStack_4c = fStack_4c / DAT_00683ffc;
  local_48 = local_48 / DAT_00683ffc;
  fStack_44 = fStack_44 / DAT_00683ffc;
  local_50 = (fVar5 / DAT_00683ffc) * *(float *)(lVar4 + 0xc0);
  *(float *)(lVar4 + 0xb0) = fVar5 / DAT_00683ffc;
  *(float *)(lVar4 + 0xb4) = fStack_4c;
  fStack_4c = fStack_4c * *(float *)(lVar4 + 0xc4);
  *(float *)(lVar4 + 0xb8) = local_48;
  *(float *)(lVar4 + 0xbc) = fStack_44;
  local_48 = local_48 * *(float *)(lVar4 + 200);
  fStack_44 = fStack_44 * *(float *)(lVar4 + 0xcc);
  Color::FromFloatColor((Color *)&local_50,extraout_x1_03);
  *(undefined4 *)(lVar4 + 0x78) = local_3c;
LAB_003c525c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


