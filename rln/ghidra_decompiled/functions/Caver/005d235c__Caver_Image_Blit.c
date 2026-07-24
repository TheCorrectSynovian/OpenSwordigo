/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d235c
 * Function: Caver::Image::Blit
 * Signature: undefined __thiscall Blit(Image * this, int param_1, int param_2, Image * param_3, int param_4, int param_5, int param_6, int param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::Blit(int, int, Caver::Image const&, int, int, int, int) */

void __thiscall
Caver::Image::Blit(Image *this,int param_1,int param_2,Image *param_3,int param_4,int param_5,
                  int param_6,int param_7)

{
  uint uVar1;
  ulong uVar2;
  void *__src;
  void *__dest;
  
                    /* try { // try from 005d2370 to 006d2373 has its CatchHandler @ 005d3260 */
  if (0 < param_7) {
    uVar1 = *(uint *)(this + 0x10);
    uVar2 = (ulong)uVar1;
                    /* try { // try from 005d2394 to 006d2397 has its CatchHandler @ 005d3270 */
                    /* try { // try from 005d2398 to 006d290f has its CatchHandler @ 005d04f4 */
    __src = (void *)(*(long *)(param_3 + 0x18) +
                     (long)(*(int *)(param_3 + 4) * param_5 * *(int *)(param_3 + 0x10)) +
                    (long)(*(int *)(param_3 + 0x10) * param_4));
    __dest = (void *)(*(long *)(this + 0x18) + (long)(int)(*(int *)(this + 4) * param_2 * uVar1) +
                     (long)(int)(uVar1 * param_1));
    do {
      memcpy(__dest,__src,(long)((int)uVar2 * param_6));
      uVar2 = (ulong)*(int *)(this + 0x10);
      param_7 = param_7 + -1;
      __dest = (void *)((long)__dest + uVar2 * (long)*(int *)(this + 4));
      __src = (void *)((long)__src + (long)*(int *)(param_3 + 0x10) * (long)*(int *)(param_3 + 4));
    } while (param_7 != 0);
  }
  return;
}


