/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ac14c
 * Function: AngleDifference
 * Signature: undefined __cdecl AngleDifference(float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* AngleDifference(float, float) */

float AngleDifference(float param_1,float param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_00688b40;
  fVar4 = param_2 - param_1;
  if (DAT_00684028 <= (double)ABS(param_2 - param_1)) {
                    /* try { // try from 005ac18c to 006ac18f has its CatchHandler @ 005ac750 */
    fVar2 = fmodf(param_1,DAT_00688b40);
                    /* try { // try from 005ac190 to 006ac1cb has its CatchHandler @ 005ac040 */
    fVar3 = fmodf(param_2,fVar5);
    dVar1 = DAT_00689a38;
    fVar4 = fmodf((float)((double)(fVar3 - fVar2) + DAT_00689a38),fVar5);
                    /* try { // try from 005ac1cc to 006ac1e3 has its CatchHandler @ 005ac794 */
    fVar5 = fmodf((float)((double)(fVar2 - fVar3) + dVar1),fVar5);
                    /* try { // try from 005ac1e4 to 006ac2b7 has its CatchHandler @ 005ac040 */
    if (fVar5 <= fVar4) {
      fVar4 = -fVar5;
    }
  }
  return fVar4;
}


