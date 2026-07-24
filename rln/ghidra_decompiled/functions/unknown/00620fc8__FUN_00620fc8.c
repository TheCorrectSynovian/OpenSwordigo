/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620fc8
 * Function: FUN_00620fc8
 * Signature: undefined FUN_00620fc8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


char FUN_00620fc8(long param_1,byte param_2,char param_3)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xf0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  cVar1 = *(char *)((long)plVar3 + (long)(int)(uint)param_2 + 0x139);
  if (cVar1 == '\0') {
                    /* try { // try from 00621000 to 00721007 has its CatchHandler @ 0062202c */
    cVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3);
    cVar1 = param_3;
    if (param_3 != cVar2) {
      *(char *)((long)plVar3 + (long)(int)(uint)param_2 + 0x139) = cVar2;
                    /* try { // try from 00621020 to 00721027 has its CatchHandler @ 006223b4 */
                    /* try { // try from 00621028 to 0072103b has its CatchHandler @ 006223b0 */
      return cVar2;
    }
  }
  return cVar1;
}


