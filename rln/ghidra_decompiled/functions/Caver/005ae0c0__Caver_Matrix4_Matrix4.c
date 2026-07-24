/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ae0c0
 * Function: Caver::Matrix4::Matrix4
 * Signature: undefined __thiscall Matrix4(Matrix4 * this, Matrix3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::Matrix4(Caver::Matrix3 const&) */

void __thiscall Caver::Matrix4::Matrix4(Matrix4 *this,Matrix3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 005ae088 with catch @ 005ae0c4 */
  *(undefined4 *)this = *(undefined4 *)param_1;
                    /* catch() { ... } // from try @ 005ae050 with catch @ 005ae0c8 */
                    /* catch() { ... } // from try @ 005adf44 with catch @ 005ae0cc */
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0xc);
                    /* catch() { ... } // from try @ 005adfe8 with catch @ 005ae0d0 */
  uVar1 = *(undefined4 *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 005adf1c with catch @ 005ae0d4 */
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x14);
  uVar2 = DAT_006840e0;
                    /* catch() { ... } // from try @ 005adf5c with catch @ 005ae10c */
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0xc) = 0;
                    /* catch() { ... } // from try @ 005adee8 with catch @ 005ae118 */
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x38) = uVar2;
  return;
}


