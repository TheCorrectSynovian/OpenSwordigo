/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a4884
 * Function: Caver::GUIWindow::MouseMoved
 * Signature: undefined __thiscall MouseMoved(GUIWindow * this, Vector2 * param_1, Vector2 * param_2, uint param_3, double param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::MouseMoved(Caver::Vector2 const&, Caver::Vector2 const&, unsigned int, double)
    */

void __thiscall
Caver::GUIWindow::MouseMoved
          (GUIWindow *this,Vector2 *param_1,Vector2 *param_2,uint param_3,double param_4)

{
  long lVar1;
  long lVar2;
  long *local_80;
  long *local_78;
  double local_70;
  int local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
                    /* try { // try from 005a4890 to 006a48bf has its CatchHandler @ 005a4890
                       catch() { ... } // from try @ 005a4890 with catch @ 005a4890
                       catch() { ... } // from try @ 005a48c4 with catch @ 005a4890
                       catch() { ... } // from try @ 005a49f0 with catch @ 005a4890
                       catch() { ... } // from try @ 005a4aa4 with catch @ 005a4890 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005a48c0 to 006a48c3 has its CatchHandler @ 005a4ab0 */
                    /* try { // try from 005a48c4 to 006a49af has its CatchHandler @ 005a4890 */
  (**(code **)(*(long *)this + 0xe8))(&local_80,this,param_2);
  if (local_80 != (long *)0x0) {
    local_70 = (double)param_3;
    local_68 = (int)param_4;
    uStack_64 = 1;
    local_60 = *(undefined8 *)param_2;
    local_58 = *(undefined8 *)param_1;
    local_50 = 0;
    (**(code **)(*local_80 + 0x20))(local_80,&local_70);
  }
  if ((local_78 != (long *)0x0) && (lVar2 = local_78[1], local_78[1] = lVar2 + -1, lVar2 + -1 == 0))
  {
    (**(code **)(*local_78 + 0x10))(local_78);
    lVar2 = local_78[2];
    local_78[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*local_78 + 0x18))(local_78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


