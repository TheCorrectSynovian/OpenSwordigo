/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d22c4
 * Function: Caver::Image::Blit
 * Signature: undefined __thiscall Blit(Image * this, int param_1, int param_2, Image * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::Blit(int, int, Caver::Image const&) */

void __thiscall Caver::Image::Blit(Image *this,int param_1,int param_2,Image *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  void *__src;
  void *__dest;
  int iVar4;
  
  iVar4 = *(int *)(param_3 + 8);
  if (0 < iVar4) {
    uVar1 = *(uint *)(this + 0x10);
    uVar3 = (ulong)uVar1;
    iVar2 = *(int *)(param_3 + 4);
    __src = *(void **)(param_3 + 0x18);
    __dest = (void *)(*(long *)(this + 0x18) + (long)(int)(uVar1 * param_2 * *(int *)(this + 4)) +
                     (long)(int)(uVar1 * param_1));
    do {
                    /* try { // try from 005d2318 to 006d233f has its CatchHandler @ 005d3af8 */
      memcpy(__dest,__src,(long)(int)uVar3 * (long)iVar2);
      uVar3 = (ulong)*(int *)(this + 0x10);
      iVar4 = iVar4 + -1;
      __dest = (void *)((long)__dest + uVar3 * (long)*(int *)(this + 4));
      __src = (void *)((long)__src + (long)*(int *)(param_3 + 0x10) * (long)*(int *)(param_3 + 4));
    } while (iVar4 != 0);
  }
  return;
}


