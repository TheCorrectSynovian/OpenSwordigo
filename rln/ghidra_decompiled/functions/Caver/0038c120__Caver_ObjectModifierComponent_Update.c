/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038c120
 * Function: Caver::ObjectModifierComponent::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectModifierComponent::Update(float) */

float Caver::ObjectModifierComponent::Update(float param_1)

{
  long in_x0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(in_x0 + 0x70) != 0) {
    param_1 = *(float *)(*(long *)(*(long *)(in_x0 + 0x28) + 0x20) + 0x24) +
              *(float *)(in_x0 + 0x74);
    *(float *)(in_x0 + 0x74) = param_1;
    if (*(int *)(in_x0 + 0x70) == 1) {
      fVar6 = *(float *)(in_x0 + 0x78) * 0.5;
      fVar5 = 0.0;
      if (fVar6 < param_1) {
        fVar5 = (param_1 - fVar6) / (*(float *)(in_x0 + 0x78) - fVar6);
      }
      fVar6 = *(float *)(in_x0 + 0x7c) + fVar5 * (1.0 - *(float *)(in_x0 + 0x7c));
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      *(float *)(*(long *)(in_x0 + 0x28) + 0x40) = fVar6;
      if (*(long *)(in_x0 + 0x80) != 0) {
        fVar5 = 1.0 - fVar5;
        uVar1 = (uint)(fVar5 * DAT_00688d14);
        uVar2 = (uint)(fVar5 * DAT_00688d18);
        uVar3 = (uint)(fVar5 * DAT_00688d1c);
        if (0xfe < (int)uVar1) {
          uVar1 = 0xff;
        }
        iVar4 = (int)(fVar5 * DAT_00688d20);
        if (0xfe < (int)uVar2) {
          uVar2 = 0xff;
        }
        if (0xfe < (int)uVar3) {
          uVar3 = 0xff;
        }
        if (0xfe < iVar4) {
          iVar4 = 0xff;
        }
        *(uint *)(*(long *)(in_x0 + 0x80) + 0x136) =
             iVar4 << 0x18 | (uVar3 & 0xff) << 0x10 | uVar1 & 0xff | (uVar2 & 0xff) << 8;
        *(undefined1 *)(*(long *)(in_x0 + 0x80) + 0x135) = 1;
        param_1 = *(float *)(in_x0 + 0x74);
      }
    }
    if (*(float *)(in_x0 + 0x78) < param_1) {
      if (*(int *)(in_x0 + 0x70) == 1) {
        *(undefined4 *)(*(long *)(in_x0 + 0x28) + 0x40) = 0x3f800000;
        if (*(long *)(in_x0 + 0x80) != 0) {
          *(undefined1 *)(*(long *)(in_x0 + 0x80) + 0x135) = 0;
        }
      }
      *(undefined4 *)(in_x0 + 0x70) = 0;
    }
  }
  return param_1;
}


