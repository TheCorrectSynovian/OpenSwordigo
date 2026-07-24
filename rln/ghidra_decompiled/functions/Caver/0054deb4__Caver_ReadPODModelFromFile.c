/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054deb4
 * Function: Caver::ReadPODModelFromFile
 * Signature: undefined __cdecl ReadPODModelFromFile(CPVRTModelPOD * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ReadPODModelFromFile(CPVRTModelPOD*, std::string const&) */

void Caver::ReadPODModelFromFile(CPVRTModelPOD *param_1,string *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 0054dd84 with catch @ 0054dec0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0054dd3c with catch @ 0054ded0 */
                    /* catch() { ... } // from try @ 0054dcf4 with catch @ 0054dee0 */
  pcVar3 = (char *)NewByteBufferFromAndroidAsset(param_2,&local_3c);
  uVar4 = 0;
  if (pcVar3 != (char *)0x0) {
                    /* catch() { ... } // from try @ 0054dcac with catch @ 0054def0 */
                    /* catch() { ... } // from try @ 0054dc64 with catch @ 0054df00 */
    iVar2 = CPVRTModelPOD::ReadFromMemory
                      (param_1,pcVar3,(ulong)local_3c,(char *)0x0,0,(char *)0x0,0);
                    /* catch() { ... } // from try @ 0054dc1c with catch @ 0054df10 */
    if (iVar2 == 0) {
      operator_delete__(pcVar3);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
                    /* try { // try from 0054df34 to 0064e15b has its CatchHandler @ 0054e164 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


