/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00589df4
 * Function: Caver::FloatColorToProtobufMessage
 * Signature: undefined __cdecl FloatColorToProtobufMessage(FloatColor * param_1, FloatColor * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatColorToProtobufMessage(Caver::FloatColor const&, Caver::Proto::FloatColor*) */

void Caver::FloatColorToProtobufMessage(FloatColor *param_1,FloatColor *param_2)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00589d34 with catch @ 00589df4 */
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0xf;
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  return;
}


