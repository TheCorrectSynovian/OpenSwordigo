/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614430
 * Function: CPVRTString::CPVRTString
 * Signature: undefined __thiscall CPVRTString(CPVRTString * this, char param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPVRTString::CPVRTString(char) */

void __thiscall CPVRTString::CPVRTString(CPVRTString *this,char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
                    /* catch() { ... } // from try @ 00613318 with catch @ 00614440 */
                    /* catch() { ... } // from try @ 006134c4 with catch @ 00614444
                       catch() { ... } // from try @ 00613a6c with catch @ 00614444 */
                    /* catch() { ... } // from try @ 00613484 with catch @ 00614454
                       catch() { ... } // from try @ 00613a90 with catch @ 00614454 */
  *(undefined **)this = PTR_vtable_007e7538 + 0x10;
                    /* catch() { ... } // from try @ 0061395c with catch @ 00614458 */
  pcVar3 = malloc(2);
  uVar2 = _UNK_00694f48;
  uVar1 = _DAT_00694f40;
  *(char **)(this + 8) = pcVar3;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  *pcVar3 = param_1;
  pcVar3[1] = '\0';
  return;
}


