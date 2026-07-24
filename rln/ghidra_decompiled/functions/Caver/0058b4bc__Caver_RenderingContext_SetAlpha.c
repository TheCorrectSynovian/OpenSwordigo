/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b4bc
 * Function: Caver::RenderingContext::SetAlpha
 * Signature: undefined __thiscall SetAlpha(RenderingContext * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetAlpha(float) */

void __thiscall Caver::RenderingContext::SetAlpha(RenderingContext *this,float param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  fVar3 = DAT_00683488;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (DAT_00683488 < ABS(param_1 - *(float *)(this + 0x7c))) {
    *(float *)(this + 0x7c) = param_1;
    glActiveTexture(0x84c1);
    if (fVar3 <= ABS(param_1 + -1.0)) {
      glEnable(0xde1);
      WhiteTexture();
      glBindTexture(0xde1,(int)local_40[7]);
      if ((local_40 != (long *)0x0) &&
         (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*local_40 + 8))(local_40);
      }
      glTexEnvi(0x2300,0x2200,0x8570);
      glTexEnvi(0x2300,0x8571,0x2100);
      glTexEnvi(0x2300,0x8580,0x8578);
      glTexEnvi(0x2300,0x8581,0x8576);
      glTexEnvi(0x2300,0x8572,0x2100);
      glTexEnvi(0x2300,0x8588,0x8578);
      glTexEnvi(0x2300,0x8589,0x8576);
      local_50 = CONCAT44(param_1,param_1);
      uStack_48 = CONCAT44(param_1,param_1);
      glTexEnvfv(0x2300,0x2201,&local_50);
    }
    else {
      glDisable();
    }
    glActiveTexture(0x84c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


