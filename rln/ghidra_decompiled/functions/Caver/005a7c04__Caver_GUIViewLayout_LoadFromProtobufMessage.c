/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a7c04
 * Function: Caver::GUIViewLayout::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(GUIViewLayout * this, GUIViewLayout * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&) */

void __thiscall
Caver::GUIViewLayout::LoadFromProtobufMessage(GUIViewLayout *this,GUIViewLayout *param_1)

{
  undefined *puVar1;
  GUIViewLayout *pGVar2;
  long lVar3;
  long *plVar4;
  GUIViewLayout *pGVar5;
  GUIViewLayout *pGVar6;
  long lVar7;
  long lVar8;
  GUIViewLayout *local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
  if (((byte)param_1[0x58] >> 2 & 1) != 0) {
    pGVar2 = *(GUIViewLayout **)PTR_default_instance__007e69d0;
    if (*(long *)(param_1 + 0x50) != 0) {
      pGVar2 = param_1;
    }
    GUIMargins::LoadFromProtobufMessage((GUIMargins *)(this + 0x50),*(GUIMargins **)(pGVar2 + 0x50))
    ;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar8 = 0;
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      pGVar5 = operator_new(0x70);
      *(undefined8 *)(pGVar5 + 0x10) = 0;
      *(undefined8 *)(pGVar5 + 0x18) = 0;
      *(undefined **)pGVar5 = puVar1;
      *(undefined8 *)(pGVar5 + 8) = 0;
      *(undefined8 *)(pGVar5 + 0x48) = 0;
      *(undefined8 *)(pGVar5 + 0x50) = 0;
      pGVar6 = pGVar5 + 0x28;
      *(undefined8 *)pGVar6 = 0;
      *(undefined8 *)(pGVar5 + 0x58) = 0;
      *(undefined8 *)(pGVar5 + 0x60) = 0;
      *(undefined8 *)(pGVar5 + 0x68) = 0x3f80000000000000;
      *(undefined8 *)(pGVar5 + 0x30) = 0;
      *(GUIViewLayout **)(pGVar5 + 0x38) = pGVar6;
      *(GUIViewLayout **)(pGVar5 + 0x40) = pGVar6;
      local_68 = pGVar5;
      boost::detail::shared_count::shared_count<Caver::GUIViewLayout>
                ((shared_count *)&local_60,pGVar5);
      boost::detail::sp_enable_shared_from_this(&local_68,pGVar5,pGVar5);
      LoadFromProtobufMessage(local_68,*(GUIViewLayout **)(*(long *)(param_1 + 0x18) + lVar8 * 8));
      AddSubview(this,(shared_ptr *)&local_68);
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar7 = plVar4[2];
        plVar4[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x20));
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


