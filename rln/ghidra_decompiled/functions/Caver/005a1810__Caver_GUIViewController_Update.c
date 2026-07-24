/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a1810
 * Function: Caver::GUIViewController::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewController::Update(float) */

float Caver::GUIViewController::Update(float param_1)

{
  long in_x0;
  long *plVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  
  plVar1 = *(long **)(in_x0 + 0x30);
  if (plVar1 != (long *)0x0) {
    plVar3 = *(long **)(in_x0 + 0x38);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    param_1 = (float)(**(code **)(*plVar1 + 0x48))();
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 005a185c to 006a1867 has its CatchHandler @ 005a2290 */
      param_1 = (float)(**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
                    /* try { // try from 005a1878 to 006a188b has its CatchHandler @ 005a21cc */
      if (lVar2 + -1 == 0) {
                    /* try { // try from 005a188c to 006a1897 has its CatchHandler @ 005a21c0 */
                    /* try { // try from 005a1898 to 006a189f has its CatchHandler @ 005a2148 */
                    /* WARNING: Could not recover jumptable at 0x005a189c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar4 = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
        return fVar4;
      }
    }
  }
  return param_1;
}


