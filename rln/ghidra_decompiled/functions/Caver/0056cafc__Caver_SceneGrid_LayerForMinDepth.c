/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056cafc
 * Function: Caver::SceneGrid::LayerForMinDepth
 * Signature: undefined __thiscall LayerForMinDepth(SceneGrid * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::LayerForMinDepth(float) */

float * __thiscall Caver::SceneGrid::LayerForMinDepth(SceneGrid *this,float param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)this;
  if (0 < iVar1) {
    lVar2 = 0;
    puVar3 = *(undefined8 **)(this + 8);
    do {
      if (*(float *)*puVar3 < param_1) {
        return (float *)*puVar3;
      }
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (lVar2 < iVar1);
  }
  return (float *)(*(undefined8 **)(this + 8))[(long)iVar1 * 2 + -2];
}


