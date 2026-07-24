/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b7d10
 * Function: boost::uuids::detail::sha1::process_byte
 * Signature: undefined __thiscall process_byte(sha1 * this, uchar param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::uuids::detail::sha1::process_byte(unsigned char) */

void __thiscall boost::uuids::detail::sha1::process_byte(sha1 *this,uchar param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x0;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  sha1 *psVar8;
  undefined1 auStack_88 [8];
  long local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined *local_50;
  long *local_48;
  char *pcStack_40;
  char *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  lVar5 = *(long *)(this + 0x58);
  *(long *)(this + 0x58) = lVar5 + 1;
  this[lVar5 + 0x14] = (sha1)param_1;
  if (*(long *)(this + 0x58) == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
    process_block(this);
  }
  psVar8 = this + 0x60;
  uVar6 = *(ulong *)psVar8;
  if (uVar6 < 0xfffffff8) {
    lVar5 = 8;
                    /* try { // try from 005b7d74 to 006b7e2b has its CatchHandler @ 005b7c8c */
  }
  else {
    psVar8 = this + 0x68;
    uVar6 = *(ulong *)psVar8;
    *(undefined8 *)(this + 0x60) = 0;
    if (0xfffffffe < uVar6) {
      FUN_00666bb8(&local_80,&LAB_0069748c,auStack_88);
      FUN_0064ab28(auStack_78,&local_80);
                    /* catch() { ... } // from try @ 005b7cec with catch @ 005b7df4 */
      local_60 = PTR_DAT_007e4aa8 + 0x10;
      FUN_0066a528(auStack_58,auStack_70);
                    /* catch() { ... } // from try @ 005b7d00 with catch @ 005b7e08 */
      local_60 = PTR_vtable_007e6a50 + 0x10;
      local_50 = PTR_vtable_007e6a50 + 0x38;
                    /* try { // try from 005b7e2c to 006b7e53 has its CatchHandler @ 005b7e5c */
      pcStack_40 = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
      local_48 = (long *)0x0;
      local_38 = "./../../../../Dependencies/boost\\boost/uuid/sha1.hpp";
      local_30 = 0x68;
      throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>
                ((error_info_injector *)&local_60);
                    /* try { // try from 005b7e54 to 006b7e5f has its CatchHandler @ 005b7c8c */
      local_50 = PTR_vtable_007e57f0 + 0x10;
                    /* catch() { ... } // from try @ 005b7e2c with catch @ 005b7e5c */
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))(local_48);
      }
      FUN_0064a024(&local_60);
      FUN_0064a024(auStack_78);
      if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 005b7ec0 to 006b7f37 has its CatchHandler @ 005b7ec0
                       catch() { ... } // from try @ 005b7ec0 with catch @ 005b7ec0
                       catch() { ... } // from try @ 005b7f3c with catch @ 005b7ec0
                       catch() { ... } // from try @ 005b7fe4 with catch @ 005b7ec0
                       catch() { ... } // from try @ 005b8158 with catch @ 005b7ec0 */
        piVar7 = (int *)(local_80 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar1 = *piVar7;
          *piVar7 = iVar1 + -1;
        }
        else {
          do {
            iVar1 = *piVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar1 < 1) {
          operator_delete((undefined *)(local_80 + -0x18));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_006818c4(extraout_x0);
    }
    lVar5 = 1;
  }
  *(ulong *)psVar8 = uVar6 + lVar5;
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


