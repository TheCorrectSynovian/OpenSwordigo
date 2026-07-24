/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af198
 * Function: Caver::Matrix4::PostTranslate
 * Signature: undefined __thiscall PostTranslate(Matrix4 * this, float param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::PostTranslate(float, float, float) */

void __thiscall
Caver::Matrix4::PostTranslate(Matrix4 *this,float param_1,float param_2,float param_3)

{
                    /* try { // try from 005af198 to 006af1a3 has its CatchHandler @ 005aedc8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005af170 with catch @ 005af1a0
                        */
  *(ulong *)(this + 0x38) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x38) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * param_1 +
                (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) * param_2 +
                (float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20) * param_3,
                (float)*(undefined8 *)(this + 0x38) +
                (float)*(undefined8 *)(this + 8) * param_1 +
                (float)*(undefined8 *)(this + 0x18) * param_2 +
                (float)*(undefined8 *)(this + 0x28) * param_3);
  *(ulong *)(this + 0x30) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20) +
                (float)((ulong)*(undefined8 *)this >> 0x20) * param_1 +
                (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * param_2 +
                (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) * param_3,
                (float)*(undefined8 *)(this + 0x30) +
                (float)*(undefined8 *)this * param_1 + (float)*(undefined8 *)(this + 0x10) * param_2
                + (float)*(undefined8 *)(this + 0x20) * param_3);
  return;
}


