/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006037c4
 * Function: CPVRTModelPOD::ReadFromMemory
 * Signature: undefined __thiscall ReadFromMemory(CPVRTModelPOD * this, char * param_1, ulong param_2, char * param_3, ulong param_4, char * param_5, ulong param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::ReadFromMemory(char const*, unsigned long, char*, unsigned long, char*, unsigned
   long) */

undefined4 __thiscall
CPVRTModelPOD::ReadFromMemory
          (CPVRTModelPOD *this,char *param_1,ulong param_2,char *param_3,ulong param_4,char *param_5
          ,ulong param_6)

{
  long lVar1;
  undefined4 uVar2;
  CPVRTResourceFile *this_00;
  ulong uVar3;
  undefined *local_80;
  CPVRTResourceFile *local_78;
  undefined8 local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00602a88 with catch @ 006037e4 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = PTR_vtable_007e72f0 + 0x10;
                    /* catch() { ... } // from try @ 00602a60 with catch @ 00603814 */
                    /* catch() { ... } // from try @ 00602a58 with catch @ 00603818 */
  local_78 = (CPVRTResourceFile *)0x0;
                    /* catch() { ... } // from try @ 00602a10 with catch @ 0060381c */
  local_70 = 0;
  this_00 = operator_new(0x20);
  CPVRTResourceFile::CPVRTResourceFile(this_00,param_1,param_2);
  local_78 = this_00;
  uVar3 = CPVRTResourceFile::IsOpen(this_00);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    local_78 = (CPVRTResourceFile *)0x0;
                    /* catch() { ... } // from try @ 00602840 with catch @ 006038a8 */
    uVar2 = 1;
    local_80 = PTR_vtable_007e72f0 + 0x10;
  }
  else {
                    /* catch() { ... } // from try @ 006029e8 with catch @ 0060384c */
                    /* catch() { ... } // from try @ 006029e0 with catch @ 00603850 */
                    /* catch() { ... } // from try @ 00602900 with catch @ 00603854 */
                    /* catch() { ... } // from try @ 006028ac with catch @ 00603858 */
    uVar2 = FUN_0060346c(this,&local_80,param_3,param_4,param_5,param_6);
    local_80 = PTR_vtable_007e72f0 + 0x10;
    if (local_78 != (CPVRTResourceFile *)0x0) {
      (**(code **)(*(long *)local_78 + 8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 006027f0 with catch @ 006038dc */
                    /* catch() { ... } // from try @ 00602690 with catch @ 006038e0 */
                    /* catch() { ... } // from try @ 00602688 with catch @ 006038e4 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


