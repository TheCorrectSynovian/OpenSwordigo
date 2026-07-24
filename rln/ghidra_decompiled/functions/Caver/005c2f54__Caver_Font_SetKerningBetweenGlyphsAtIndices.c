/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2f54
 * Function: Caver::Font::SetKerningBetweenGlyphsAtIndices
 * Signature: undefined __thiscall SetKerningBetweenGlyphsAtIndices(Font * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::SetKerningBetweenGlyphsAtIndices(int, int, int) */

void __thiscall
Caver::Font::SetKerningBetweenGlyphsAtIndices(Font *this,int param_1,int param_2,int param_3)

{
  void *__s;
  int iVar1;
  
                    /* try { // try from 005c2f58 to 006c2f5f has its CatchHandler @ 005c2f7c */
                    /* try { // try from 005c2f60 to 006c2f8f has its CatchHandler @ 005c2f44 */
  __s = *(void **)(this + 0x40);
                    /* catch() { ... } // from try @ 005c2f58 with catch @ 005c2f7c */
  if (__s == (void *)0x0) {
    iVar1 = (int)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 2) * -0x45d1745d;
    __s = operator_new__((ulong)(uint)(iVar1 * iVar1));
    *(void **)(this + 0x40) = __s;
    memset(__s,0,(ulong)(uint)(iVar1 * iVar1));
  }
  else {
                    /* catch() { ... } // from try @ 005c312c with catch @ 005c2f98
                       catch() { ... } // from try @ 005c3588 with catch @ 005c2f98 */
    iVar1 = (int)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 2) * -0x45d1745d;
  }
                    /* try { // try from 005c2fec to 006c3013 has its CatchHandler @ 005c33f8 */
  *(char *)((long)__s + (long)(param_2 + iVar1 * param_1)) = (char)param_3;
  return;
}


