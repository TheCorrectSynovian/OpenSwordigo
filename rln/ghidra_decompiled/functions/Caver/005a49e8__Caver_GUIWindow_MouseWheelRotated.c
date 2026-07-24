/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a49e8
 * Function: Caver::GUIWindow::MouseWheelRotated
 * Signature: undefined __thiscall MouseWheelRotated(GUIWindow * this, float param_1, Vector2 * param_2, uint param_3, double param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::MouseWheelRotated(float, Caver::Vector2 const&, unsigned int, double) */

void __thiscall
Caver::GUIWindow::MouseWheelRotated
          (GUIWindow *this,float param_1,Vector2 *param_2,uint param_3,double param_4)

{
  long lVar1;
  long lVar2;
  long *local_80;
  long *local_78;
  double local_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  float local_50;
  long local_48;
  
                    /* try { // try from 005a49f0 to 006a4a7b has its CatchHandler @ 005a4890 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0xe8))(&local_80);
  if (local_80 != (long *)0x0) {
    local_70 = (double)param_3;
    local_68 = (int)param_4;
    uStack_64 = 4;
    local_60 = *(undefined4 *)param_2;
    uStack_5c = *(undefined4 *)(param_2 + 4);
                    /* catch() { ... } // from try @ 005a49b0 with catch @ 005a4a5c */
    local_58 = local_60;
    uStack_54 = uStack_5c;
    local_50 = param_1;
    (**(code **)(*local_80 + 0x20))(local_80,&local_70);
  }
                    /* try { // try from 005a4a7c to 006a4aa3 has its CatchHandler @ 005a4aac */
  if ((local_78 != (long *)0x0) && (lVar2 = local_78[1], local_78[1] = lVar2 + -1, lVar2 + -1 == 0))
  {
    (**(code **)(*local_78 + 0x10))(local_78);
    lVar2 = local_78[2];
    local_78[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 005a4aa4 to 006a4ac3 has its CatchHandler @ 005a4890 */
                    /* catch() { ... } // from try @ 005a4a7c with catch @ 005a4aac */
      (**(code **)(*local_78 + 0x18))(local_78);
    }
  }
                    /* catch() { ... } // from try @ 005a48c0 with catch @ 005a4ab0 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


