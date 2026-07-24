/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00385dc0
 * Function: Caver::MagicBombComponent::Prepare
 * Signature: undefined __thiscall Prepare(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBombComponent::Prepare() */

void __thiscall Caver::MagicBombComponent::Prepare(MagicBombComponent *this)

{
  long lVar1;
  long *plVar3;
  undefined8 extraout_x1;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  SpellComponent::Prepare();
  SceneObject::SetAlwaysActive(*(SceneObject **)(this + 0x28),true);
  auVar12 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7860);
  lVar2 = auVar12._0_8_;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 200);
  *(long *)(this + 200) = lVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar8 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar3 + 8))();
    auVar12._8_8_ = extraout_x1;
    auVar12._0_8_ = *(undefined8 *)(this + 200);
  }
  if (auVar12._0_8_ != 0) {
    Color::FromFloatColor((Color *)(this + 0xd0),auVar12._8_8_);
    fVar9 = (float)NEON_ucvtf((uint)local_40);
    fVar10 = (float)NEON_ucvtf((uint)local_3f);
    fVar11 = (float)NEON_ucvtf((uint)local_3e);
    uVar4 = (uint)(fVar9 * 1.5);
    fVar9 = (float)NEON_ucvtf((uint)local_3d);
    uVar6 = (uint)(fVar10 * 1.5);
    uVar7 = (uint)(fVar11 * 1.5);
    if (0xfe < (int)uVar4) {
      uVar4 = 0xff;
    }
    iVar8 = (int)(fVar9 * 1.5);
    if (0xfe < (int)uVar6) {
      uVar6 = 0xff;
    }
    if (0xfe < (int)uVar7) {
      uVar7 = 0xff;
    }
    if (0xfe < iVar8) {
      iVar8 = 0xff;
    }
    *(uint *)(auVar12._0_8_ + 0x136) =
         uVar4 & 0xff | (uVar6 & 0xff) << 8 | (uVar7 & 0xff) << 0x10 | iVar8 << 0x18;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


