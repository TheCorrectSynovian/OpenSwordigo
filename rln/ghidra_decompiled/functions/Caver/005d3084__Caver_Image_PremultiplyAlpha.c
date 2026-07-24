/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d3084
 * Function: Caver::Image::PremultiplyAlpha
 * Signature: undefined __thiscall PremultiplyAlpha(Image * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::PremultiplyAlpha() */

void __thiscall Caver::Image::PremultiplyAlpha(Image *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*this == (Image)0x0) {
    iVar3 = *(int *)(this + 8);
    if (0 < iVar3) {
      iVar2 = *(int *)(this + 4);
      iVar4 = 0;
      do {
        if (0 < iVar2) {
                    /* catch() { ... } // from try @ 005d1c04 with catch @ 005d30cc */
          iVar3 = 0;
          do {
                    /* catch() { ... } // from try @ 005d1be8 with catch @ 005d30d0 */
                    /* catch() { ... } // from try @ 005d0cf4 with catch @ 005d30d4 */
            GetPixel((int)this,iVar3);
            local_50 = fStack_3c * local_40;
            local_58 = CONCAT44((float)((ulong)local_48 >> 0x20) * fStack_3c,
                                (float)local_48 * fStack_3c);
            fStack_4c = fStack_3c;
            SetPixel(this,iVar3,iVar4,(FloatColor *)&local_58);
            iVar2 = *(int *)(this + 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
          iVar3 = *(int *)(this + 8);
        }
                    /* catch() { ... } // from try @ 005d0f30 with catch @ 005d3124 */
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
                    /* catch() { ... } // from try @ 005d0e90 with catch @ 005d3134 */
    *this = (Image)0x1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 005d0e60 with catch @ 005d314c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


