/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c3008
 * Function: Caver::Font::Scale
 * Signature: undefined __thiscall Scale(Font * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::Scale(float) */

void __thiscall Caver::Font::Scale(Font *this,float param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *__s;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  *(float *)(this + 0x48) = *(float *)(this + 0x48) * param_1;
  local_80 = param_1;
  fStack_7c = param_1;
  Rectangle::Scale((Rectangle *)(this + 0x4c),(Vector2 *)&local_80);
  lVar3 = *(long *)(this + 0x10);
  if (*(long *)(this + 0x18) != lVar3) {
    uVar6 = 0;
    do {
      lVar3 = lVar3 + uVar6 * 0x2c;
      *(int *)(lVar3 + 0x18) = (int)((float)*(int *)(lVar3 + 0x18) * param_1);
      local_80 = param_1;
      fStack_7c = param_1;
      Rectangle::Scale((Rectangle *)(lVar3 + 8),(Vector2 *)&local_80);
                    /* try { // try from 005c30a8 to 006c30cf has its CatchHandler @ 005c33c8 */
      lVar3 = *(long *)(this + 0x10);
      lVar4 = *(long *)(this + 0x18);
      if (lVar4 == lVar3) break;
      uVar7 = 0;
      do {
        __s = *(void **)(this + 0x40);
        iVar8 = (int)(lVar4 - lVar3 >> 2) * -0x45d1745d;
        if (__s == (void *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)*(char *)((long)__s + (long)((int)uVar7 + (int)uVar6 * iVar8));
        }
        if (__s == (void *)0x0) {
          __s = operator_new__((ulong)(uint)(iVar8 * iVar8));
          *(void **)(this + 0x40) = __s;
                    /* try { // try from 005c3108 to 006c310b has its CatchHandler @ 005c33f0 */
          memset(__s,0,(ulong)(uint)(iVar8 * iVar8));
        }
        *(char *)((long)__s + (long)((int)uVar7 + (int)uVar6 * iVar8)) =
             (char)(int)((float)iVar2 * param_1);
                    /* try { // try from 005c3114 to 006c3117 has its CatchHandler @ 005c33e8 */
        lVar3 = *(long *)(this + 0x10);
        lVar4 = *(long *)(this + 0x18);
        uVar7 = uVar7 + 1;
                    /* try { // try from 005c3120 to 006c3123 has its CatchHandler @ 005c33e0 */
        uVar5 = (lVar4 - lVar3 >> 2) * 0x2e8ba2e8ba2e8ba3;
                    /* try { // try from 005c3128 to 006c312b has its CatchHandler @ 005c33d0 */
                    /* try { // try from 005c312c to 006c3483 has its CatchHandler @ 005c2f98 */
      } while (uVar7 <= uVar5 && uVar5 - uVar7 != 0);
      uVar6 = uVar6 + 1;
    } while (uVar6 <= uVar5 && uVar5 - uVar6 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


