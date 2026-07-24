/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044fccc
 * Function: Caver::GUIPropertyValue::ValueWithFloat
 * Signature: undefined __thiscall ValueWithFloat(GUIPropertyValue * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPropertyValue::ValueWithFloat(float) */

void __thiscall Caver::GUIPropertyValue::ValueWithFloat(GUIPropertyValue *this,float param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  float *pfVar4;
  undefined4 *in_x8;
  long lVar5;
  float *local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 0044fcd0 to 0054fcd3 has its CatchHandler @ 0044fce4 */
                    /* try { // try from 0044fcd4 to 0054fcf7 has its CatchHandler @ 0044fcb8 */
                    /* catch() { ... } // from try @ 0044fcd0 with catch @ 0044fce4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0044fcf8 to 0054fd0f has its CatchHandler @ 0044fcf8
                       catch() { ... } // from try @ 0044fcf8 with catch @ 0044fcf8
                       catch() { ... } // from try @ 0044fd14 with catch @ 0044fcf8 */
  pfVar4 = operator_new(4);
  *pfVar4 = param_1;
  local_50 = (long *)0x0;
  local_58 = pfVar4;
                    /* try { // try from 0044fd10 to 0054fd13 has its CatchHandler @ 0044fd24 */
  local_50 = operator_new(0x20);
  puVar2 = PTR_vtable_007e4e98;
                    /* try { // try from 0044fd14 to 0054fd37 has its CatchHandler @ 0044fcf8 */
                    /* catch() { ... } // from try @ 0044fd10 with catch @ 0044fd24 */
  local_50[3] = (long)pfVar4;
  local_50[2] = 1;
  local_50[1] = 1;
  *local_50 = (long)(puVar2 + 0x10);
                    /* try { // try from 0044fd38 to 0054fd4f has its CatchHandler @ 0044fd38
                       catch() { ... } // from try @ 0044fd38 with catch @ 0044fd38
                       catch() { ... } // from try @ 0044fd54 with catch @ 0044fd38 */
  boost::detail::sp_enable_shared_from_this(&local_58,pfVar4,pfVar4);
  plVar3 = local_50;
  if (local_50 == (long *)0x0) {
    *in_x8 = 1;
    *(float **)(in_x8 + 2) = local_58;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  else {
                    /* try { // try from 0044fd50 to 0054fd53 has its CatchHandler @ 0044fd64 */
    lVar5 = local_50[1];
                    /* try { // try from 0044fd54 to 0054fd77 has its CatchHandler @ 0044fd38 */
    local_50[1] = lVar5 + 1;
    *in_x8 = 1;
    *(float **)(in_x8 + 2) = local_58;
    *(long **)(in_x8 + 4) = local_50;
                    /* catch() { ... } // from try @ 0044fd50 with catch @ 0044fd64 */
    if (lVar5 + 1 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
                    /* try { // try from 0044fd78 to 0054fd8f has its CatchHandler @ 0044fd78
                       catch() { ... } // from try @ 0044fd78 with catch @ 0044fd78
                       catch() { ... } // from try @ 0044fd94 with catch @ 0044fd78 */
      lVar5 = plVar3[2];
      plVar3[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 0044fd90 to 0054fd93 has its CatchHandler @ 0044fda4 */
                    /* try { // try from 0044fd94 to 0054fdb7 has its CatchHandler @ 0044fd78 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
                    /* catch() { ... } // from try @ 0044fd90 with catch @ 0044fda4 */
  plVar3 = local_50;
                    /* try { // try from 0044fdb8 to 0054fdcf has its CatchHandler @ 0044fdb8
                       catch() { ... } // from try @ 0044fdb8 with catch @ 0044fdb8
                       catch() { ... } // from try @ 0044fdd4 with catch @ 0044fdb8 */
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar3[2];
                    /* try { // try from 0044fdd0 to 0054fdd3 has its CatchHandler @ 0044fde4 */
                    /* try { // try from 0044fdd4 to 0054fdf7 has its CatchHandler @ 0044fdb8 */
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 0044fdd0 with catch @ 0044fde4 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 0044fdf8 to 0054fe0f has its CatchHandler @ 0044fdf8
                       catch() { ... } // from try @ 0044fdf8 with catch @ 0044fdf8
                       catch() { ... } // from try @ 0044fe14 with catch @ 0044fdf8 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0044fe10 to 0054fe13 has its CatchHandler @ 0044fe24 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0044fe14 to 0054fe37 has its CatchHandler @ 0044fdf8 */
  __stack_chk_fail();
}


