/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058868c
 * Function: Caver::BindingValue::ConvertToString
 * Signature: undefined __cdecl ConvertToString(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::ConvertToString() const */

void Caver::BindingValue::ConvertToString(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 *in_x0;
  char *pcVar6;
  long *in_x8;
  int *piVar7;
  int iVar8;
  long lVar9;
  Program aPStack_1e8 [8];
  long local_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  long local_1c8;
  long local_1b8;
  undefined *local_1b0;
  char cStack_1a5;
  char acStack_1a4 [44];
  undefined1 auStack_178 [16];
  long local_168;
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  switch(*in_x0) {
  case 1:
    FUN_0066a528();
    break;
  case 2:
    uVar1 = **(uint **)(in_x0 + 2);
    uVar2 = -uVar1;
    if (-1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    *in_x8 = (long)(PTR_DAT_007e5de8 + 0x18);
    pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar2,acStack_1a4);
    if ((int)uVar1 < 0) {
      pcVar6[-1] = '-';
    }
    FUN_00669e1c();
    break;
  case 3:
    uVar2 = **(uint **)(in_x0 + 2);
    *in_x8 = (long)(PTR_DAT_007e5de8 + 0x18);
    boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>(uVar2,&cStack_1a5);
    FUN_00669e1c();
    break;
  case 4:
    if (**(char **)(in_x0 + 2) == '\0') {
      FUN_00666bb8();
    }
    else {
      FUN_00666bb8();
    }
    break;
  case 5:
    FUN_00646a98(&local_1b8,0x10);
    FUN_00641620((double)**(float **)(in_x0 + 2),&local_1b8);
    FUN_006459d8(&local_1b0);
    local_1b8 = *(long *)PTR_PTR_007e6d78;
    *(undefined8 *)((long)&local_1b8 + *(long *)(local_1b8 + -0x18)) =
         *(undefined8 *)(PTR_PTR_007e6d78 + 0x18);
    local_1b0 = PTR_DAT_007e5770 + 0x10;
    if ((undefined *)(local_168 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 0058892c to 00688953 has its CatchHandler @ 00588b70 */
      piVar7 = (int *)(local_168 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_168 + -0x18));
      }
    }
    local_1b0 = PTR_DAT_007e6a48 + 0x10;
    FUN_0063c0c8(auStack_178);
    FUN_006221dc(auStack_160);
                    /* catch() { ... } // from try @ 00588b04 with catch @ 005888e8
                       catch() { ... } // from try @ 00588d2c with catch @ 005888e8 */
    break;
  case 6:
    lVar9 = *(long *)(in_x0 + 2);
    FUN_0066a528(aPStack_1e8,lVar9);
    local_1e0 = *(long *)(lVar9 + 8);
    lStack_1d8 = *(long *)(lVar9 + 0x10);
    if (lStack_1d8 != 0) {
      *(long *)(lStack_1d8 + 8) = *(long *)(lStack_1d8 + 8) + 1;
    }
    local_1d0 = *(undefined8 *)(lVar9 + 0x18);
    local_1c8 = *(long *)(lVar9 + 0x20);
    if (local_1c8 != 0) {
      *(long *)(local_1c8 + 8) = *(long *)(local_1c8 + 8) + 1;
    }
    if (local_1e0 == 0) {
      FUN_00666bb8();
    }
    else {
      FUN_0066a528();
    }
    Program::~Program(aPStack_1e8);
    break;
  default:
    *in_x8 = (long)(PTR_DAT_007e5de8 + 0x18);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


