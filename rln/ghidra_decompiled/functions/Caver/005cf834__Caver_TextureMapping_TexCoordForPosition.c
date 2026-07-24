/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf834
 * Function: Caver::TextureMapping::TexCoordForPosition
 * Signature: undefined __cdecl TexCoordForPosition(Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&) const */

void Caver::TextureMapping::TexCoordForPosition(Vector3 *param_1)

{
  long lVar1;
  Vector2 *pVVar2;
  undefined8 *in_x1;
  undefined8 *in_x8;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(param_1 + 8);
  if (DAT_00683734 <= ABS(fVar4)) {
    uVar5 = CONCAT44(((float)((ulong)*in_x1 >> 0x20) -
                     (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20)) / fVar4 + 0.5,
                     ((float)*in_x1 - (float)*(undefined8 *)(param_1 + 0xc)) / fVar4 + 0.5);
    pVVar2 = *(Vector2 **)param_1;
    if ((pVVar2 != (Vector2 *)0x0) && (*(long *)(pVVar2 + 0x70) != 0)) {
      Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(pVVar2);
      uVar5 = local_38;
    }
    *in_x8 = uVar5;
  }
  else {
    *in_x8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


