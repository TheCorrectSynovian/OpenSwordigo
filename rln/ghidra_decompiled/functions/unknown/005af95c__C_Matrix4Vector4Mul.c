/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af95c
 * Function: C_Matrix4Vector4Mul
 * Signature: undefined __cdecl C_Matrix4Vector4Mul(float * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* C_Matrix4Vector4Mul(float const*, float const*, float*) */

void C_Matrix4Vector4Mul(float *param_1,float *param_2,float *param_3)

{
                    /* try { // try from 005af968 to 006af9b7 has its CatchHandler @ 005afdf8 */
  *param_3 = *param_1 * *param_2 + param_1[4] * param_2[1] + param_1[8] * param_2[2] +
             param_1[0xc] * param_2[3];
                    /* try { // try from 005af9b8 to 006afa33 has its CatchHandler @ 005af808 */
  param_3[1] = param_1[1] * *param_2 + param_1[5] * param_2[1] + param_1[9] * param_2[2] +
               param_1[0xd] * param_2[3];
  param_3[2] = param_1[2] * *param_2 + param_1[6] * param_2[1] + param_1[10] * param_2[2] +
               param_1[0xe] * param_2[3];
                    /* try { // try from 005afa34 to 006afa37 has its CatchHandler @ 005afd90 */
                    /* try { // try from 005afa38 to 006afa63 has its CatchHandler @ 005af808 */
  param_3[3] = param_1[3] * *param_2 + param_1[7] * param_2[1] + param_1[0xb] * param_2[2] +
               param_1[0xf] * param_2[3];
  return;
}


