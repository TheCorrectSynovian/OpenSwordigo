/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2868
 * Function: Caver::Image::Resize
 * Signature: undefined __thiscall Resize(Image * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::Resize(int, int) */

void __thiscall Caver::Image::Resize(Image *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *__dest;
  void *pvVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  void *__src;
  int iVar10;
  size_t __n;
  undefined8 uVar11;
  FloatColor aFStack_98 [16];
  Image local_88 [4];
  int local_84;
  undefined4 uStack_80;
  undefined8 local_7c;
  int local_74;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_88[0] = *this;
  iVar1 = *(int *)(this + 4);
  uStack_80 = *(undefined4 *)(this + 8);
  uVar11 = *(undefined8 *)(this + 0xc);
  local_74 = *(int *)(this + 0x14);
  __n = (size_t)local_74;
  uVar8 = __n;
  if ((long)__n < 0) {
    uVar8 = 0xffffffffffffffff;
  }
  local_84 = iVar1;
  local_7c = uVar11;
  __dest = operator_new__(uVar8);
                    /* catch() { ... } // from try @ 005d1298 with catch @ 005d28d8 */
  __src = *(void **)(this + 0x18);
  local_70 = __dest;
                    /* catch() { ... } // from try @ 005d1b60 with catch @ 005d28dc */
                    /* catch() { ... } // from try @ 005d1a60 with catch @ 005d28e0 */
                    /* catch() { ... } // from try @ 005d18c0 with catch @ 005d28e4 */
  memcpy(__dest,__src,__n);
                    /* catch() { ... } // from try @ 005d17b8 with catch @ 005d28e8 */
                    /* catch() { ... } // from try @ 005d1678 with catch @ 005d28ec */
  *(int *)(this + 4) = param_1;
  *(int *)(this + 8) = param_2;
                    /* catch() { ... } // from try @ 005d1634 with catch @ 005d28f0 */
  uVar3 = (int)uVar11 - 1;
  if (uVar3 < 8) {
    iVar6 = *(int *)(&DAT_00698170 + (long)(int)uVar3 * 4);
  }
  else {
                    /* try { // try from 005d2910 to 006d3aeb has its CatchHandler @ 005d3c50 */
    iVar6 = 0;
  }
  iVar7 = param_2 * param_1 * iVar6;
  *(int *)(this + 0x10) = iVar6;
  *(int *)(this + 0x14) = iVar7;
  uVar8 = (ulong)iVar7;
  if ((long)uVar8 < 0) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar5 = operator_new__(uVar8);
  *(void **)(this + 0x18) = pvVar5;
  if (__src != (void *)0x0) {
                    /* catch() { ... } // from try @ 005d15d0 with catch @ 005d293c */
    operator_delete__(__src);
                    /* catch() { ... } // from try @ 005d14d4 with catch @ 005d2940 */
    param_2 = *(int *)(this + 8);
  }
                    /* catch() { ... } // from try @ 005d12fc with catch @ 005d2944 */
                    /* catch() { ... } // from try @ 005d0c08 with catch @ 005d2948 */
  if (0 < param_2) {
                    /* catch() { ... } // from try @ 005d2258 with catch @ 005d294c */
    iVar7 = *(int *)(this + 4);
                    /* catch() { ... } // from try @ 005d21c4 with catch @ 005d2950 */
    iVar6 = 0;
    do {
                    /* catch() { ... } // from try @ 005d2130 with catch @ 005d2954 */
                    /* catch() { ... } // from try @ 005d20a0 with catch @ 005d2958 */
      if (0 < iVar7) {
                    /* catch() { ... } // from try @ 005d2010 with catch @ 005d295c */
        iVar10 = 0;
                    /* catch() { ... } // from try @ 005d1f80 with catch @ 005d2960 */
        iVar9 = 0;
                    /* catch() { ... } // from try @ 005d1ef0 with catch @ 005d2964 */
        do {
                    /* catch() { ... } // from try @ 005d1e60 with catch @ 005d2968 */
          iVar2 = 0;
          if (iVar7 != 0) {
            iVar2 = iVar10 / iVar7;
          }
                    /* catch() { ... } // from try @ 005d1dd0 with catch @ 005d296c */
                    /* catch() { ... } // from try @ 005d1d40 with catch @ 005d2970 */
                    /* catch() { ... } // from try @ 005d1cb0 with catch @ 005d2974 */
                    /* catch() { ... } // from try @ 005d1c20 with catch @ 005d2978 */
          GetPixel((int)local_88,iVar2);
                    /* catch() { ... } // from try @ 005d1bcc with catch @ 005d297c */
                    /* catch() { ... } // from try @ 005d1b9c with catch @ 005d2980 */
                    /* catch() { ... } // from try @ 005d1b38 with catch @ 005d2984 */
          SetPixel(this,iVar9,iVar6,aFStack_98);
          iVar7 = *(int *)(this + 4);
          param_2 = *(int *)(this + 8);
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + iVar1;
        } while (iVar9 < iVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
  }
  operator_delete__(__dest);
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 005d1a94 with catch @ 005d29d4 */
                    /* catch() { ... } // from try @ 005d1a38 with catch @ 005d29d8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


