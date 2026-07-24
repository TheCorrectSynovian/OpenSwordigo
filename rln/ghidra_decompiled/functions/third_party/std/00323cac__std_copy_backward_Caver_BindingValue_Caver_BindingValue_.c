/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323cac
 * Function: std::copy_backward<Caver::BindingValue*,Caver::BindingValue*>
 * Signature: BindingValue * copy_backward<Caver::BindingValue*,Caver::BindingValue*>(BindingValue * param_1, BindingValue * param_2, BindingValue * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Caver::BindingValue* std::copy_backward<Caver::BindingValue*,
   Caver::BindingValue*>(Caver::BindingValue*, Caver::BindingValue*, Caver::BindingValue*) */

BindingValue *
std::copy_backward<Caver::BindingValue*,Caver::BindingValue*>
          (BindingValue *param_1,BindingValue *param_2,BindingValue *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (0 < (long)param_2 - (long)param_1) {
    lVar4 = 0;
    lVar5 = (ulong)((long)param_2 - (long)param_1) / 0x28 + 1;
    do {
      *(undefined4 *)(param_3 + lVar4 + -0x28) = *(undefined4 *)(param_2 + lVar4 + -0x28);
      uVar1 = *(undefined8 *)(param_2 + lVar4 + -0x20);
      lVar2 = *(long *)(param_2 + lVar4 + -0x18);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
      }
      plVar3 = *(long **)(param_3 + lVar4 + -0x18);
      *(undefined8 *)(param_3 + lVar4 + -0x20) = uVar1;
      *(long *)(param_3 + lVar4 + -0x18) = lVar2;
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      uVar1 = *(undefined8 *)(param_2 + lVar4 + -0x10);
      lVar2 = *(long *)(param_2 + lVar4 + -8);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
      }
      plVar3 = *(long **)(param_3 + lVar4 + -8);
      *(undefined8 *)(param_3 + lVar4 + -0x10) = uVar1;
      *(long *)(param_3 + lVar4 + -8) = lVar2;
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + -0x28;
    } while (1 < lVar5);
    param_3 = param_3 + lVar4;
  }
  return param_3;
}


