/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00578ce8
 * Function: Java_com_touchfoo_swordigo_Native_drawApplication
 * Signature: undefined Java_com_touchfoo_swordigo_Native_drawApplication(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_drawApplication(void)

{
  long lVar1;
  RenderingContext *this;
  Matrix4 *this_00;
  float fVar2;
  undefined4 local_a0 [2];
  ulong local_98;
  float local_90;
  float local_8c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (DAT_007e9c20 != (long *)0x0) {
    Caver::RenderingContext::SetViewport(DAT_007e9c10,(Rectangle *)&DAT_007e9c90);
    (**(code **)(*DAT_007e9c20 + 0x70))(DAT_007e9c20,DAT_007e9c10);
    this_00 = (Matrix4 *)
              Caver::RenderingContext::SetViewport(DAT_007e9c10,(Rectangle *)&DAT_007e9c80);
    this = DAT_007e9c10;
    Caver::Matrix4::Ortho
              (this_00,(float)DAT_007e9c80,DAT_007e9c80._4_4_ + DAT_007e9c88._4_4_,
               (float)DAT_007e9c80 + (float)DAT_007e9c88,DAT_007e9c80._4_4_,-1.0,1.0);
    Caver::RenderingContext::SetProjectionMatrix(this,(Matrix4 *)&local_98);
    Caver::RenderingContext::SetDepthTestEnabled(DAT_007e9c10,false);
    local_a0[0] = 0xff000000;
    if (0.5 < (float)DAT_007e9c90) {
      local_90 = (float)DAT_007e9c90;
      local_98 = 0;
      local_8c = DAT_007e9c88._4_4_;
      Caver::RenderingContext::FillRect(DAT_007e9c10,(Rectangle *)&local_98,(Color *)local_a0,0.0);
    }
    fVar2 = (float)DAT_007e9c90 + (float)DAT_007e9c98;
    if (fVar2 < (float)DAT_007e9c88 + -0.5) {
      local_90 = (float)DAT_007e9c88 - fVar2;
      local_98 = (ulong)(uint)fVar2;
      local_8c = DAT_007e9c88._4_4_;
      Caver::RenderingContext::FillRect(DAT_007e9c10,(Rectangle *)&local_98,(Color *)local_a0,0.0);
    }
    if (0.5 < DAT_007e9c90._4_4_) {
      local_8c = DAT_007e9c90._4_4_;
      local_98 = 0;
      local_90 = (float)DAT_007e9c88;
      Caver::RenderingContext::FillRect(DAT_007e9c10,(Rectangle *)&local_98,(Color *)local_a0,0.0);
    }
    fVar2 = DAT_007e9c90._4_4_ + DAT_007e9c98._4_4_;
    if (fVar2 < DAT_007e9c88._4_4_ + -0.5) {
      local_8c = DAT_007e9c88._4_4_ - fVar2;
      local_98 = (ulong)(uint)fVar2 << 0x20;
      local_90 = (float)DAT_007e9c88;
      Caver::RenderingContext::FillRect(DAT_007e9c10,(Rectangle *)&local_98,(Color *)local_a0,0.0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


