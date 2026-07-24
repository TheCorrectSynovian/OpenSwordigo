/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00602d48
 * Function: CSource::ReadMarker
 * Signature: undefined __thiscall ReadMarker(CSource * this, uint * param_1, uint * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CSource::ReadMarker(unsigned int&, unsigned int&) */

void __thiscall CSource::ReadMarker(CSource *this,uint *param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint local_3c;
  long local_38;
  
                    /* try { // try from 00602d4c to 00702d73 has its CatchHandler @ 00603558 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00602d74 to 00702d87 has its CatchHandler @ 00603758 */
  uVar2 = (**(code **)(*(long *)this + 0x10))(this,&local_3c,4);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 00602d98 to 00702dab has its CatchHandler @ 00603c70 */
    *param_1 = local_3c;
    uVar2 = (**(code **)(*(long *)this + 0x10))(this,&local_3c,4);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      *param_2 = local_3c;
      goto LAB_00602dc4;
    }
  }
  uVar3 = 0;
LAB_00602dc4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00602de4 to 00702e0b has its CatchHandler @ 00603508 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


