/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc588
 * Function: Caver::WeaponTrail::Update
 * Signature: undefined __thiscall Update(WeaponTrail * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrail::Update(float) */

void __thiscall Caver::WeaponTrail::Update(WeaponTrail *this,float param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar9 = *(int *)(this + 4);
  if (iVar9 != 0) {
    if ((*(float *)(this + 0x30) < DAT_00683730) &&
       (fVar10 = *(float *)(this + 0x30) + param_1 / *(float *)(this + 0x34),
       bVar3 = DAT_00683730 <= fVar10, *(float *)(this + 0x30) = fVar10, bVar3)) {
      *(undefined4 *)(this + 0x30) = 0x3f800000;
    }
    if (this[0x24] == (WeaponTrail)0x0) {
      fVar10 = 0.0;
    }
    else {
      fVar11 = *(float *)(this + 0x28);
      if (DAT_00683944 <= fVar11) {
        fVar10 = param_1 / fVar11 + 0.0;
      }
      else {
        iVar9 = 0;
        *(undefined4 *)(this + 0x28) = 0;
        *(undefined4 *)(this + 4) = 0;
        *(undefined4 *)(this + 0x30) = 0;
        this[0x24] = (WeaponTrail)0x0;
        fVar11 = 0.0;
        fVar10 = 0.0;
      }
      *(float *)(this + 0x28) = fVar11 - param_1;
    }
    fVar11 = DAT_00683734;
    if (DAT_00683734 < *(float *)(this + 0x2c)) {
      fVar10 = fVar10 + param_1 / *(float *)(this + 0x2c);
    }
    if ((DAT_00683488 < fVar10) && (0 < iVar9)) {
      lVar4 = 0;
      lVar5 = 0;
      uVar8 = 0;
      do {
        lVar1 = *(long *)(this + 0x18) + lVar4;
        fVar12 = *(float *)(lVar1 + 0x1c) - fVar10;
        fVar14 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + 0x18));
        fVar13 = 0.0;
        if (fVar11 <= fVar12) {
          fVar13 = fVar12;
        }
        fVar15 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + 0x19));
        fVar16 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + 0x1a));
        uVar6 = (uint)(fVar13 * fVar14);
        fVar14 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + 0x1b));
        uVar7 = (uint)(fVar13 * fVar15);
        uVar2 = (uint)lVar5;
        if (fVar11 <= fVar12) {
          uVar2 = uVar8;
        }
        *(float *)(lVar1 + 0x1c) = fVar13;
        uVar8 = (uint)(fVar13 * fVar16);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        iVar9 = (int)(fVar13 * fVar14);
        if (0xfe < (int)uVar7) {
          uVar7 = 0xff;
        }
        if (0xfe < (int)uVar8) {
          uVar8 = 0xff;
        }
        if (0xfe < iVar9) {
          iVar9 = 0xff;
        }
        *(uint *)(lVar1 + 0xc) =
             uVar6 & 0xff | (uVar7 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | iVar9 << 0x18;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x20;
        uVar8 = uVar2;
      } while (lVar5 < (long)*(int *)(this + 4) * 2);
      if (1 < (int)uVar2) {
        uVar8 = *(int *)(this + 4) - (uVar2 >> 1);
        *(uint *)(this + 4) = uVar8;
        memmove(*(void **)(this + 0x18),
                (void *)((long)*(void **)(this + 0x18) + (long)(int)(uVar2 & 0xfffffffe) * 0x20),
                -(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                (ulong)(uVar8 * 2) << 5);
        return;
      }
    }
  }
  return;
}


