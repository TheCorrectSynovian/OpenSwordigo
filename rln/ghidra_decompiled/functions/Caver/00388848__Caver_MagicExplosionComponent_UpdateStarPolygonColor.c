/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00388848
 * Function: Caver::MagicExplosionComponent::UpdateStarPolygonColor
 * Signature: undefined __cdecl UpdateStarPolygonColor(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::UpdateStarPolygonColor() */

void Caver::MagicExplosionComponent::UpdateStarPolygonColor(void)

{
  long lVar1;
  float fVar2;
  long in_x0;
  FloatColor *in_x1;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (*(long *)(in_x0 + 0x168) != 0) {
    Color::FromFloatColor((Color *)(in_x0 + 0xb0),in_x1);
    fVar2 = DAT_00687824;
    fVar9 = (float)NEON_ucvtf((uint)local_30);
    fVar10 = (float)NEON_ucvtf((uint)local_2f);
    fVar11 = (float)NEON_ucvtf((uint)local_2e);
    uVar3 = (uint)(fVar9 * DAT_00684430);
    uVar5 = (uint)(fVar10 * DAT_00684430);
    fVar12 = (float)NEON_ucvtf((uint)local_2d);
    uVar6 = (uint)(fVar11 * DAT_00684430);
    if (0xfe < (int)uVar3) {
      uVar3 = 0xff;
    }
    iVar7 = (int)(fVar12 * DAT_00684430);
    if (0xfe < (int)uVar5) {
      uVar5 = 0xff;
    }
    if (0xfe < (int)uVar6) {
      uVar6 = 0xff;
    }
    if (0xfe < iVar7) {
      iVar7 = 0xff;
    }
    uVar3 = uVar3 & 0xff | (uVar5 & 0xff) << 8 | (uVar6 & 0xff) << 0x10 | iVar7 << 0x18;
    *(uint *)(*(long *)(in_x0 + 0x168) + 0x1c) = uVar3;
    uVar5 = (uint)(fVar9 * fVar2);
    *(uint *)(*(long *)(in_x0 + 0x168) + 0x2c) = uVar3;
    uVar6 = (uint)(fVar10 * fVar2);
    *(uint *)(*(long *)(in_x0 + 0x168) + 0x3c) = uVar3;
    uVar8 = (uint)(fVar11 * fVar2);
    *(uint *)(*(long *)(in_x0 + 0x168) + 0x4c) = uVar3;
    if (0xfe < (int)uVar5) {
      uVar5 = 0xff;
    }
    iVar7 = (int)(fVar12 * fVar2);
    if (0xfe < (int)uVar6) {
      uVar6 = 0xff;
    }
    if (0xfe < (int)uVar8) {
      uVar8 = 0xff;
    }
    if (0xfe < iVar7) {
      iVar7 = 0xff;
    }
    uVar3 = uVar5 & 0xff | (uVar6 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | iVar7 << 0x18;
    *(uint *)(*(long *)(in_x0 + 0x168) + 0x4c) = uVar3;
    *(uint *)(*(long *)(in_x0 + 0x168) + 0x5c) = uVar3;
    *(uint *)(*(long *)(in_x0 + 0x168) + 0x6c) = uVar3;
    *(uint *)(*(long *)(in_x0 + 0x168) + 0x7c) = uVar3;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


