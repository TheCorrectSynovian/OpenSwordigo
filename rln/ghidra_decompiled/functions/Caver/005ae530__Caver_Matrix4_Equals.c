/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ae530
 * Function: Caver::Matrix4::Equals
 * Signature: undefined __thiscall Equals(Matrix4 * this, Matrix4 * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::Equals(Caver::Matrix4 const&, float) const */

undefined8 __thiscall Caver::Matrix4::Equals(Matrix4 *this,Matrix4 *param_1,float param_2)

{
                    /* try { // try from 005ae554 to 006ae563 has its CatchHandler @ 005ae7f8 */
                    /* try { // try from 005ae564 to 006ae58f has its CatchHandler @ 005ae518 */
                    /* try { // try from 005ae590 to 006ae59f has its CatchHandler @ 005ae7c0 */
                    /* try { // try from 005ae5a0 to 006ae5c3 has its CatchHandler @ 005ae518 */
                    /* try { // try from 005ae5c4 to 006ae5d7 has its CatchHandler @ 005ae77c */
                    /* try { // try from 005ae5ec to 006ae5ff has its CatchHandler @ 005ae774 */
                    /* try { // try from 005ae604 to 006ae617 has its CatchHandler @ 005ae7b4 */
                    /* try { // try from 005ae690 to 006ae6a3 has its CatchHandler @ 005ae778 */
  if (((((ABS(*(float *)this - *(float *)param_1) <= param_2) &&
        (ABS(*(float *)(this + 4) - *(float *)(param_1 + 4)) <= param_2)) &&
       (ABS(*(float *)(this + 8) - *(float *)(param_1 + 8)) <= param_2)) &&
      (((ABS(*(float *)(this + 0xc) - *(float *)(param_1 + 0xc)) <= param_2 &&
        (ABS(*(float *)(this + 0x10) - *(float *)(param_1 + 0x10)) <= param_2)) &&
       ((ABS(*(float *)(this + 0x14) - *(float *)(param_1 + 0x14)) <= param_2 &&
        ((ABS(*(float *)(this + 0x18) - *(float *)(param_1 + 0x18)) <= param_2 &&
         (ABS(*(float *)(this + 0x1c) - *(float *)(param_1 + 0x1c)) <= param_2)))))))) &&
     ((ABS(*(float *)(this + 0x20) - *(float *)(param_1 + 0x20)) <= param_2 &&
      (((((ABS(*(float *)(this + 0x24) - *(float *)(param_1 + 0x24)) <= param_2 &&
          (ABS(*(float *)(this + 0x28) - *(float *)(param_1 + 0x28)) <= param_2)) &&
         (ABS(*(float *)(this + 0x2c) - *(float *)(param_1 + 0x2c)) <= param_2)) &&
        ((ABS(*(float *)(this + 0x30) - *(float *)(param_1 + 0x30)) <= param_2 &&
         (ABS(*(float *)(this + 0x34) - *(float *)(param_1 + 0x34)) <= param_2)))) &&
       ((ABS(*(float *)(this + 0x38) - *(float *)(param_1 + 0x38)) <= param_2 &&
        (ABS(*(float *)(this + 0x3c) - *(float *)(param_1 + 0x3c)) <= param_2)))))))) {
    return 1;
  }
  return 0;
}


